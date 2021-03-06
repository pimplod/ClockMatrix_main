/* ***************************************************************************
 **    game.h
 **
 **  Project      : 8x15MatrixClock
 **  Target       : PIC18F14K50
 **  Description  :
 **
 **
 **  Compiler     : HI-TECH C  Version 9.80
 **  IDE          : MPLABX v1.80
 **  Created      : September 10, 2013
 **
 **  R Hanlen <implod@gmail.com>
 ** ***************************************************************************/

#ifndef _GAME_H_
#define  _GAME_H_


#define NUM_CYCLES_UNTIL_RESTART 60

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * These #defines declare the size of the overall display in panels  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#define NUM_COLUMNS_PER_FRAME_ROW        (15)
#define NUM_ROWS_PER_FRAME_COL           (8)
#define PIXELS_PER_MEMORY_CHAR           (8)

#define NUM_MEMORY_CHARS_IN_DISPLAY      ( NUM_COLUMNS_PER_FRAME_ROW     \
                                           * NUM_ROWS_PER_FRAME_COL      \
                                           / PIXELS_PER_MEMORY_CHAR )
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * These #defines are just aliases for the above for less verbosity  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#define M (NUM_COLUMNS_PER_FRAME_ROW)
#define N (NUM_ROWS_PER_FRAME_COL)
#define W (PIXELS_PER_MEMORY_CHAR)

#define NUM_DISPLAY_COLUMNS   (M)
#define NUM_DISPLAY_ROWS      (N)

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *  PIXELS_PER_GAME_BOARD_CHAR must be consistent with               *
 *  game_board data-type (e.g. uint8_t)                             *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
uint8_t game_board[NUM_MEMORY_CHARS_IN_DISPLAY];

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * These macros and functions make the code more readable for        *
 * translating between flattened and grid-based coordinates.         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#define FPIXEL(R,C)(                   \
  (N * C) + R                          \
)



#define GAME_BOARD_CHAR_INDEX(R,C)(     \
  (FPIXEL(R,C) / W) \
)

#define GAME_BOARD_PIXEL_OFFSET(R,C)( \
  FPIXEL(R,C) % W  \
)

typedef enum{
  WASTELAND, /* everything outside the board is dead */
  PARADISE,  /* everything outside the board is alive */
  TOROIDAL,  /* board wraps around  through the edges */
  MIRROR,    /* board perimeter gets copied past the edges */
} boundary_condition_t;

boundary_condition_t boundary_condition = TOROIDAL;

void init_game(void);
void game_loop(void);
uint8_t get_board_value(uint8_t row, uint8_t col);
void clear_board_location(uint8_t row, uint8_t col);
void set_board_location(uint8_t row, uint8_t col);
uint8_t calculate_next_game_board(void);
uint8_t get_neighbors(uint8_t row, uint8_t col);
uint8_t num_ones(uint8_t value);
void swap_buffers(void);
void block(void);
void blinker(void);
void glider(void);
void random_board(void);
void copy_buffer(void);

#endif //_GAME_H_
