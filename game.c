/* ***************************************************************************
 **    game.c
 **
 **  Project      :
 **  Target       :
 **  Description  :
 **
 **
 **  Compiler     : HI-TECH C  Version 9.80
 **  IDE          : MPLABX v1.80
 **  Created      : September 10, 2013
 **
 **  R Hanlen <implod@gmail.com>
 ** ***************************************************************************/

/*****************************************************************************
 **HEADER FILES
 *****************************************************************************/

//Compiler-Standard
#include <xc.h>
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */
#include <string.h>

//Project
#include "global.h"
#include "game.h"
#include "delay.h"
#include "input.h"
/*****************************************************************************
 **VARIABLES
 *****************************************************************************/
uint8_t cycle_count = 0;
uint8_t pattern_index = 0;
//extern volatile unsigned long milliseconds;
//extern volatile unsigned char currentState;
/*****************************************************************************
 **FUNCTIONS
 *****************************************************************************/

/* Functions that 'read' from the game board affect the 'foreground' memory*/

uint8_t get_board_value(uint8_t row, uint8_t col){
    return(display.cols[ GAME_BOARD_CHAR_INDEX(row, col) ]
            & (BIT(GAME_BOARD_PIXEL_OFFSET(row, col))))
            >> GAME_BOARD_PIXEL_OFFSET(row, col);
}

/* Functions that 'write' to the game board affect the 'background' memory*/

void clear_board_location(uint8_t row, uint8_t col){
    game_board[ GAME_BOARD_CHAR_INDEX(row, col) ] &=
            ~(BIT(GAME_BOARD_PIXEL_OFFSET(row, col)));
}

void set_board_location(uint8_t row, uint8_t col){
    game_board[ GAME_BOARD_CHAR_INDEX(row, col) ] |=
            BIT(GAME_BOARD_PIXEL_OFFSET(row, col));
}

void init_game(void){

    memset(game_board, 0, sizeof(game_board));

    glider();

    swap_buffers();
}

void game_loop(void){
    
     ZERO_BUTTON_STATES();

     init_game();
    do {
        if (calculate_next_game_board() == 0) random_board();

        //cycle_count++;
        if (NUM_CYCLES_UNTIL_RESTART == cycle_count) {
            cycle_count = 0;
            //memset(game_board, 0, sizeof(game_board));
            pattern_index = (pattern_index + 1) % 4;

            switch (pattern_index) {

                case 0:
                    glider();
                    //				swap_buffers();
                    //				glider();
                    break;
                case 1:
                    block();
                    //				swap_buffers();
                    //				block();
                    break;
                case 2:
                    blinker();
                    //				swap_buffers();
                    //				blinker();
                    break;
                case 3:
                    random_board();
                    //				swap_buffers();
                    //				copy_buffer();
                    break;
            }
        }
        cycle_count++;

        swap_buffers();
        DelayMs(200);

        ReadButtonState();

        if(buttonState[BUTTON_1] == ON){
            currentState = TIME_NUMERICAL;
        }

        if(buttonState[BUTTON_0] == ON){
            cycle_count = NUM_CYCLES_UNTIL_RESTART;
        }

    } while(currentState == GAME);
   
}

uint8_t calculate_next_game_board(void){

    uint8_t alive_count = 0;

    for (uint8_t row = 0; row < NUM_DISPLAY_ROWS; row++) {
        for (uint8_t col = 0; col < NUM_DISPLAY_COLUMNS; col++) {
            uint8_t neighbors = get_neighbors(row, col);
            uint8_t num_living_neighbors = num_ones(neighbors);
            uint8_t cell_is_alive = get_board_value(row, col);

            if (cell_is_alive) {
                if (num_living_neighbors < 2 || num_living_neighbors > 3) {
                    clear_board_location(row, col); /* death */
                } else {
                    set_board_location(row, col); /* survival */
                    alive_count++;
                }
            } else {
                if (num_living_neighbors == 3) {
                    set_board_location(row, col); /* birth */
                    alive_count++;
                } else {
                    clear_board_location(row, col); /* desolation */
                }
            }

        }
    }
    return alive_count;
}

uint8_t get_neighbors(uint8_t row, uint8_t col){
    uint8_t return_value = 0;
    int8_t r = 0, c = 0;
    uint8_t neighbor_value = 0;

    for (int8_t rr = -1; rr <= 1; rr++) {
        for (int8_t cc = -1; cc <= 1; cc++) {
            if (rr != 0 || cc != 0) { // you can't be your own neighbor
                r = row + rr;
                c = col + cc;

                if ((r < 0) || (r >= NUM_DISPLAY_ROWS) || (c < 0) || (c >= NUM_DISPLAY_COLUMNS)) {
                    switch (boundary_condition) {
                        case WASTELAND:
                            neighbor_value = 0;
                            break;
                        case PARADISE:
                            neighbor_value = 1;
                            break;
                        case TOROIDAL:
                            if (r < 0) r = NUM_DISPLAY_ROWS - 1;
                            else if (r >= NUM_DISPLAY_ROWS) r = 0;
                            if (c < 0) c = NUM_DISPLAY_COLUMNS - 1;
                            else if (c >= NUM_DISPLAY_COLUMNS) c = 0;
                            neighbor_value = get_board_value(r, c);
                            break;
                        case MIRROR:
                            neighbor_value = get_board_value(row, col);
                            break;
                    }
                } else {
                    neighbor_value = get_board_value(r, c);
                }

                return_value <<= 1;
                return_value |= neighbor_value;
            }
        }
    }

    return return_value;
}

uint8_t num_ones(uint8_t v){
    uint8_t c; // c accumulates the total bits set in v
    for (c = 0; v; c++) {
        v &= (v - 1); // clear the least significant bit set
    }
    return c;
}

void swap_buffers(void){
    //CURRENT_GAMEBOARD = PREVIOUS_GAMEBOARD;
    for (uint8_t col = 0; col < NUM_DISPLAY_COLUMNS; col++) {
        display.cols[col] = game_board[col];
    }
}

/* block */
void block(){
    set_board_location(2, 3);
    set_board_location(2, 4);
    set_board_location(3, 3);
    set_board_location(4, 6);
    set_board_location(5, 5);
    set_board_location(5, 6);
}

/* blinker */
void blinker(){
    uint8_t row = milliseconds % (NUM_DISPLAY_ROWS);
    set_board_location(row, 2);
    set_board_location(row, 3);
    set_board_location(row, 4);
}

/* glider */
void glider(){
    uint8_t row = milliseconds % (NUM_DISPLAY_ROWS - 2);
    uint8_t col = TMR0L % (NUM_DISPLAY_COLUMNS - 2);
    set_board_location(row + 2, col);
    set_board_location(row + 2, col + 1);
    set_board_location(row + 2, col + 2);
    set_board_location(row + 1, col + 2);
    set_board_location(row, col + 1);
}

void random_board(){
    uint16_t result;

    for (uint8_t row = 0; row < NUM_DISPLAY_ROWS; row++) {
        GODONE = SET;
        while(GODONE);
        result = ADRESL;
        result += (ADRESH << 8);
        result += (READTIMER1());
        for (uint8_t col = 0; col < NUM_DISPLAY_COLUMNS; col++) {
            if ((result >> col) & 0x01) {
                set_board_location(row, col);
            } else {
                clear_board_location(row, col);
            }
        }
    }
}

void copy_buffer(){
    for (uint8_t row = 0; row < NUM_DISPLAY_ROWS; row++) {
        for (uint8_t col = 0; col < NUM_DISPLAY_COLUMNS; col++) {
            if (get_board_value(row, col)) {
                set_board_location(row, col);
            } else {
                clear_board_location(row, col);
            }
        }
    }
}

