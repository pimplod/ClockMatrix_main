// Version 1.33 (A)
// Generated 03/09/2014 GMT

/*
 * This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *     1. Redistributions of source code must retain the above copyright notice, this list of
 *        conditions and the following disclaimer.
 *     2. Redistributions in binary form must reproduce the above copyright notice, this list
 *        of conditions and the following disclaimer in the documentation and/or other
 *        materials provided with the distribution.
 *     3. All advertising materials mentioning features or use of this software must display
 *        the following acknowledgement: "This product includes software developed by
 *        Microchip Technology Inc. and its subsidiaries."
 *     4. Microchip's name may not be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIC18F14K50_H_
#define _PIC18F14K50_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F14K50
 */
#ifndef __XC8
#warning Header file pic18f14k50.h included directly. Use #include <xc.h> instead.
#endif

/*
 * Register Definitions
 */

// Register: UEP0
extern volatile unsigned char           UEP0                @ 0xF53;
#ifndef _LIB_BUILD
asm("UEP0 equ 0F53h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP0CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP0HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP0INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP0OUTEN               :1;
    };
    struct {
        unsigned EP0STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS0              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK0                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN0                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN0               :1;
    };
    struct {
        unsigned EPSTALL0               :1;
    };
} UEP0bits_t;
extern volatile UEP0bits_t UEP0bits @ 0xF53;
// bitfield macros
#define _UEP0_EPSTALL_POSN                                  0x0
#define _UEP0_EPSTALL_POSITION                              0x0
#define _UEP0_EPSTALL_SIZE                                  0x1
#define _UEP0_EPSTALL_LENGTH                                0x1
#define _UEP0_EPSTALL_MASK                                  0x1
#define _UEP0_EPINEN_POSN                                   0x1
#define _UEP0_EPINEN_POSITION                               0x1
#define _UEP0_EPINEN_SIZE                                   0x1
#define _UEP0_EPINEN_LENGTH                                 0x1
#define _UEP0_EPINEN_MASK                                   0x2
#define _UEP0_EPOUTEN_POSN                                  0x2
#define _UEP0_EPOUTEN_POSITION                              0x2
#define _UEP0_EPOUTEN_SIZE                                  0x1
#define _UEP0_EPOUTEN_LENGTH                                0x1
#define _UEP0_EPOUTEN_MASK                                  0x4
#define _UEP0_EPCONDIS_POSN                                 0x3
#define _UEP0_EPCONDIS_POSITION                             0x3
#define _UEP0_EPCONDIS_SIZE                                 0x1
#define _UEP0_EPCONDIS_LENGTH                               0x1
#define _UEP0_EPCONDIS_MASK                                 0x8
#define _UEP0_EPHSHK_POSN                                   0x4
#define _UEP0_EPHSHK_POSITION                               0x4
#define _UEP0_EPHSHK_SIZE                                   0x1
#define _UEP0_EPHSHK_LENGTH                                 0x1
#define _UEP0_EPHSHK_MASK                                   0x10
#define _UEP0_EP0CONDIS_POSN                                0x3
#define _UEP0_EP0CONDIS_POSITION                            0x3
#define _UEP0_EP0CONDIS_SIZE                                0x1
#define _UEP0_EP0CONDIS_LENGTH                              0x1
#define _UEP0_EP0CONDIS_MASK                                0x8
#define _UEP0_EP0HSHK_POSN                                  0x4
#define _UEP0_EP0HSHK_POSITION                              0x4
#define _UEP0_EP0HSHK_SIZE                                  0x1
#define _UEP0_EP0HSHK_LENGTH                                0x1
#define _UEP0_EP0HSHK_MASK                                  0x10
#define _UEP0_EP0INEN_POSN                                  0x1
#define _UEP0_EP0INEN_POSITION                              0x1
#define _UEP0_EP0INEN_SIZE                                  0x1
#define _UEP0_EP0INEN_LENGTH                                0x1
#define _UEP0_EP0INEN_MASK                                  0x2
#define _UEP0_EP0OUTEN_POSN                                 0x2
#define _UEP0_EP0OUTEN_POSITION                             0x2
#define _UEP0_EP0OUTEN_SIZE                                 0x1
#define _UEP0_EP0OUTEN_LENGTH                               0x1
#define _UEP0_EP0OUTEN_MASK                                 0x4
#define _UEP0_EP0STALL_POSN                                 0x0
#define _UEP0_EP0STALL_POSITION                             0x0
#define _UEP0_EP0STALL_SIZE                                 0x1
#define _UEP0_EP0STALL_LENGTH                               0x1
#define _UEP0_EP0STALL_MASK                                 0x1
#define _UEP0_EPCONDIS0_POSN                                0x3
#define _UEP0_EPCONDIS0_POSITION                            0x3
#define _UEP0_EPCONDIS0_SIZE                                0x1
#define _UEP0_EPCONDIS0_LENGTH                              0x1
#define _UEP0_EPCONDIS0_MASK                                0x8
#define _UEP0_EPHSHK0_POSN                                  0x4
#define _UEP0_EPHSHK0_POSITION                              0x4
#define _UEP0_EPHSHK0_SIZE                                  0x1
#define _UEP0_EPHSHK0_LENGTH                                0x1
#define _UEP0_EPHSHK0_MASK                                  0x10
#define _UEP0_EPINEN0_POSN                                  0x1
#define _UEP0_EPINEN0_POSITION                              0x1
#define _UEP0_EPINEN0_SIZE                                  0x1
#define _UEP0_EPINEN0_LENGTH                                0x1
#define _UEP0_EPINEN0_MASK                                  0x2
#define _UEP0_EPOUTEN0_POSN                                 0x2
#define _UEP0_EPOUTEN0_POSITION                             0x2
#define _UEP0_EPOUTEN0_SIZE                                 0x1
#define _UEP0_EPOUTEN0_LENGTH                               0x1
#define _UEP0_EPOUTEN0_MASK                                 0x4
#define _UEP0_EPSTALL0_POSN                                 0x0
#define _UEP0_EPSTALL0_POSITION                             0x0
#define _UEP0_EPSTALL0_SIZE                                 0x1
#define _UEP0_EPSTALL0_LENGTH                               0x1
#define _UEP0_EPSTALL0_MASK                                 0x1

// Register: UEP1
extern volatile unsigned char           UEP1                @ 0xF54;
#ifndef _LIB_BUILD
asm("UEP1 equ 0F54h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP1CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP1HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP1INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP1OUTEN               :1;
    };
    struct {
        unsigned EP1STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS1              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK1                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN1               :1;
    };
    struct {
        unsigned EPSTALL1               :1;
    };
} UEP1bits_t;
extern volatile UEP1bits_t UEP1bits @ 0xF54;
// bitfield macros
#define _UEP1_EPSTALL_POSN                                  0x0
#define _UEP1_EPSTALL_POSITION                              0x0
#define _UEP1_EPSTALL_SIZE                                  0x1
#define _UEP1_EPSTALL_LENGTH                                0x1
#define _UEP1_EPSTALL_MASK                                  0x1
#define _UEP1_EPINEN_POSN                                   0x1
#define _UEP1_EPINEN_POSITION                               0x1
#define _UEP1_EPINEN_SIZE                                   0x1
#define _UEP1_EPINEN_LENGTH                                 0x1
#define _UEP1_EPINEN_MASK                                   0x2
#define _UEP1_EPOUTEN_POSN                                  0x2
#define _UEP1_EPOUTEN_POSITION                              0x2
#define _UEP1_EPOUTEN_SIZE                                  0x1
#define _UEP1_EPOUTEN_LENGTH                                0x1
#define _UEP1_EPOUTEN_MASK                                  0x4
#define _UEP1_EPCONDIS_POSN                                 0x3
#define _UEP1_EPCONDIS_POSITION                             0x3
#define _UEP1_EPCONDIS_SIZE                                 0x1
#define _UEP1_EPCONDIS_LENGTH                               0x1
#define _UEP1_EPCONDIS_MASK                                 0x8
#define _UEP1_EPHSHK_POSN                                   0x4
#define _UEP1_EPHSHK_POSITION                               0x4
#define _UEP1_EPHSHK_SIZE                                   0x1
#define _UEP1_EPHSHK_LENGTH                                 0x1
#define _UEP1_EPHSHK_MASK                                   0x10
#define _UEP1_EP1CONDIS_POSN                                0x3
#define _UEP1_EP1CONDIS_POSITION                            0x3
#define _UEP1_EP1CONDIS_SIZE                                0x1
#define _UEP1_EP1CONDIS_LENGTH                              0x1
#define _UEP1_EP1CONDIS_MASK                                0x8
#define _UEP1_EP1HSHK_POSN                                  0x4
#define _UEP1_EP1HSHK_POSITION                              0x4
#define _UEP1_EP1HSHK_SIZE                                  0x1
#define _UEP1_EP1HSHK_LENGTH                                0x1
#define _UEP1_EP1HSHK_MASK                                  0x10
#define _UEP1_EP1INEN_POSN                                  0x1
#define _UEP1_EP1INEN_POSITION                              0x1
#define _UEP1_EP1INEN_SIZE                                  0x1
#define _UEP1_EP1INEN_LENGTH                                0x1
#define _UEP1_EP1INEN_MASK                                  0x2
#define _UEP1_EP1OUTEN_POSN                                 0x2
#define _UEP1_EP1OUTEN_POSITION                             0x2
#define _UEP1_EP1OUTEN_SIZE                                 0x1
#define _UEP1_EP1OUTEN_LENGTH                               0x1
#define _UEP1_EP1OUTEN_MASK                                 0x4
#define _UEP1_EP1STALL_POSN                                 0x0
#define _UEP1_EP1STALL_POSITION                             0x0
#define _UEP1_EP1STALL_SIZE                                 0x1
#define _UEP1_EP1STALL_LENGTH                               0x1
#define _UEP1_EP1STALL_MASK                                 0x1
#define _UEP1_EPCONDIS1_POSN                                0x3
#define _UEP1_EPCONDIS1_POSITION                            0x3
#define _UEP1_EPCONDIS1_SIZE                                0x1
#define _UEP1_EPCONDIS1_LENGTH                              0x1
#define _UEP1_EPCONDIS1_MASK                                0x8
#define _UEP1_EPHSHK1_POSN                                  0x4
#define _UEP1_EPHSHK1_POSITION                              0x4
#define _UEP1_EPHSHK1_SIZE                                  0x1
#define _UEP1_EPHSHK1_LENGTH                                0x1
#define _UEP1_EPHSHK1_MASK                                  0x10
#define _UEP1_EPINEN1_POSN                                  0x1
#define _UEP1_EPINEN1_POSITION                              0x1
#define _UEP1_EPINEN1_SIZE                                  0x1
#define _UEP1_EPINEN1_LENGTH                                0x1
#define _UEP1_EPINEN1_MASK                                  0x2
#define _UEP1_EPOUTEN1_POSN                                 0x2
#define _UEP1_EPOUTEN1_POSITION                             0x2
#define _UEP1_EPOUTEN1_SIZE                                 0x1
#define _UEP1_EPOUTEN1_LENGTH                               0x1
#define _UEP1_EPOUTEN1_MASK                                 0x4
#define _UEP1_EPSTALL1_POSN                                 0x0
#define _UEP1_EPSTALL1_POSITION                             0x0
#define _UEP1_EPSTALL1_SIZE                                 0x1
#define _UEP1_EPSTALL1_LENGTH                               0x1
#define _UEP1_EPSTALL1_MASK                                 0x1

// Register: UEP2
extern volatile unsigned char           UEP2                @ 0xF55;
#ifndef _LIB_BUILD
asm("UEP2 equ 0F55h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP2CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP2HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP2INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP2OUTEN               :1;
    };
    struct {
        unsigned EP2STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS2              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK2                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN2                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN2               :1;
    };
    struct {
        unsigned EPSTALL2               :1;
    };
} UEP2bits_t;
extern volatile UEP2bits_t UEP2bits @ 0xF55;
// bitfield macros
#define _UEP2_EPSTALL_POSN                                  0x0
#define _UEP2_EPSTALL_POSITION                              0x0
#define _UEP2_EPSTALL_SIZE                                  0x1
#define _UEP2_EPSTALL_LENGTH                                0x1
#define _UEP2_EPSTALL_MASK                                  0x1
#define _UEP2_EPINEN_POSN                                   0x1
#define _UEP2_EPINEN_POSITION                               0x1
#define _UEP2_EPINEN_SIZE                                   0x1
#define _UEP2_EPINEN_LENGTH                                 0x1
#define _UEP2_EPINEN_MASK                                   0x2
#define _UEP2_EPOUTEN_POSN                                  0x2
#define _UEP2_EPOUTEN_POSITION                              0x2
#define _UEP2_EPOUTEN_SIZE                                  0x1
#define _UEP2_EPOUTEN_LENGTH                                0x1
#define _UEP2_EPOUTEN_MASK                                  0x4
#define _UEP2_EPCONDIS_POSN                                 0x3
#define _UEP2_EPCONDIS_POSITION                             0x3
#define _UEP2_EPCONDIS_SIZE                                 0x1
#define _UEP2_EPCONDIS_LENGTH                               0x1
#define _UEP2_EPCONDIS_MASK                                 0x8
#define _UEP2_EPHSHK_POSN                                   0x4
#define _UEP2_EPHSHK_POSITION                               0x4
#define _UEP2_EPHSHK_SIZE                                   0x1
#define _UEP2_EPHSHK_LENGTH                                 0x1
#define _UEP2_EPHSHK_MASK                                   0x10
#define _UEP2_EP2CONDIS_POSN                                0x3
#define _UEP2_EP2CONDIS_POSITION                            0x3
#define _UEP2_EP2CONDIS_SIZE                                0x1
#define _UEP2_EP2CONDIS_LENGTH                              0x1
#define _UEP2_EP2CONDIS_MASK                                0x8
#define _UEP2_EP2HSHK_POSN                                  0x4
#define _UEP2_EP2HSHK_POSITION                              0x4
#define _UEP2_EP2HSHK_SIZE                                  0x1
#define _UEP2_EP2HSHK_LENGTH                                0x1
#define _UEP2_EP2HSHK_MASK                                  0x10
#define _UEP2_EP2INEN_POSN                                  0x1
#define _UEP2_EP2INEN_POSITION                              0x1
#define _UEP2_EP2INEN_SIZE                                  0x1
#define _UEP2_EP2INEN_LENGTH                                0x1
#define _UEP2_EP2INEN_MASK                                  0x2
#define _UEP2_EP2OUTEN_POSN                                 0x2
#define _UEP2_EP2OUTEN_POSITION                             0x2
#define _UEP2_EP2OUTEN_SIZE                                 0x1
#define _UEP2_EP2OUTEN_LENGTH                               0x1
#define _UEP2_EP2OUTEN_MASK                                 0x4
#define _UEP2_EP2STALL_POSN                                 0x0
#define _UEP2_EP2STALL_POSITION                             0x0
#define _UEP2_EP2STALL_SIZE                                 0x1
#define _UEP2_EP2STALL_LENGTH                               0x1
#define _UEP2_EP2STALL_MASK                                 0x1
#define _UEP2_EPCONDIS2_POSN                                0x3
#define _UEP2_EPCONDIS2_POSITION                            0x3
#define _UEP2_EPCONDIS2_SIZE                                0x1
#define _UEP2_EPCONDIS2_LENGTH                              0x1
#define _UEP2_EPCONDIS2_MASK                                0x8
#define _UEP2_EPHSHK2_POSN                                  0x4
#define _UEP2_EPHSHK2_POSITION                              0x4
#define _UEP2_EPHSHK2_SIZE                                  0x1
#define _UEP2_EPHSHK2_LENGTH                                0x1
#define _UEP2_EPHSHK2_MASK                                  0x10
#define _UEP2_EPINEN2_POSN                                  0x1
#define _UEP2_EPINEN2_POSITION                              0x1
#define _UEP2_EPINEN2_SIZE                                  0x1
#define _UEP2_EPINEN2_LENGTH                                0x1
#define _UEP2_EPINEN2_MASK                                  0x2
#define _UEP2_EPOUTEN2_POSN                                 0x2
#define _UEP2_EPOUTEN2_POSITION                             0x2
#define _UEP2_EPOUTEN2_SIZE                                 0x1
#define _UEP2_EPOUTEN2_LENGTH                               0x1
#define _UEP2_EPOUTEN2_MASK                                 0x4
#define _UEP2_EPSTALL2_POSN                                 0x0
#define _UEP2_EPSTALL2_POSITION                             0x0
#define _UEP2_EPSTALL2_SIZE                                 0x1
#define _UEP2_EPSTALL2_LENGTH                               0x1
#define _UEP2_EPSTALL2_MASK                                 0x1

// Register: UEP3
extern volatile unsigned char           UEP3                @ 0xF56;
#ifndef _LIB_BUILD
asm("UEP3 equ 0F56h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP3CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP3HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP3INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP3OUTEN               :1;
    };
    struct {
        unsigned EP3STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS3              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK3                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN3                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN3               :1;
    };
    struct {
        unsigned EPSTALL3               :1;
    };
} UEP3bits_t;
extern volatile UEP3bits_t UEP3bits @ 0xF56;
// bitfield macros
#define _UEP3_EPSTALL_POSN                                  0x0
#define _UEP3_EPSTALL_POSITION                              0x0
#define _UEP3_EPSTALL_SIZE                                  0x1
#define _UEP3_EPSTALL_LENGTH                                0x1
#define _UEP3_EPSTALL_MASK                                  0x1
#define _UEP3_EPINEN_POSN                                   0x1
#define _UEP3_EPINEN_POSITION                               0x1
#define _UEP3_EPINEN_SIZE                                   0x1
#define _UEP3_EPINEN_LENGTH                                 0x1
#define _UEP3_EPINEN_MASK                                   0x2
#define _UEP3_EPOUTEN_POSN                                  0x2
#define _UEP3_EPOUTEN_POSITION                              0x2
#define _UEP3_EPOUTEN_SIZE                                  0x1
#define _UEP3_EPOUTEN_LENGTH                                0x1
#define _UEP3_EPOUTEN_MASK                                  0x4
#define _UEP3_EPCONDIS_POSN                                 0x3
#define _UEP3_EPCONDIS_POSITION                             0x3
#define _UEP3_EPCONDIS_SIZE                                 0x1
#define _UEP3_EPCONDIS_LENGTH                               0x1
#define _UEP3_EPCONDIS_MASK                                 0x8
#define _UEP3_EPHSHK_POSN                                   0x4
#define _UEP3_EPHSHK_POSITION                               0x4
#define _UEP3_EPHSHK_SIZE                                   0x1
#define _UEP3_EPHSHK_LENGTH                                 0x1
#define _UEP3_EPHSHK_MASK                                   0x10
#define _UEP3_EP3CONDIS_POSN                                0x3
#define _UEP3_EP3CONDIS_POSITION                            0x3
#define _UEP3_EP3CONDIS_SIZE                                0x1
#define _UEP3_EP3CONDIS_LENGTH                              0x1
#define _UEP3_EP3CONDIS_MASK                                0x8
#define _UEP3_EP3HSHK_POSN                                  0x4
#define _UEP3_EP3HSHK_POSITION                              0x4
#define _UEP3_EP3HSHK_SIZE                                  0x1
#define _UEP3_EP3HSHK_LENGTH                                0x1
#define _UEP3_EP3HSHK_MASK                                  0x10
#define _UEP3_EP3INEN_POSN                                  0x1
#define _UEP3_EP3INEN_POSITION                              0x1
#define _UEP3_EP3INEN_SIZE                                  0x1
#define _UEP3_EP3INEN_LENGTH                                0x1
#define _UEP3_EP3INEN_MASK                                  0x2
#define _UEP3_EP3OUTEN_POSN                                 0x2
#define _UEP3_EP3OUTEN_POSITION                             0x2
#define _UEP3_EP3OUTEN_SIZE                                 0x1
#define _UEP3_EP3OUTEN_LENGTH                               0x1
#define _UEP3_EP3OUTEN_MASK                                 0x4
#define _UEP3_EP3STALL_POSN                                 0x0
#define _UEP3_EP3STALL_POSITION                             0x0
#define _UEP3_EP3STALL_SIZE                                 0x1
#define _UEP3_EP3STALL_LENGTH                               0x1
#define _UEP3_EP3STALL_MASK                                 0x1
#define _UEP3_EPCONDIS3_POSN                                0x3
#define _UEP3_EPCONDIS3_POSITION                            0x3
#define _UEP3_EPCONDIS3_SIZE                                0x1
#define _UEP3_EPCONDIS3_LENGTH                              0x1
#define _UEP3_EPCONDIS3_MASK                                0x8
#define _UEP3_EPHSHK3_POSN                                  0x4
#define _UEP3_EPHSHK3_POSITION                              0x4
#define _UEP3_EPHSHK3_SIZE                                  0x1
#define _UEP3_EPHSHK3_LENGTH                                0x1
#define _UEP3_EPHSHK3_MASK                                  0x10
#define _UEP3_EPINEN3_POSN                                  0x1
#define _UEP3_EPINEN3_POSITION                              0x1
#define _UEP3_EPINEN3_SIZE                                  0x1
#define _UEP3_EPINEN3_LENGTH                                0x1
#define _UEP3_EPINEN3_MASK                                  0x2
#define _UEP3_EPOUTEN3_POSN                                 0x2
#define _UEP3_EPOUTEN3_POSITION                             0x2
#define _UEP3_EPOUTEN3_SIZE                                 0x1
#define _UEP3_EPOUTEN3_LENGTH                               0x1
#define _UEP3_EPOUTEN3_MASK                                 0x4
#define _UEP3_EPSTALL3_POSN                                 0x0
#define _UEP3_EPSTALL3_POSITION                             0x0
#define _UEP3_EPSTALL3_SIZE                                 0x1
#define _UEP3_EPSTALL3_LENGTH                               0x1
#define _UEP3_EPSTALL3_MASK                                 0x1

// Register: UEP4
extern volatile unsigned char           UEP4                @ 0xF57;
#ifndef _LIB_BUILD
asm("UEP4 equ 0F57h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP4CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP4HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP4INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP4OUTEN               :1;
    };
    struct {
        unsigned EP4STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS4              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK4                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN4                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN4               :1;
    };
    struct {
        unsigned EPSTALL4               :1;
    };
} UEP4bits_t;
extern volatile UEP4bits_t UEP4bits @ 0xF57;
// bitfield macros
#define _UEP4_EPSTALL_POSN                                  0x0
#define _UEP4_EPSTALL_POSITION                              0x0
#define _UEP4_EPSTALL_SIZE                                  0x1
#define _UEP4_EPSTALL_LENGTH                                0x1
#define _UEP4_EPSTALL_MASK                                  0x1
#define _UEP4_EPINEN_POSN                                   0x1
#define _UEP4_EPINEN_POSITION                               0x1
#define _UEP4_EPINEN_SIZE                                   0x1
#define _UEP4_EPINEN_LENGTH                                 0x1
#define _UEP4_EPINEN_MASK                                   0x2
#define _UEP4_EPOUTEN_POSN                                  0x2
#define _UEP4_EPOUTEN_POSITION                              0x2
#define _UEP4_EPOUTEN_SIZE                                  0x1
#define _UEP4_EPOUTEN_LENGTH                                0x1
#define _UEP4_EPOUTEN_MASK                                  0x4
#define _UEP4_EPCONDIS_POSN                                 0x3
#define _UEP4_EPCONDIS_POSITION                             0x3
#define _UEP4_EPCONDIS_SIZE                                 0x1
#define _UEP4_EPCONDIS_LENGTH                               0x1
#define _UEP4_EPCONDIS_MASK                                 0x8
#define _UEP4_EPHSHK_POSN                                   0x4
#define _UEP4_EPHSHK_POSITION                               0x4
#define _UEP4_EPHSHK_SIZE                                   0x1
#define _UEP4_EPHSHK_LENGTH                                 0x1
#define _UEP4_EPHSHK_MASK                                   0x10
#define _UEP4_EP4CONDIS_POSN                                0x3
#define _UEP4_EP4CONDIS_POSITION                            0x3
#define _UEP4_EP4CONDIS_SIZE                                0x1
#define _UEP4_EP4CONDIS_LENGTH                              0x1
#define _UEP4_EP4CONDIS_MASK                                0x8
#define _UEP4_EP4HSHK_POSN                                  0x4
#define _UEP4_EP4HSHK_POSITION                              0x4
#define _UEP4_EP4HSHK_SIZE                                  0x1
#define _UEP4_EP4HSHK_LENGTH                                0x1
#define _UEP4_EP4HSHK_MASK                                  0x10
#define _UEP4_EP4INEN_POSN                                  0x1
#define _UEP4_EP4INEN_POSITION                              0x1
#define _UEP4_EP4INEN_SIZE                                  0x1
#define _UEP4_EP4INEN_LENGTH                                0x1
#define _UEP4_EP4INEN_MASK                                  0x2
#define _UEP4_EP4OUTEN_POSN                                 0x2
#define _UEP4_EP4OUTEN_POSITION                             0x2
#define _UEP4_EP4OUTEN_SIZE                                 0x1
#define _UEP4_EP4OUTEN_LENGTH                               0x1
#define _UEP4_EP4OUTEN_MASK                                 0x4
#define _UEP4_EP4STALL_POSN                                 0x0
#define _UEP4_EP4STALL_POSITION                             0x0
#define _UEP4_EP4STALL_SIZE                                 0x1
#define _UEP4_EP4STALL_LENGTH                               0x1
#define _UEP4_EP4STALL_MASK                                 0x1
#define _UEP4_EPCONDIS4_POSN                                0x3
#define _UEP4_EPCONDIS4_POSITION                            0x3
#define _UEP4_EPCONDIS4_SIZE                                0x1
#define _UEP4_EPCONDIS4_LENGTH                              0x1
#define _UEP4_EPCONDIS4_MASK                                0x8
#define _UEP4_EPHSHK4_POSN                                  0x4
#define _UEP4_EPHSHK4_POSITION                              0x4
#define _UEP4_EPHSHK4_SIZE                                  0x1
#define _UEP4_EPHSHK4_LENGTH                                0x1
#define _UEP4_EPHSHK4_MASK                                  0x10
#define _UEP4_EPINEN4_POSN                                  0x1
#define _UEP4_EPINEN4_POSITION                              0x1
#define _UEP4_EPINEN4_SIZE                                  0x1
#define _UEP4_EPINEN4_LENGTH                                0x1
#define _UEP4_EPINEN4_MASK                                  0x2
#define _UEP4_EPOUTEN4_POSN                                 0x2
#define _UEP4_EPOUTEN4_POSITION                             0x2
#define _UEP4_EPOUTEN4_SIZE                                 0x1
#define _UEP4_EPOUTEN4_LENGTH                               0x1
#define _UEP4_EPOUTEN4_MASK                                 0x4
#define _UEP4_EPSTALL4_POSN                                 0x0
#define _UEP4_EPSTALL4_POSITION                             0x0
#define _UEP4_EPSTALL4_SIZE                                 0x1
#define _UEP4_EPSTALL4_LENGTH                               0x1
#define _UEP4_EPSTALL4_MASK                                 0x1

// Register: UEP5
extern volatile unsigned char           UEP5                @ 0xF58;
#ifndef _LIB_BUILD
asm("UEP5 equ 0F58h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP5CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP5HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP5INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP5OUTEN               :1;
    };
    struct {
        unsigned EP5STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS5              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK5                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN5                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN5               :1;
    };
    struct {
        unsigned EPSTALL5               :1;
    };
} UEP5bits_t;
extern volatile UEP5bits_t UEP5bits @ 0xF58;
// bitfield macros
#define _UEP5_EPSTALL_POSN                                  0x0
#define _UEP5_EPSTALL_POSITION                              0x0
#define _UEP5_EPSTALL_SIZE                                  0x1
#define _UEP5_EPSTALL_LENGTH                                0x1
#define _UEP5_EPSTALL_MASK                                  0x1
#define _UEP5_EPINEN_POSN                                   0x1
#define _UEP5_EPINEN_POSITION                               0x1
#define _UEP5_EPINEN_SIZE                                   0x1
#define _UEP5_EPINEN_LENGTH                                 0x1
#define _UEP5_EPINEN_MASK                                   0x2
#define _UEP5_EPOUTEN_POSN                                  0x2
#define _UEP5_EPOUTEN_POSITION                              0x2
#define _UEP5_EPOUTEN_SIZE                                  0x1
#define _UEP5_EPOUTEN_LENGTH                                0x1
#define _UEP5_EPOUTEN_MASK                                  0x4
#define _UEP5_EPCONDIS_POSN                                 0x3
#define _UEP5_EPCONDIS_POSITION                             0x3
#define _UEP5_EPCONDIS_SIZE                                 0x1
#define _UEP5_EPCONDIS_LENGTH                               0x1
#define _UEP5_EPCONDIS_MASK                                 0x8
#define _UEP5_EPHSHK_POSN                                   0x4
#define _UEP5_EPHSHK_POSITION                               0x4
#define _UEP5_EPHSHK_SIZE                                   0x1
#define _UEP5_EPHSHK_LENGTH                                 0x1
#define _UEP5_EPHSHK_MASK                                   0x10
#define _UEP5_EP5CONDIS_POSN                                0x3
#define _UEP5_EP5CONDIS_POSITION                            0x3
#define _UEP5_EP5CONDIS_SIZE                                0x1
#define _UEP5_EP5CONDIS_LENGTH                              0x1
#define _UEP5_EP5CONDIS_MASK                                0x8
#define _UEP5_EP5HSHK_POSN                                  0x4
#define _UEP5_EP5HSHK_POSITION                              0x4
#define _UEP5_EP5HSHK_SIZE                                  0x1
#define _UEP5_EP5HSHK_LENGTH                                0x1
#define _UEP5_EP5HSHK_MASK                                  0x10
#define _UEP5_EP5INEN_POSN                                  0x1
#define _UEP5_EP5INEN_POSITION                              0x1
#define _UEP5_EP5INEN_SIZE                                  0x1
#define _UEP5_EP5INEN_LENGTH                                0x1
#define _UEP5_EP5INEN_MASK                                  0x2
#define _UEP5_EP5OUTEN_POSN                                 0x2
#define _UEP5_EP5OUTEN_POSITION                             0x2
#define _UEP5_EP5OUTEN_SIZE                                 0x1
#define _UEP5_EP5OUTEN_LENGTH                               0x1
#define _UEP5_EP5OUTEN_MASK                                 0x4
#define _UEP5_EP5STALL_POSN                                 0x0
#define _UEP5_EP5STALL_POSITION                             0x0
#define _UEP5_EP5STALL_SIZE                                 0x1
#define _UEP5_EP5STALL_LENGTH                               0x1
#define _UEP5_EP5STALL_MASK                                 0x1
#define _UEP5_EPCONDIS5_POSN                                0x3
#define _UEP5_EPCONDIS5_POSITION                            0x3
#define _UEP5_EPCONDIS5_SIZE                                0x1
#define _UEP5_EPCONDIS5_LENGTH                              0x1
#define _UEP5_EPCONDIS5_MASK                                0x8
#define _UEP5_EPHSHK5_POSN                                  0x4
#define _UEP5_EPHSHK5_POSITION                              0x4
#define _UEP5_EPHSHK5_SIZE                                  0x1
#define _UEP5_EPHSHK5_LENGTH                                0x1
#define _UEP5_EPHSHK5_MASK                                  0x10
#define _UEP5_EPINEN5_POSN                                  0x1
#define _UEP5_EPINEN5_POSITION                              0x1
#define _UEP5_EPINEN5_SIZE                                  0x1
#define _UEP5_EPINEN5_LENGTH                                0x1
#define _UEP5_EPINEN5_MASK                                  0x2
#define _UEP5_EPOUTEN5_POSN                                 0x2
#define _UEP5_EPOUTEN5_POSITION                             0x2
#define _UEP5_EPOUTEN5_SIZE                                 0x1
#define _UEP5_EPOUTEN5_LENGTH                               0x1
#define _UEP5_EPOUTEN5_MASK                                 0x4
#define _UEP5_EPSTALL5_POSN                                 0x0
#define _UEP5_EPSTALL5_POSITION                             0x0
#define _UEP5_EPSTALL5_SIZE                                 0x1
#define _UEP5_EPSTALL5_LENGTH                               0x1
#define _UEP5_EPSTALL5_MASK                                 0x1

// Register: UEP6
extern volatile unsigned char           UEP6                @ 0xF59;
#ifndef _LIB_BUILD
asm("UEP6 equ 0F59h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP6CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP6HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP6INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP6OUTEN               :1;
    };
    struct {
        unsigned EP6STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS6              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK6                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN6                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN6               :1;
    };
    struct {
        unsigned EPSTALL6               :1;
    };
} UEP6bits_t;
extern volatile UEP6bits_t UEP6bits @ 0xF59;
// bitfield macros
#define _UEP6_EPSTALL_POSN                                  0x0
#define _UEP6_EPSTALL_POSITION                              0x0
#define _UEP6_EPSTALL_SIZE                                  0x1
#define _UEP6_EPSTALL_LENGTH                                0x1
#define _UEP6_EPSTALL_MASK                                  0x1
#define _UEP6_EPINEN_POSN                                   0x1
#define _UEP6_EPINEN_POSITION                               0x1
#define _UEP6_EPINEN_SIZE                                   0x1
#define _UEP6_EPINEN_LENGTH                                 0x1
#define _UEP6_EPINEN_MASK                                   0x2
#define _UEP6_EPOUTEN_POSN                                  0x2
#define _UEP6_EPOUTEN_POSITION                              0x2
#define _UEP6_EPOUTEN_SIZE                                  0x1
#define _UEP6_EPOUTEN_LENGTH                                0x1
#define _UEP6_EPOUTEN_MASK                                  0x4
#define _UEP6_EPCONDIS_POSN                                 0x3
#define _UEP6_EPCONDIS_POSITION                             0x3
#define _UEP6_EPCONDIS_SIZE                                 0x1
#define _UEP6_EPCONDIS_LENGTH                               0x1
#define _UEP6_EPCONDIS_MASK                                 0x8
#define _UEP6_EPHSHK_POSN                                   0x4
#define _UEP6_EPHSHK_POSITION                               0x4
#define _UEP6_EPHSHK_SIZE                                   0x1
#define _UEP6_EPHSHK_LENGTH                                 0x1
#define _UEP6_EPHSHK_MASK                                   0x10
#define _UEP6_EP6CONDIS_POSN                                0x3
#define _UEP6_EP6CONDIS_POSITION                            0x3
#define _UEP6_EP6CONDIS_SIZE                                0x1
#define _UEP6_EP6CONDIS_LENGTH                              0x1
#define _UEP6_EP6CONDIS_MASK                                0x8
#define _UEP6_EP6HSHK_POSN                                  0x4
#define _UEP6_EP6HSHK_POSITION                              0x4
#define _UEP6_EP6HSHK_SIZE                                  0x1
#define _UEP6_EP6HSHK_LENGTH                                0x1
#define _UEP6_EP6HSHK_MASK                                  0x10
#define _UEP6_EP6INEN_POSN                                  0x1
#define _UEP6_EP6INEN_POSITION                              0x1
#define _UEP6_EP6INEN_SIZE                                  0x1
#define _UEP6_EP6INEN_LENGTH                                0x1
#define _UEP6_EP6INEN_MASK                                  0x2
#define _UEP6_EP6OUTEN_POSN                                 0x2
#define _UEP6_EP6OUTEN_POSITION                             0x2
#define _UEP6_EP6OUTEN_SIZE                                 0x1
#define _UEP6_EP6OUTEN_LENGTH                               0x1
#define _UEP6_EP6OUTEN_MASK                                 0x4
#define _UEP6_EP6STALL_POSN                                 0x0
#define _UEP6_EP6STALL_POSITION                             0x0
#define _UEP6_EP6STALL_SIZE                                 0x1
#define _UEP6_EP6STALL_LENGTH                               0x1
#define _UEP6_EP6STALL_MASK                                 0x1
#define _UEP6_EPCONDIS6_POSN                                0x3
#define _UEP6_EPCONDIS6_POSITION                            0x3
#define _UEP6_EPCONDIS6_SIZE                                0x1
#define _UEP6_EPCONDIS6_LENGTH                              0x1
#define _UEP6_EPCONDIS6_MASK                                0x8
#define _UEP6_EPHSHK6_POSN                                  0x4
#define _UEP6_EPHSHK6_POSITION                              0x4
#define _UEP6_EPHSHK6_SIZE                                  0x1
#define _UEP6_EPHSHK6_LENGTH                                0x1
#define _UEP6_EPHSHK6_MASK                                  0x10
#define _UEP6_EPINEN6_POSN                                  0x1
#define _UEP6_EPINEN6_POSITION                              0x1
#define _UEP6_EPINEN6_SIZE                                  0x1
#define _UEP6_EPINEN6_LENGTH                                0x1
#define _UEP6_EPINEN6_MASK                                  0x2
#define _UEP6_EPOUTEN6_POSN                                 0x2
#define _UEP6_EPOUTEN6_POSITION                             0x2
#define _UEP6_EPOUTEN6_SIZE                                 0x1
#define _UEP6_EPOUTEN6_LENGTH                               0x1
#define _UEP6_EPOUTEN6_MASK                                 0x4
#define _UEP6_EPSTALL6_POSN                                 0x0
#define _UEP6_EPSTALL6_POSITION                             0x0
#define _UEP6_EPSTALL6_SIZE                                 0x1
#define _UEP6_EPSTALL6_LENGTH                               0x1
#define _UEP6_EPSTALL6_MASK                                 0x1

// Register: UEP7
extern volatile unsigned char           UEP7                @ 0xF5A;
#ifndef _LIB_BUILD
asm("UEP7 equ 0F5Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP7CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP7HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP7INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP7OUTEN               :1;
    };
    struct {
        unsigned EP7STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS7              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK7                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN7                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN7               :1;
    };
    struct {
        unsigned EPSTALL7               :1;
    };
} UEP7bits_t;
extern volatile UEP7bits_t UEP7bits @ 0xF5A;
// bitfield macros
#define _UEP7_EPSTALL_POSN                                  0x0
#define _UEP7_EPSTALL_POSITION                              0x0
#define _UEP7_EPSTALL_SIZE                                  0x1
#define _UEP7_EPSTALL_LENGTH                                0x1
#define _UEP7_EPSTALL_MASK                                  0x1
#define _UEP7_EPINEN_POSN                                   0x1
#define _UEP7_EPINEN_POSITION                               0x1
#define _UEP7_EPINEN_SIZE                                   0x1
#define _UEP7_EPINEN_LENGTH                                 0x1
#define _UEP7_EPINEN_MASK                                   0x2
#define _UEP7_EPOUTEN_POSN                                  0x2
#define _UEP7_EPOUTEN_POSITION                              0x2
#define _UEP7_EPOUTEN_SIZE                                  0x1
#define _UEP7_EPOUTEN_LENGTH                                0x1
#define _UEP7_EPOUTEN_MASK                                  0x4
#define _UEP7_EPCONDIS_POSN                                 0x3
#define _UEP7_EPCONDIS_POSITION                             0x3
#define _UEP7_EPCONDIS_SIZE                                 0x1
#define _UEP7_EPCONDIS_LENGTH                               0x1
#define _UEP7_EPCONDIS_MASK                                 0x8
#define _UEP7_EPHSHK_POSN                                   0x4
#define _UEP7_EPHSHK_POSITION                               0x4
#define _UEP7_EPHSHK_SIZE                                   0x1
#define _UEP7_EPHSHK_LENGTH                                 0x1
#define _UEP7_EPHSHK_MASK                                   0x10
#define _UEP7_EP7CONDIS_POSN                                0x3
#define _UEP7_EP7CONDIS_POSITION                            0x3
#define _UEP7_EP7CONDIS_SIZE                                0x1
#define _UEP7_EP7CONDIS_LENGTH                              0x1
#define _UEP7_EP7CONDIS_MASK                                0x8
#define _UEP7_EP7HSHK_POSN                                  0x4
#define _UEP7_EP7HSHK_POSITION                              0x4
#define _UEP7_EP7HSHK_SIZE                                  0x1
#define _UEP7_EP7HSHK_LENGTH                                0x1
#define _UEP7_EP7HSHK_MASK                                  0x10
#define _UEP7_EP7INEN_POSN                                  0x1
#define _UEP7_EP7INEN_POSITION                              0x1
#define _UEP7_EP7INEN_SIZE                                  0x1
#define _UEP7_EP7INEN_LENGTH                                0x1
#define _UEP7_EP7INEN_MASK                                  0x2
#define _UEP7_EP7OUTEN_POSN                                 0x2
#define _UEP7_EP7OUTEN_POSITION                             0x2
#define _UEP7_EP7OUTEN_SIZE                                 0x1
#define _UEP7_EP7OUTEN_LENGTH                               0x1
#define _UEP7_EP7OUTEN_MASK                                 0x4
#define _UEP7_EP7STALL_POSN                                 0x0
#define _UEP7_EP7STALL_POSITION                             0x0
#define _UEP7_EP7STALL_SIZE                                 0x1
#define _UEP7_EP7STALL_LENGTH                               0x1
#define _UEP7_EP7STALL_MASK                                 0x1
#define _UEP7_EPCONDIS7_POSN                                0x3
#define _UEP7_EPCONDIS7_POSITION                            0x3
#define _UEP7_EPCONDIS7_SIZE                                0x1
#define _UEP7_EPCONDIS7_LENGTH                              0x1
#define _UEP7_EPCONDIS7_MASK                                0x8
#define _UEP7_EPHSHK7_POSN                                  0x4
#define _UEP7_EPHSHK7_POSITION                              0x4
#define _UEP7_EPHSHK7_SIZE                                  0x1
#define _UEP7_EPHSHK7_LENGTH                                0x1
#define _UEP7_EPHSHK7_MASK                                  0x10
#define _UEP7_EPINEN7_POSN                                  0x1
#define _UEP7_EPINEN7_POSITION                              0x1
#define _UEP7_EPINEN7_SIZE                                  0x1
#define _UEP7_EPINEN7_LENGTH                                0x1
#define _UEP7_EPINEN7_MASK                                  0x2
#define _UEP7_EPOUTEN7_POSN                                 0x2
#define _UEP7_EPOUTEN7_POSITION                             0x2
#define _UEP7_EPOUTEN7_SIZE                                 0x1
#define _UEP7_EPOUTEN7_LENGTH                               0x1
#define _UEP7_EPOUTEN7_MASK                                 0x4
#define _UEP7_EPSTALL7_POSN                                 0x0
#define _UEP7_EPSTALL7_POSITION                             0x0
#define _UEP7_EPSTALL7_SIZE                                 0x1
#define _UEP7_EPSTALL7_LENGTH                               0x1
#define _UEP7_EPSTALL7_MASK                                 0x1

// Register: UEIE
extern volatile unsigned char           UEIE                @ 0xF5B;
#ifndef _LIB_BUILD
asm("UEIE equ 0F5Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEE                  :1;
        unsigned CRC5EE                 :1;
        unsigned CRC16EE                :1;
        unsigned DFN8EE                 :1;
        unsigned BTOEE                  :1;
        unsigned                        :2;
        unsigned BTSEE                  :1;
    };
} UEIEbits_t;
extern volatile UEIEbits_t UEIEbits @ 0xF5B;
// bitfield macros
#define _UEIE_PIDEE_POSN                                    0x0
#define _UEIE_PIDEE_POSITION                                0x0
#define _UEIE_PIDEE_SIZE                                    0x1
#define _UEIE_PIDEE_LENGTH                                  0x1
#define _UEIE_PIDEE_MASK                                    0x1
#define _UEIE_CRC5EE_POSN                                   0x1
#define _UEIE_CRC5EE_POSITION                               0x1
#define _UEIE_CRC5EE_SIZE                                   0x1
#define _UEIE_CRC5EE_LENGTH                                 0x1
#define _UEIE_CRC5EE_MASK                                   0x2
#define _UEIE_CRC16EE_POSN                                  0x2
#define _UEIE_CRC16EE_POSITION                              0x2
#define _UEIE_CRC16EE_SIZE                                  0x1
#define _UEIE_CRC16EE_LENGTH                                0x1
#define _UEIE_CRC16EE_MASK                                  0x4
#define _UEIE_DFN8EE_POSN                                   0x3
#define _UEIE_DFN8EE_POSITION                               0x3
#define _UEIE_DFN8EE_SIZE                                   0x1
#define _UEIE_DFN8EE_LENGTH                                 0x1
#define _UEIE_DFN8EE_MASK                                   0x8
#define _UEIE_BTOEE_POSN                                    0x4
#define _UEIE_BTOEE_POSITION                                0x4
#define _UEIE_BTOEE_SIZE                                    0x1
#define _UEIE_BTOEE_LENGTH                                  0x1
#define _UEIE_BTOEE_MASK                                    0x10
#define _UEIE_BTSEE_POSN                                    0x7
#define _UEIE_BTSEE_POSITION                                0x7
#define _UEIE_BTSEE_SIZE                                    0x1
#define _UEIE_BTSEE_LENGTH                                  0x1
#define _UEIE_BTSEE_MASK                                    0x80

// Register: UADDR
extern volatile unsigned char           UADDR               @ 0xF5C;
#ifndef _LIB_BUILD
asm("UADDR equ 0F5Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDR                   :7;
    };
    struct {
        unsigned ADDR0                  :1;
        unsigned ADDR1                  :1;
        unsigned ADDR2                  :1;
        unsigned ADDR3                  :1;
        unsigned ADDR4                  :1;
        unsigned ADDR5                  :1;
        unsigned ADDR6                  :1;
    };
} UADDRbits_t;
extern volatile UADDRbits_t UADDRbits @ 0xF5C;
// bitfield macros
#define _UADDR_ADDR_POSN                                    0x0
#define _UADDR_ADDR_POSITION                                0x0
#define _UADDR_ADDR_SIZE                                    0x7
#define _UADDR_ADDR_LENGTH                                  0x7
#define _UADDR_ADDR_MASK                                    0x7F
#define _UADDR_ADDR0_POSN                                   0x0
#define _UADDR_ADDR0_POSITION                               0x0
#define _UADDR_ADDR0_SIZE                                   0x1
#define _UADDR_ADDR0_LENGTH                                 0x1
#define _UADDR_ADDR0_MASK                                   0x1
#define _UADDR_ADDR1_POSN                                   0x1
#define _UADDR_ADDR1_POSITION                               0x1
#define _UADDR_ADDR1_SIZE                                   0x1
#define _UADDR_ADDR1_LENGTH                                 0x1
#define _UADDR_ADDR1_MASK                                   0x2
#define _UADDR_ADDR2_POSN                                   0x2
#define _UADDR_ADDR2_POSITION                               0x2
#define _UADDR_ADDR2_SIZE                                   0x1
#define _UADDR_ADDR2_LENGTH                                 0x1
#define _UADDR_ADDR2_MASK                                   0x4
#define _UADDR_ADDR3_POSN                                   0x3
#define _UADDR_ADDR3_POSITION                               0x3
#define _UADDR_ADDR3_SIZE                                   0x1
#define _UADDR_ADDR3_LENGTH                                 0x1
#define _UADDR_ADDR3_MASK                                   0x8
#define _UADDR_ADDR4_POSN                                   0x4
#define _UADDR_ADDR4_POSITION                               0x4
#define _UADDR_ADDR4_SIZE                                   0x1
#define _UADDR_ADDR4_LENGTH                                 0x1
#define _UADDR_ADDR4_MASK                                   0x10
#define _UADDR_ADDR5_POSN                                   0x5
#define _UADDR_ADDR5_POSITION                               0x5
#define _UADDR_ADDR5_SIZE                                   0x1
#define _UADDR_ADDR5_LENGTH                                 0x1
#define _UADDR_ADDR5_MASK                                   0x20
#define _UADDR_ADDR6_POSN                                   0x6
#define _UADDR_ADDR6_POSITION                               0x6
#define _UADDR_ADDR6_SIZE                                   0x1
#define _UADDR_ADDR6_LENGTH                                 0x1
#define _UADDR_ADDR6_MASK                                   0x40

// Register: UFRML
extern volatile unsigned char           UFRML               @ 0xF5D;
#ifndef _LIB_BUILD
asm("UFRML equ 0F5Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRML                   :8;
    };
    struct {
        unsigned FRM0                   :1;
        unsigned FRM1                   :1;
        unsigned FRM2                   :1;
        unsigned FRM3                   :1;
        unsigned FRM4                   :1;
        unsigned FRM5                   :1;
        unsigned FRM6                   :1;
        unsigned FRM7                   :1;
    };
} UFRMLbits_t;
extern volatile UFRMLbits_t UFRMLbits @ 0xF5D;
// bitfield macros
#define _UFRML_FRML_POSN                                    0x0
#define _UFRML_FRML_POSITION                                0x0
#define _UFRML_FRML_SIZE                                    0x8
#define _UFRML_FRML_LENGTH                                  0x8
#define _UFRML_FRML_MASK                                    0xFF
#define _UFRML_FRM0_POSN                                    0x0
#define _UFRML_FRM0_POSITION                                0x0
#define _UFRML_FRM0_SIZE                                    0x1
#define _UFRML_FRM0_LENGTH                                  0x1
#define _UFRML_FRM0_MASK                                    0x1
#define _UFRML_FRM1_POSN                                    0x1
#define _UFRML_FRM1_POSITION                                0x1
#define _UFRML_FRM1_SIZE                                    0x1
#define _UFRML_FRM1_LENGTH                                  0x1
#define _UFRML_FRM1_MASK                                    0x2
#define _UFRML_FRM2_POSN                                    0x2
#define _UFRML_FRM2_POSITION                                0x2
#define _UFRML_FRM2_SIZE                                    0x1
#define _UFRML_FRM2_LENGTH                                  0x1
#define _UFRML_FRM2_MASK                                    0x4
#define _UFRML_FRM3_POSN                                    0x3
#define _UFRML_FRM3_POSITION                                0x3
#define _UFRML_FRM3_SIZE                                    0x1
#define _UFRML_FRM3_LENGTH                                  0x1
#define _UFRML_FRM3_MASK                                    0x8
#define _UFRML_FRM4_POSN                                    0x4
#define _UFRML_FRM4_POSITION                                0x4
#define _UFRML_FRM4_SIZE                                    0x1
#define _UFRML_FRM4_LENGTH                                  0x1
#define _UFRML_FRM4_MASK                                    0x10
#define _UFRML_FRM5_POSN                                    0x5
#define _UFRML_FRM5_POSITION                                0x5
#define _UFRML_FRM5_SIZE                                    0x1
#define _UFRML_FRM5_LENGTH                                  0x1
#define _UFRML_FRM5_MASK                                    0x20
#define _UFRML_FRM6_POSN                                    0x6
#define _UFRML_FRM6_POSITION                                0x6
#define _UFRML_FRM6_SIZE                                    0x1
#define _UFRML_FRM6_LENGTH                                  0x1
#define _UFRML_FRM6_MASK                                    0x40
#define _UFRML_FRM7_POSN                                    0x7
#define _UFRML_FRM7_POSITION                                0x7
#define _UFRML_FRM7_SIZE                                    0x1
#define _UFRML_FRM7_LENGTH                                  0x1
#define _UFRML_FRM7_MASK                                    0x80

// Register: UFRMH
extern volatile unsigned char           UFRMH               @ 0xF5E;
#ifndef _LIB_BUILD
asm("UFRMH equ 0F5Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRMH                   :3;
    };
    struct {
        unsigned FRM8                   :1;
        unsigned FRM9                   :1;
        unsigned FRM10                  :1;
    };
} UFRMHbits_t;
extern volatile UFRMHbits_t UFRMHbits @ 0xF5E;
// bitfield macros
#define _UFRMH_FRMH_POSN                                    0x0
#define _UFRMH_FRMH_POSITION                                0x0
#define _UFRMH_FRMH_SIZE                                    0x3
#define _UFRMH_FRMH_LENGTH                                  0x3
#define _UFRMH_FRMH_MASK                                    0x7
#define _UFRMH_FRM8_POSN                                    0x0
#define _UFRMH_FRM8_POSITION                                0x0
#define _UFRMH_FRM8_SIZE                                    0x1
#define _UFRMH_FRM8_LENGTH                                  0x1
#define _UFRMH_FRM8_MASK                                    0x1
#define _UFRMH_FRM9_POSN                                    0x1
#define _UFRMH_FRM9_POSITION                                0x1
#define _UFRMH_FRM9_SIZE                                    0x1
#define _UFRMH_FRM9_LENGTH                                  0x1
#define _UFRMH_FRM9_MASK                                    0x2
#define _UFRMH_FRM10_POSN                                   0x2
#define _UFRMH_FRM10_POSITION                               0x2
#define _UFRMH_FRM10_SIZE                                   0x1
#define _UFRMH_FRM10_LENGTH                                 0x1
#define _UFRMH_FRM10_MASK                                   0x4

// Register: UEIR
extern volatile unsigned char           UEIR                @ 0xF5F;
#ifndef _LIB_BUILD
asm("UEIR equ 0F5Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEF                  :1;
        unsigned CRC5EF                 :1;
        unsigned CRC16EF                :1;
        unsigned DFN8EF                 :1;
        unsigned BTOEF                  :1;
        unsigned                        :2;
        unsigned BTSEF                  :1;
    };
} UEIRbits_t;
extern volatile UEIRbits_t UEIRbits @ 0xF5F;
// bitfield macros
#define _UEIR_PIDEF_POSN                                    0x0
#define _UEIR_PIDEF_POSITION                                0x0
#define _UEIR_PIDEF_SIZE                                    0x1
#define _UEIR_PIDEF_LENGTH                                  0x1
#define _UEIR_PIDEF_MASK                                    0x1
#define _UEIR_CRC5EF_POSN                                   0x1
#define _UEIR_CRC5EF_POSITION                               0x1
#define _UEIR_CRC5EF_SIZE                                   0x1
#define _UEIR_CRC5EF_LENGTH                                 0x1
#define _UEIR_CRC5EF_MASK                                   0x2
#define _UEIR_CRC16EF_POSN                                  0x2
#define _UEIR_CRC16EF_POSITION                              0x2
#define _UEIR_CRC16EF_SIZE                                  0x1
#define _UEIR_CRC16EF_LENGTH                                0x1
#define _UEIR_CRC16EF_MASK                                  0x4
#define _UEIR_DFN8EF_POSN                                   0x3
#define _UEIR_DFN8EF_POSITION                               0x3
#define _UEIR_DFN8EF_SIZE                                   0x1
#define _UEIR_DFN8EF_LENGTH                                 0x1
#define _UEIR_DFN8EF_MASK                                   0x8
#define _UEIR_BTOEF_POSN                                    0x4
#define _UEIR_BTOEF_POSITION                                0x4
#define _UEIR_BTOEF_SIZE                                    0x1
#define _UEIR_BTOEF_LENGTH                                  0x1
#define _UEIR_BTOEF_MASK                                    0x10
#define _UEIR_BTSEF_POSN                                    0x7
#define _UEIR_BTSEF_POSITION                                0x7
#define _UEIR_BTSEF_SIZE                                    0x1
#define _UEIR_BTSEF_LENGTH                                  0x1
#define _UEIR_BTSEF_MASK                                    0x80

// Register: UIE
extern volatile unsigned char           UIE                 @ 0xF60;
#ifndef _LIB_BUILD
asm("UIE equ 0F60h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIE                 :1;
        unsigned UERRIE                 :1;
        unsigned ACTVIE                 :1;
        unsigned TRNIE                  :1;
        unsigned IDLEIE                 :1;
        unsigned STALLIE                :1;
        unsigned SOFIE                  :1;
    };
} UIEbits_t;
extern volatile UIEbits_t UIEbits @ 0xF60;
// bitfield macros
#define _UIE_URSTIE_POSN                                    0x0
#define _UIE_URSTIE_POSITION                                0x0
#define _UIE_URSTIE_SIZE                                    0x1
#define _UIE_URSTIE_LENGTH                                  0x1
#define _UIE_URSTIE_MASK                                    0x1
#define _UIE_UERRIE_POSN                                    0x1
#define _UIE_UERRIE_POSITION                                0x1
#define _UIE_UERRIE_SIZE                                    0x1
#define _UIE_UERRIE_LENGTH                                  0x1
#define _UIE_UERRIE_MASK                                    0x2
#define _UIE_ACTVIE_POSN                                    0x2
#define _UIE_ACTVIE_POSITION                                0x2
#define _UIE_ACTVIE_SIZE                                    0x1
#define _UIE_ACTVIE_LENGTH                                  0x1
#define _UIE_ACTVIE_MASK                                    0x4
#define _UIE_TRNIE_POSN                                     0x3
#define _UIE_TRNIE_POSITION                                 0x3
#define _UIE_TRNIE_SIZE                                     0x1
#define _UIE_TRNIE_LENGTH                                   0x1
#define _UIE_TRNIE_MASK                                     0x8
#define _UIE_IDLEIE_POSN                                    0x4
#define _UIE_IDLEIE_POSITION                                0x4
#define _UIE_IDLEIE_SIZE                                    0x1
#define _UIE_IDLEIE_LENGTH                                  0x1
#define _UIE_IDLEIE_MASK                                    0x10
#define _UIE_STALLIE_POSN                                   0x5
#define _UIE_STALLIE_POSITION                               0x5
#define _UIE_STALLIE_SIZE                                   0x1
#define _UIE_STALLIE_LENGTH                                 0x1
#define _UIE_STALLIE_MASK                                   0x20
#define _UIE_SOFIE_POSN                                     0x6
#define _UIE_SOFIE_POSITION                                 0x6
#define _UIE_SOFIE_SIZE                                     0x1
#define _UIE_SOFIE_LENGTH                                   0x1
#define _UIE_SOFIE_MASK                                     0x40

// Register: UCFG
extern volatile unsigned char           UCFG                @ 0xF61;
#ifndef _LIB_BUILD
asm("UCFG equ 0F61h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPB0                   :1;
        unsigned PPB1                   :1;
        unsigned FSEN                   :1;
        unsigned                        :1;
        unsigned UPUEN                  :1;
        unsigned                        :2;
        unsigned UTEYE                  :1;
    };
    struct {
        unsigned UPP0                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned UPP1                   :1;
    };
} UCFGbits_t;
extern volatile UCFGbits_t UCFGbits @ 0xF61;
// bitfield macros
#define _UCFG_PPB0_POSN                                     0x0
#define _UCFG_PPB0_POSITION                                 0x0
#define _UCFG_PPB0_SIZE                                     0x1
#define _UCFG_PPB0_LENGTH                                   0x1
#define _UCFG_PPB0_MASK                                     0x1
#define _UCFG_PPB1_POSN                                     0x1
#define _UCFG_PPB1_POSITION                                 0x1
#define _UCFG_PPB1_SIZE                                     0x1
#define _UCFG_PPB1_LENGTH                                   0x1
#define _UCFG_PPB1_MASK                                     0x2
#define _UCFG_FSEN_POSN                                     0x2
#define _UCFG_FSEN_POSITION                                 0x2
#define _UCFG_FSEN_SIZE                                     0x1
#define _UCFG_FSEN_LENGTH                                   0x1
#define _UCFG_FSEN_MASK                                     0x4
#define _UCFG_UPUEN_POSN                                    0x4
#define _UCFG_UPUEN_POSITION                                0x4
#define _UCFG_UPUEN_SIZE                                    0x1
#define _UCFG_UPUEN_LENGTH                                  0x1
#define _UCFG_UPUEN_MASK                                    0x10
#define _UCFG_UTEYE_POSN                                    0x7
#define _UCFG_UTEYE_POSITION                                0x7
#define _UCFG_UTEYE_SIZE                                    0x1
#define _UCFG_UTEYE_LENGTH                                  0x1
#define _UCFG_UTEYE_MASK                                    0x80
#define _UCFG_UPP0_POSN                                     0x0
#define _UCFG_UPP0_POSITION                                 0x0
#define _UCFG_UPP0_SIZE                                     0x1
#define _UCFG_UPP0_LENGTH                                   0x1
#define _UCFG_UPP0_MASK                                     0x1
#define _UCFG_UPP1_POSN                                     0x1
#define _UCFG_UPP1_POSITION                                 0x1
#define _UCFG_UPP1_SIZE                                     0x1
#define _UCFG_UPP1_LENGTH                                   0x1
#define _UCFG_UPP1_MASK                                     0x2

// Register: UIR
extern volatile unsigned char           UIR                 @ 0xF62;
#ifndef _LIB_BUILD
asm("UIR equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIF                 :1;
        unsigned UERRIF                 :1;
        unsigned ACTVIF                 :1;
        unsigned TRNIF                  :1;
        unsigned IDLEIF                 :1;
        unsigned STALLIF                :1;
        unsigned SOFIF                  :1;
    };
} UIRbits_t;
extern volatile UIRbits_t UIRbits @ 0xF62;
// bitfield macros
#define _UIR_URSTIF_POSN                                    0x0
#define _UIR_URSTIF_POSITION                                0x0
#define _UIR_URSTIF_SIZE                                    0x1
#define _UIR_URSTIF_LENGTH                                  0x1
#define _UIR_URSTIF_MASK                                    0x1
#define _UIR_UERRIF_POSN                                    0x1
#define _UIR_UERRIF_POSITION                                0x1
#define _UIR_UERRIF_SIZE                                    0x1
#define _UIR_UERRIF_LENGTH                                  0x1
#define _UIR_UERRIF_MASK                                    0x2
#define _UIR_ACTVIF_POSN                                    0x2
#define _UIR_ACTVIF_POSITION                                0x2
#define _UIR_ACTVIF_SIZE                                    0x1
#define _UIR_ACTVIF_LENGTH                                  0x1
#define _UIR_ACTVIF_MASK                                    0x4
#define _UIR_TRNIF_POSN                                     0x3
#define _UIR_TRNIF_POSITION                                 0x3
#define _UIR_TRNIF_SIZE                                     0x1
#define _UIR_TRNIF_LENGTH                                   0x1
#define _UIR_TRNIF_MASK                                     0x8
#define _UIR_IDLEIF_POSN                                    0x4
#define _UIR_IDLEIF_POSITION                                0x4
#define _UIR_IDLEIF_SIZE                                    0x1
#define _UIR_IDLEIF_LENGTH                                  0x1
#define _UIR_IDLEIF_MASK                                    0x10
#define _UIR_STALLIF_POSN                                   0x5
#define _UIR_STALLIF_POSITION                               0x5
#define _UIR_STALLIF_SIZE                                   0x1
#define _UIR_STALLIF_LENGTH                                 0x1
#define _UIR_STALLIF_MASK                                   0x20
#define _UIR_SOFIF_POSN                                     0x6
#define _UIR_SOFIF_POSITION                                 0x6
#define _UIR_SOFIF_SIZE                                     0x1
#define _UIR_SOFIF_LENGTH                                   0x1
#define _UIR_SOFIF_MASK                                     0x40

// Register: USTAT
extern volatile unsigned char           USTAT               @ 0xF63;
#ifndef _LIB_BUILD
asm("USTAT equ 0F63h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned PPBI                   :1;
        unsigned DIR                    :1;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
        unsigned ENDP2                  :1;
        unsigned ENDP3                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits @ 0xF63;
// bitfield macros
#define _USTAT_PPBI_POSN                                    0x1
#define _USTAT_PPBI_POSITION                                0x1
#define _USTAT_PPBI_SIZE                                    0x1
#define _USTAT_PPBI_LENGTH                                  0x1
#define _USTAT_PPBI_MASK                                    0x2
#define _USTAT_DIR_POSN                                     0x2
#define _USTAT_DIR_POSITION                                 0x2
#define _USTAT_DIR_SIZE                                     0x1
#define _USTAT_DIR_LENGTH                                   0x1
#define _USTAT_DIR_MASK                                     0x4
#define _USTAT_ENDP0_POSN                                   0x3
#define _USTAT_ENDP0_POSITION                               0x3
#define _USTAT_ENDP0_SIZE                                   0x1
#define _USTAT_ENDP0_LENGTH                                 0x1
#define _USTAT_ENDP0_MASK                                   0x8
#define _USTAT_ENDP1_POSN                                   0x4
#define _USTAT_ENDP1_POSITION                               0x4
#define _USTAT_ENDP1_SIZE                                   0x1
#define _USTAT_ENDP1_LENGTH                                 0x1
#define _USTAT_ENDP1_MASK                                   0x10
#define _USTAT_ENDP2_POSN                                   0x5
#define _USTAT_ENDP2_POSITION                               0x5
#define _USTAT_ENDP2_SIZE                                   0x1
#define _USTAT_ENDP2_LENGTH                                 0x1
#define _USTAT_ENDP2_MASK                                   0x20
#define _USTAT_ENDP3_POSN                                   0x6
#define _USTAT_ENDP3_POSITION                               0x6
#define _USTAT_ENDP3_SIZE                                   0x1
#define _USTAT_ENDP3_LENGTH                                 0x1
#define _USTAT_ENDP3_MASK                                   0x40

// Register: UCON
extern volatile unsigned char           UCON                @ 0xF64;
#ifndef _LIB_BUILD
asm("UCON equ 0F64h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SUSPND                 :1;
        unsigned RESUME                 :1;
        unsigned USBEN                  :1;
        unsigned PKTDIS                 :1;
        unsigned SE0                    :1;
        unsigned PPBRST                 :1;
    };
} UCONbits_t;
extern volatile UCONbits_t UCONbits @ 0xF64;
// bitfield macros
#define _UCON_SUSPND_POSN                                   0x1
#define _UCON_SUSPND_POSITION                               0x1
#define _UCON_SUSPND_SIZE                                   0x1
#define _UCON_SUSPND_LENGTH                                 0x1
#define _UCON_SUSPND_MASK                                   0x2
#define _UCON_RESUME_POSN                                   0x2
#define _UCON_RESUME_POSITION                               0x2
#define _UCON_RESUME_SIZE                                   0x1
#define _UCON_RESUME_LENGTH                                 0x1
#define _UCON_RESUME_MASK                                   0x4
#define _UCON_USBEN_POSN                                    0x3
#define _UCON_USBEN_POSITION                                0x3
#define _UCON_USBEN_SIZE                                    0x1
#define _UCON_USBEN_LENGTH                                  0x1
#define _UCON_USBEN_MASK                                    0x8
#define _UCON_PKTDIS_POSN                                   0x4
#define _UCON_PKTDIS_POSITION                               0x4
#define _UCON_PKTDIS_SIZE                                   0x1
#define _UCON_PKTDIS_LENGTH                                 0x1
#define _UCON_PKTDIS_MASK                                   0x10
#define _UCON_SE0_POSN                                      0x5
#define _UCON_SE0_POSITION                                  0x5
#define _UCON_SE0_SIZE                                      0x1
#define _UCON_SE0_LENGTH                                    0x1
#define _UCON_SE0_MASK                                      0x20
#define _UCON_PPBRST_POSN                                   0x6
#define _UCON_PPBRST_POSITION                               0x6
#define _UCON_PPBRST_SIZE                                   0x1
#define _UCON_PPBRST_LENGTH                                 0x1
#define _UCON_PPBRST_MASK                                   0x40

// Register: SRCON0
extern volatile unsigned char           SRCON0              @ 0xF68;
#ifndef _LIB_BUILD
asm("SRCON0 equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SRPR                   :1;
        unsigned SRPS                   :1;
        unsigned SRNQEN                 :1;
        unsigned SRQEN                  :1;
        unsigned SRCLK                  :3;
        unsigned SRLEN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned SRCLK0                 :1;
        unsigned SRCLK1                 :1;
        unsigned SRCLK2                 :1;
    };
} SRCON0bits_t;
extern volatile SRCON0bits_t SRCON0bits @ 0xF68;
// bitfield macros
#define _SRCON0_SRPR_POSN                                   0x0
#define _SRCON0_SRPR_POSITION                               0x0
#define _SRCON0_SRPR_SIZE                                   0x1
#define _SRCON0_SRPR_LENGTH                                 0x1
#define _SRCON0_SRPR_MASK                                   0x1
#define _SRCON0_SRPS_POSN                                   0x1
#define _SRCON0_SRPS_POSITION                               0x1
#define _SRCON0_SRPS_SIZE                                   0x1
#define _SRCON0_SRPS_LENGTH                                 0x1
#define _SRCON0_SRPS_MASK                                   0x2
#define _SRCON0_SRNQEN_POSN                                 0x2
#define _SRCON0_SRNQEN_POSITION                             0x2
#define _SRCON0_SRNQEN_SIZE                                 0x1
#define _SRCON0_SRNQEN_LENGTH                               0x1
#define _SRCON0_SRNQEN_MASK                                 0x4
#define _SRCON0_SRQEN_POSN                                  0x3
#define _SRCON0_SRQEN_POSITION                              0x3
#define _SRCON0_SRQEN_SIZE                                  0x1
#define _SRCON0_SRQEN_LENGTH                                0x1
#define _SRCON0_SRQEN_MASK                                  0x8
#define _SRCON0_SRCLK_POSN                                  0x4
#define _SRCON0_SRCLK_POSITION                              0x4
#define _SRCON0_SRCLK_SIZE                                  0x3
#define _SRCON0_SRCLK_LENGTH                                0x3
#define _SRCON0_SRCLK_MASK                                  0x70
#define _SRCON0_SRLEN_POSN                                  0x7
#define _SRCON0_SRLEN_POSITION                              0x7
#define _SRCON0_SRLEN_SIZE                                  0x1
#define _SRCON0_SRLEN_LENGTH                                0x1
#define _SRCON0_SRLEN_MASK                                  0x80
#define _SRCON0_SRCLK0_POSN                                 0x4
#define _SRCON0_SRCLK0_POSITION                             0x4
#define _SRCON0_SRCLK0_SIZE                                 0x1
#define _SRCON0_SRCLK0_LENGTH                               0x1
#define _SRCON0_SRCLK0_MASK                                 0x10
#define _SRCON0_SRCLK1_POSN                                 0x5
#define _SRCON0_SRCLK1_POSITION                             0x5
#define _SRCON0_SRCLK1_SIZE                                 0x1
#define _SRCON0_SRCLK1_LENGTH                               0x1
#define _SRCON0_SRCLK1_MASK                                 0x20
#define _SRCON0_SRCLK2_POSN                                 0x6
#define _SRCON0_SRCLK2_POSITION                             0x6
#define _SRCON0_SRCLK2_SIZE                                 0x1
#define _SRCON0_SRCLK2_LENGTH                               0x1
#define _SRCON0_SRCLK2_MASK                                 0x40

// Register: SRCON1
extern volatile unsigned char           SRCON1              @ 0xF69;
#ifndef _LIB_BUILD
asm("SRCON1 equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SRRC1E                 :1;
        unsigned SRRC2E                 :1;
        unsigned SRRCKE                 :1;
        unsigned SRRPE                  :1;
        unsigned SRSC1E                 :1;
        unsigned SRSC2E                 :1;
        unsigned SRSCKE                 :1;
        unsigned SRSPE                  :1;
    };
} SRCON1bits_t;
extern volatile SRCON1bits_t SRCON1bits @ 0xF69;
// bitfield macros
#define _SRCON1_SRRC1E_POSN                                 0x0
#define _SRCON1_SRRC1E_POSITION                             0x0
#define _SRCON1_SRRC1E_SIZE                                 0x1
#define _SRCON1_SRRC1E_LENGTH                               0x1
#define _SRCON1_SRRC1E_MASK                                 0x1
#define _SRCON1_SRRC2E_POSN                                 0x1
#define _SRCON1_SRRC2E_POSITION                             0x1
#define _SRCON1_SRRC2E_SIZE                                 0x1
#define _SRCON1_SRRC2E_LENGTH                               0x1
#define _SRCON1_SRRC2E_MASK                                 0x2
#define _SRCON1_SRRCKE_POSN                                 0x2
#define _SRCON1_SRRCKE_POSITION                             0x2
#define _SRCON1_SRRCKE_SIZE                                 0x1
#define _SRCON1_SRRCKE_LENGTH                               0x1
#define _SRCON1_SRRCKE_MASK                                 0x4
#define _SRCON1_SRRPE_POSN                                  0x3
#define _SRCON1_SRRPE_POSITION                              0x3
#define _SRCON1_SRRPE_SIZE                                  0x1
#define _SRCON1_SRRPE_LENGTH                                0x1
#define _SRCON1_SRRPE_MASK                                  0x8
#define _SRCON1_SRSC1E_POSN                                 0x4
#define _SRCON1_SRSC1E_POSITION                             0x4
#define _SRCON1_SRSC1E_SIZE                                 0x1
#define _SRCON1_SRSC1E_LENGTH                               0x1
#define _SRCON1_SRSC1E_MASK                                 0x10
#define _SRCON1_SRSC2E_POSN                                 0x5
#define _SRCON1_SRSC2E_POSITION                             0x5
#define _SRCON1_SRSC2E_SIZE                                 0x1
#define _SRCON1_SRSC2E_LENGTH                               0x1
#define _SRCON1_SRSC2E_MASK                                 0x20
#define _SRCON1_SRSCKE_POSN                                 0x6
#define _SRCON1_SRSCKE_POSITION                             0x6
#define _SRCON1_SRSCKE_SIZE                                 0x1
#define _SRCON1_SRSCKE_LENGTH                               0x1
#define _SRCON1_SRSCKE_MASK                                 0x40
#define _SRCON1_SRSPE_POSN                                  0x7
#define _SRCON1_SRSPE_POSITION                              0x7
#define _SRCON1_SRSPE_SIZE                                  0x1
#define _SRCON1_SRSPE_LENGTH                                0x1
#define _SRCON1_SRSPE_MASK                                  0x80

// Register: CM2CON0
extern volatile unsigned char           CM2CON0             @ 0xF6B;
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2CH                   :2;
        unsigned C2R                    :1;
        unsigned C2SP                   :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
    struct {
        unsigned C2CH0                  :1;
        unsigned C2CH1                  :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits @ 0xF6B;
// bitfield macros
#define _CM2CON0_C2CH_POSN                                  0x0
#define _CM2CON0_C2CH_POSITION                              0x0
#define _CM2CON0_C2CH_SIZE                                  0x2
#define _CM2CON0_C2CH_LENGTH                                0x2
#define _CM2CON0_C2CH_MASK                                  0x3
#define _CM2CON0_C2R_POSN                                   0x2
#define _CM2CON0_C2R_POSITION                               0x2
#define _CM2CON0_C2R_SIZE                                   0x1
#define _CM2CON0_C2R_LENGTH                                 0x1
#define _CM2CON0_C2R_MASK                                   0x4
#define _CM2CON0_C2SP_POSN                                  0x3
#define _CM2CON0_C2SP_POSITION                              0x3
#define _CM2CON0_C2SP_SIZE                                  0x1
#define _CM2CON0_C2SP_LENGTH                                0x1
#define _CM2CON0_C2SP_MASK                                  0x8
#define _CM2CON0_C2POL_POSN                                 0x4
#define _CM2CON0_C2POL_POSITION                             0x4
#define _CM2CON0_C2POL_SIZE                                 0x1
#define _CM2CON0_C2POL_LENGTH                               0x1
#define _CM2CON0_C2POL_MASK                                 0x10
#define _CM2CON0_C2OE_POSN                                  0x5
#define _CM2CON0_C2OE_POSITION                              0x5
#define _CM2CON0_C2OE_SIZE                                  0x1
#define _CM2CON0_C2OE_LENGTH                                0x1
#define _CM2CON0_C2OE_MASK                                  0x20
#define _CM2CON0_C2OUT_POSN                                 0x6
#define _CM2CON0_C2OUT_POSITION                             0x6
#define _CM2CON0_C2OUT_SIZE                                 0x1
#define _CM2CON0_C2OUT_LENGTH                               0x1
#define _CM2CON0_C2OUT_MASK                                 0x40
#define _CM2CON0_C2ON_POSN                                  0x7
#define _CM2CON0_C2ON_POSITION                              0x7
#define _CM2CON0_C2ON_SIZE                                  0x1
#define _CM2CON0_C2ON_LENGTH                                0x1
#define _CM2CON0_C2ON_MASK                                  0x80
#define _CM2CON0_C2CH0_POSN                                 0x0
#define _CM2CON0_C2CH0_POSITION                             0x0
#define _CM2CON0_C2CH0_SIZE                                 0x1
#define _CM2CON0_C2CH0_LENGTH                               0x1
#define _CM2CON0_C2CH0_MASK                                 0x1
#define _CM2CON0_C2CH1_POSN                                 0x1
#define _CM2CON0_C2CH1_POSITION                             0x1
#define _CM2CON0_C2CH1_SIZE                                 0x1
#define _CM2CON0_C2CH1_LENGTH                               0x1
#define _CM2CON0_C2CH1_MASK                                 0x2

// Register: CM2CON1
extern volatile unsigned char           CM2CON1             @ 0xF6C;
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C1SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C1HYS                  :1;
        unsigned C2RSEL                 :1;
        unsigned C1RSEL                 :1;
        unsigned MC2OUT                 :1;
        unsigned MC1OUT                 :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits @ 0xF6C;
// bitfield macros
#define _CM2CON1_C2SYNC_POSN                                0x0
#define _CM2CON1_C2SYNC_POSITION                            0x0
#define _CM2CON1_C2SYNC_SIZE                                0x1
#define _CM2CON1_C2SYNC_LENGTH                              0x1
#define _CM2CON1_C2SYNC_MASK                                0x1
#define _CM2CON1_C1SYNC_POSN                                0x1
#define _CM2CON1_C1SYNC_POSITION                            0x1
#define _CM2CON1_C1SYNC_SIZE                                0x1
#define _CM2CON1_C1SYNC_LENGTH                              0x1
#define _CM2CON1_C1SYNC_MASK                                0x2
#define _CM2CON1_C2HYS_POSN                                 0x2
#define _CM2CON1_C2HYS_POSITION                             0x2
#define _CM2CON1_C2HYS_SIZE                                 0x1
#define _CM2CON1_C2HYS_LENGTH                               0x1
#define _CM2CON1_C2HYS_MASK                                 0x4
#define _CM2CON1_C1HYS_POSN                                 0x3
#define _CM2CON1_C1HYS_POSITION                             0x3
#define _CM2CON1_C1HYS_SIZE                                 0x1
#define _CM2CON1_C1HYS_LENGTH                               0x1
#define _CM2CON1_C1HYS_MASK                                 0x8
#define _CM2CON1_C2RSEL_POSN                                0x4
#define _CM2CON1_C2RSEL_POSITION                            0x4
#define _CM2CON1_C2RSEL_SIZE                                0x1
#define _CM2CON1_C2RSEL_LENGTH                              0x1
#define _CM2CON1_C2RSEL_MASK                                0x10
#define _CM2CON1_C1RSEL_POSN                                0x5
#define _CM2CON1_C1RSEL_POSITION                            0x5
#define _CM2CON1_C1RSEL_SIZE                                0x1
#define _CM2CON1_C1RSEL_LENGTH                              0x1
#define _CM2CON1_C1RSEL_MASK                                0x20
#define _CM2CON1_MC2OUT_POSN                                0x6
#define _CM2CON1_MC2OUT_POSITION                            0x6
#define _CM2CON1_MC2OUT_SIZE                                0x1
#define _CM2CON1_MC2OUT_LENGTH                              0x1
#define _CM2CON1_MC2OUT_MASK                                0x40
#define _CM2CON1_MC1OUT_POSN                                0x7
#define _CM2CON1_MC1OUT_POSITION                            0x7
#define _CM2CON1_MC1OUT_SIZE                                0x1
#define _CM2CON1_MC1OUT_LENGTH                              0x1
#define _CM2CON1_MC1OUT_MASK                                0x80

// Register: CM1CON0
extern volatile unsigned char           CM1CON0             @ 0xF6D;
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1CH                   :2;
        unsigned C1R                    :1;
        unsigned C1SP                   :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
    struct {
        unsigned C1CH0                  :1;
        unsigned C1CH1                  :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits @ 0xF6D;
// bitfield macros
#define _CM1CON0_C1CH_POSN                                  0x0
#define _CM1CON0_C1CH_POSITION                              0x0
#define _CM1CON0_C1CH_SIZE                                  0x2
#define _CM1CON0_C1CH_LENGTH                                0x2
#define _CM1CON0_C1CH_MASK                                  0x3
#define _CM1CON0_C1R_POSN                                   0x2
#define _CM1CON0_C1R_POSITION                               0x2
#define _CM1CON0_C1R_SIZE                                   0x1
#define _CM1CON0_C1R_LENGTH                                 0x1
#define _CM1CON0_C1R_MASK                                   0x4
#define _CM1CON0_C1SP_POSN                                  0x3
#define _CM1CON0_C1SP_POSITION                              0x3
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x8
#define _CM1CON0_C1POL_POSN                                 0x4
#define _CM1CON0_C1POL_POSITION                             0x4
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x10
#define _CM1CON0_C1OE_POSN                                  0x5
#define _CM1CON0_C1OE_POSITION                              0x5
#define _CM1CON0_C1OE_SIZE                                  0x1
#define _CM1CON0_C1OE_LENGTH                                0x1
#define _CM1CON0_C1OE_MASK                                  0x20
#define _CM1CON0_C1OUT_POSN                                 0x6
#define _CM1CON0_C1OUT_POSITION                             0x6
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x40
#define _CM1CON0_C1ON_POSN                                  0x7
#define _CM1CON0_C1ON_POSITION                              0x7
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x80
#define _CM1CON0_C1CH0_POSN                                 0x0
#define _CM1CON0_C1CH0_POSITION                             0x0
#define _CM1CON0_C1CH0_SIZE                                 0x1
#define _CM1CON0_C1CH0_LENGTH                               0x1
#define _CM1CON0_C1CH0_MASK                                 0x1
#define _CM1CON0_C1CH1_POSN                                 0x1
#define _CM1CON0_C1CH1_POSITION                             0x1
#define _CM1CON0_C1CH1_SIZE                                 0x1
#define _CM1CON0_C1CH1_LENGTH                               0x1
#define _CM1CON0_C1CH1_MASK                                 0x2

// Register: SSPMSK
extern volatile unsigned char           SSPMSK              @ 0xF6F;
#ifndef _LIB_BUILD
asm("SSPMSK equ 0F6Fh");
#endif
// aliases
extern volatile unsigned char           SSPMASK             @ 0xF6F;
#ifndef _LIB_BUILD
asm("SSPMASK equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MSK                    :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits @ 0xF6F;
// bitfield macros
#define _SSPMSK_MSK_POSN                                    0x0
#define _SSPMSK_MSK_POSITION                                0x0
#define _SSPMSK_MSK_SIZE                                    0x8
#define _SSPMSK_MSK_LENGTH                                  0x8
#define _SSPMSK_MSK_MASK                                    0xFF
#define _SSPMSK_MSK0_POSN                                   0x0
#define _SSPMSK_MSK0_POSITION                               0x0
#define _SSPMSK_MSK0_SIZE                                   0x1
#define _SSPMSK_MSK0_LENGTH                                 0x1
#define _SSPMSK_MSK0_MASK                                   0x1
#define _SSPMSK_MSK1_POSN                                   0x1
#define _SSPMSK_MSK1_POSITION                               0x1
#define _SSPMSK_MSK1_SIZE                                   0x1
#define _SSPMSK_MSK1_LENGTH                                 0x1
#define _SSPMSK_MSK1_MASK                                   0x2
#define _SSPMSK_MSK2_POSN                                   0x2
#define _SSPMSK_MSK2_POSITION                               0x2
#define _SSPMSK_MSK2_SIZE                                   0x1
#define _SSPMSK_MSK2_LENGTH                                 0x1
#define _SSPMSK_MSK2_MASK                                   0x4
#define _SSPMSK_MSK3_POSN                                   0x3
#define _SSPMSK_MSK3_POSITION                               0x3
#define _SSPMSK_MSK3_SIZE                                   0x1
#define _SSPMSK_MSK3_LENGTH                                 0x1
#define _SSPMSK_MSK3_MASK                                   0x8
#define _SSPMSK_MSK4_POSN                                   0x4
#define _SSPMSK_MSK4_POSITION                               0x4
#define _SSPMSK_MSK4_SIZE                                   0x1
#define _SSPMSK_MSK4_LENGTH                                 0x1
#define _SSPMSK_MSK4_MASK                                   0x10
#define _SSPMSK_MSK5_POSN                                   0x5
#define _SSPMSK_MSK5_POSITION                               0x5
#define _SSPMSK_MSK5_SIZE                                   0x1
#define _SSPMSK_MSK5_LENGTH                                 0x1
#define _SSPMSK_MSK5_MASK                                   0x20
#define _SSPMSK_MSK6_POSN                                   0x6
#define _SSPMSK_MSK6_POSITION                               0x6
#define _SSPMSK_MSK6_SIZE                                   0x1
#define _SSPMSK_MSK6_LENGTH                                 0x1
#define _SSPMSK_MSK6_MASK                                   0x40
#define _SSPMSK_MSK7_POSN                                   0x7
#define _SSPMSK_MSK7_POSITION                               0x7
#define _SSPMSK_MSK7_SIZE                                   0x1
#define _SSPMSK_MSK7_LENGTH                                 0x1
#define _SSPMSK_MSK7_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned MSK                    :8;
    };
    struct {
        unsigned MSK0                   :1;
        unsigned MSK1                   :1;
        unsigned MSK2                   :1;
        unsigned MSK3                   :1;
        unsigned MSK4                   :1;
        unsigned MSK5                   :1;
        unsigned MSK6                   :1;
        unsigned MSK7                   :1;
    };
} SSPMASKbits_t;
extern volatile SSPMASKbits_t SSPMASKbits @ 0xF6F;
// bitfield macros
#define _SSPMASK_MSK_POSN                                   0x0
#define _SSPMASK_MSK_POSITION                               0x0
#define _SSPMASK_MSK_SIZE                                   0x8
#define _SSPMASK_MSK_LENGTH                                 0x8
#define _SSPMASK_MSK_MASK                                   0xFF
#define _SSPMASK_MSK0_POSN                                  0x0
#define _SSPMASK_MSK0_POSITION                              0x0
#define _SSPMASK_MSK0_SIZE                                  0x1
#define _SSPMASK_MSK0_LENGTH                                0x1
#define _SSPMASK_MSK0_MASK                                  0x1
#define _SSPMASK_MSK1_POSN                                  0x1
#define _SSPMASK_MSK1_POSITION                              0x1
#define _SSPMASK_MSK1_SIZE                                  0x1
#define _SSPMASK_MSK1_LENGTH                                0x1
#define _SSPMASK_MSK1_MASK                                  0x2
#define _SSPMASK_MSK2_POSN                                  0x2
#define _SSPMASK_MSK2_POSITION                              0x2
#define _SSPMASK_MSK2_SIZE                                  0x1
#define _SSPMASK_MSK2_LENGTH                                0x1
#define _SSPMASK_MSK2_MASK                                  0x4
#define _SSPMASK_MSK3_POSN                                  0x3
#define _SSPMASK_MSK3_POSITION                              0x3
#define _SSPMASK_MSK3_SIZE                                  0x1
#define _SSPMASK_MSK3_LENGTH                                0x1
#define _SSPMASK_MSK3_MASK                                  0x8
#define _SSPMASK_MSK4_POSN                                  0x4
#define _SSPMASK_MSK4_POSITION                              0x4
#define _SSPMASK_MSK4_SIZE                                  0x1
#define _SSPMASK_MSK4_LENGTH                                0x1
#define _SSPMASK_MSK4_MASK                                  0x10
#define _SSPMASK_MSK5_POSN                                  0x5
#define _SSPMASK_MSK5_POSITION                              0x5
#define _SSPMASK_MSK5_SIZE                                  0x1
#define _SSPMASK_MSK5_LENGTH                                0x1
#define _SSPMASK_MSK5_MASK                                  0x20
#define _SSPMASK_MSK6_POSN                                  0x6
#define _SSPMASK_MSK6_POSITION                              0x6
#define _SSPMASK_MSK6_SIZE                                  0x1
#define _SSPMASK_MSK6_LENGTH                                0x1
#define _SSPMASK_MSK6_MASK                                  0x40
#define _SSPMASK_MSK7_POSN                                  0x7
#define _SSPMASK_MSK7_POSITION                              0x7
#define _SSPMASK_MSK7_SIZE                                  0x1
#define _SSPMASK_MSK7_LENGTH                                0x1
#define _SSPMASK_MSK7_MASK                                  0x80

// Register: SLRCON
extern volatile unsigned char           SLRCON              @ 0xF76;
#ifndef _LIB_BUILD
asm("SLRCON equ 0F76h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRA                   :1;
        unsigned SLRB                   :1;
        unsigned SLRC                   :1;
    };
} SLRCONbits_t;
extern volatile SLRCONbits_t SLRCONbits @ 0xF76;
// bitfield macros
#define _SLRCON_SLRA_POSN                                   0x0
#define _SLRCON_SLRA_POSITION                               0x0
#define _SLRCON_SLRA_SIZE                                   0x1
#define _SLRCON_SLRA_LENGTH                                 0x1
#define _SLRCON_SLRA_MASK                                   0x1
#define _SLRCON_SLRB_POSN                                   0x1
#define _SLRCON_SLRB_POSITION                               0x1
#define _SLRCON_SLRB_SIZE                                   0x1
#define _SLRCON_SLRB_LENGTH                                 0x1
#define _SLRCON_SLRB_MASK                                   0x2
#define _SLRCON_SLRC_POSN                                   0x2
#define _SLRCON_SLRC_POSITION                               0x2
#define _SLRCON_SLRC_SIZE                                   0x1
#define _SLRCON_SLRC_LENGTH                                 0x1
#define _SLRCON_SLRC_MASK                                   0x4

// Register: WPUA
extern volatile unsigned char           WPUA                @ 0xF77;
#ifndef _LIB_BUILD
asm("WPUA equ 0F77h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
    };
} WPUAbits_t;
extern volatile WPUAbits_t WPUAbits @ 0xF77;
// bitfield macros
#define _WPUA_WPUA3_POSN                                    0x3
#define _WPUA_WPUA3_POSITION                                0x3
#define _WPUA_WPUA3_SIZE                                    0x1
#define _WPUA_WPUA3_LENGTH                                  0x1
#define _WPUA_WPUA3_MASK                                    0x8
#define _WPUA_WPUA4_POSN                                    0x4
#define _WPUA_WPUA4_POSITION                                0x4
#define _WPUA_WPUA4_SIZE                                    0x1
#define _WPUA_WPUA4_LENGTH                                  0x1
#define _WPUA_WPUA4_MASK                                    0x10
#define _WPUA_WPUA5_POSN                                    0x5
#define _WPUA_WPUA5_POSITION                                0x5
#define _WPUA_WPUA5_SIZE                                    0x1
#define _WPUA_WPUA5_LENGTH                                  0x1
#define _WPUA_WPUA5_MASK                                    0x20

// Register: WPUB
extern volatile unsigned char           WPUB                @ 0xF78;
#ifndef _LIB_BUILD
asm("WPUB equ 0F78h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits @ 0xF78;
// bitfield macros
#define _WPUB_WPUB4_POSN                                    0x4
#define _WPUB_WPUB4_POSITION                                0x4
#define _WPUB_WPUB4_SIZE                                    0x1
#define _WPUB_WPUB4_LENGTH                                  0x1
#define _WPUB_WPUB4_MASK                                    0x10
#define _WPUB_WPUB5_POSN                                    0x5
#define _WPUB_WPUB5_POSITION                                0x5
#define _WPUB_WPUB5_SIZE                                    0x1
#define _WPUB_WPUB5_LENGTH                                  0x1
#define _WPUB_WPUB5_MASK                                    0x20
#define _WPUB_WPUB6_POSN                                    0x6
#define _WPUB_WPUB6_POSITION                                0x6
#define _WPUB_WPUB6_SIZE                                    0x1
#define _WPUB_WPUB6_LENGTH                                  0x1
#define _WPUB_WPUB6_MASK                                    0x40
#define _WPUB_WPUB7_POSN                                    0x7
#define _WPUB_WPUB7_POSITION                                0x7
#define _WPUB_WPUB7_SIZE                                    0x1
#define _WPUB_WPUB7_LENGTH                                  0x1
#define _WPUB_WPUB7_MASK                                    0x80

// Register: IOCA
extern volatile unsigned char           IOCA                @ 0xF79;
#ifndef _LIB_BUILD
asm("IOCA equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCA0                  :1;
        unsigned IOCA1                  :1;
        unsigned                        :1;
        unsigned IOCA3                  :1;
        unsigned IOCA4                  :1;
        unsigned IOCA5                  :1;
    };
} IOCAbits_t;
extern volatile IOCAbits_t IOCAbits @ 0xF79;
// bitfield macros
#define _IOCA_IOCA0_POSN                                    0x0
#define _IOCA_IOCA0_POSITION                                0x0
#define _IOCA_IOCA0_SIZE                                    0x1
#define _IOCA_IOCA0_LENGTH                                  0x1
#define _IOCA_IOCA0_MASK                                    0x1
#define _IOCA_IOCA1_POSN                                    0x1
#define _IOCA_IOCA1_POSITION                                0x1
#define _IOCA_IOCA1_SIZE                                    0x1
#define _IOCA_IOCA1_LENGTH                                  0x1
#define _IOCA_IOCA1_MASK                                    0x2
#define _IOCA_IOCA3_POSN                                    0x3
#define _IOCA_IOCA3_POSITION                                0x3
#define _IOCA_IOCA3_SIZE                                    0x1
#define _IOCA_IOCA3_LENGTH                                  0x1
#define _IOCA_IOCA3_MASK                                    0x8
#define _IOCA_IOCA4_POSN                                    0x4
#define _IOCA_IOCA4_POSITION                                0x4
#define _IOCA_IOCA4_SIZE                                    0x1
#define _IOCA_IOCA4_LENGTH                                  0x1
#define _IOCA_IOCA4_MASK                                    0x10
#define _IOCA_IOCA5_POSN                                    0x5
#define _IOCA_IOCA5_POSITION                                0x5
#define _IOCA_IOCA5_SIZE                                    0x1
#define _IOCA_IOCA5_LENGTH                                  0x1
#define _IOCA_IOCA5_MASK                                    0x20

// Register: IOCB
extern volatile unsigned char           IOCB                @ 0xF7A;
#ifndef _LIB_BUILD
asm("IOCB equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned IOCB4                  :1;
        unsigned IOCB5                  :1;
        unsigned IOCB6                  :1;
        unsigned IOCB7                  :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits @ 0xF7A;
// bitfield macros
#define _IOCB_IOCB4_POSN                                    0x4
#define _IOCB_IOCB4_POSITION                                0x4
#define _IOCB_IOCB4_SIZE                                    0x1
#define _IOCB_IOCB4_LENGTH                                  0x1
#define _IOCB_IOCB4_MASK                                    0x10
#define _IOCB_IOCB5_POSN                                    0x5
#define _IOCB_IOCB5_POSITION                                0x5
#define _IOCB_IOCB5_SIZE                                    0x1
#define _IOCB_IOCB5_LENGTH                                  0x1
#define _IOCB_IOCB5_MASK                                    0x20
#define _IOCB_IOCB6_POSN                                    0x6
#define _IOCB_IOCB6_POSITION                                0x6
#define _IOCB_IOCB6_SIZE                                    0x1
#define _IOCB_IOCB6_LENGTH                                  0x1
#define _IOCB_IOCB6_MASK                                    0x40
#define _IOCB_IOCB7_POSN                                    0x7
#define _IOCB_IOCB7_POSITION                                0x7
#define _IOCB_IOCB7_SIZE                                    0x1
#define _IOCB_IOCB7_LENGTH                                  0x1
#define _IOCB_IOCB7_MASK                                    0x80

// Register: ANSEL
extern volatile unsigned char           ANSEL               @ 0xF7E;
#ifndef _LIB_BUILD
asm("ANSEL equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned ANS3                   :1;
        unsigned ANS4                   :1;
        unsigned ANS5                   :1;
        unsigned ANS6                   :1;
        unsigned ANS7                   :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits @ 0xF7E;
// bitfield macros
#define _ANSEL_ANS3_POSN                                    0x3
#define _ANSEL_ANS3_POSITION                                0x3
#define _ANSEL_ANS3_SIZE                                    0x1
#define _ANSEL_ANS3_LENGTH                                  0x1
#define _ANSEL_ANS3_MASK                                    0x8
#define _ANSEL_ANS4_POSN                                    0x4
#define _ANSEL_ANS4_POSITION                                0x4
#define _ANSEL_ANS4_SIZE                                    0x1
#define _ANSEL_ANS4_LENGTH                                  0x1
#define _ANSEL_ANS4_MASK                                    0x10
#define _ANSEL_ANS5_POSN                                    0x5
#define _ANSEL_ANS5_POSITION                                0x5
#define _ANSEL_ANS5_SIZE                                    0x1
#define _ANSEL_ANS5_LENGTH                                  0x1
#define _ANSEL_ANS5_MASK                                    0x20
#define _ANSEL_ANS6_POSN                                    0x6
#define _ANSEL_ANS6_POSITION                                0x6
#define _ANSEL_ANS6_SIZE                                    0x1
#define _ANSEL_ANS6_LENGTH                                  0x1
#define _ANSEL_ANS6_MASK                                    0x40
#define _ANSEL_ANS7_POSN                                    0x7
#define _ANSEL_ANS7_POSITION                                0x7
#define _ANSEL_ANS7_SIZE                                    0x1
#define _ANSEL_ANS7_LENGTH                                  0x1
#define _ANSEL_ANS7_MASK                                    0x80

// Register: ANSELH
extern volatile unsigned char           ANSELH              @ 0xF7F;
#ifndef _LIB_BUILD
asm("ANSELH equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANS8                   :1;
        unsigned ANS9                   :1;
        unsigned ANS10                  :1;
        unsigned ANS11                  :1;
    };
} ANSELHbits_t;
extern volatile ANSELHbits_t ANSELHbits @ 0xF7F;
// bitfield macros
#define _ANSELH_ANS8_POSN                                   0x0
#define _ANSELH_ANS8_POSITION                               0x0
#define _ANSELH_ANS8_SIZE                                   0x1
#define _ANSELH_ANS8_LENGTH                                 0x1
#define _ANSELH_ANS8_MASK                                   0x1
#define _ANSELH_ANS9_POSN                                   0x1
#define _ANSELH_ANS9_POSITION                               0x1
#define _ANSELH_ANS9_SIZE                                   0x1
#define _ANSELH_ANS9_LENGTH                                 0x1
#define _ANSELH_ANS9_MASK                                   0x2
#define _ANSELH_ANS10_POSN                                  0x2
#define _ANSELH_ANS10_POSITION                              0x2
#define _ANSELH_ANS10_SIZE                                  0x1
#define _ANSELH_ANS10_LENGTH                                0x1
#define _ANSELH_ANS10_MASK                                  0x4
#define _ANSELH_ANS11_POSN                                  0x3
#define _ANSELH_ANS11_POSITION                              0x3
#define _ANSELH_ANS11_SIZE                                  0x1
#define _ANSELH_ANS11_LENGTH                                0x1
#define _ANSELH_ANS11_MASK                                  0x8

// Register: PORTA
extern volatile unsigned char           PORTA               @ 0xF80;
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned                        :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned AN3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :4;
        unsigned CLKOUT                 :1;
        unsigned CLKIN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned LVDIN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned RA2                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned RA6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned RA7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned RJPU                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits @ 0xF80;
// bitfield macros
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20
#define _PORTA_AN3_POSN                                     0x4
#define _PORTA_AN3_POSITION                                 0x4
#define _PORTA_AN3_SIZE                                     0x1
#define _PORTA_AN3_LENGTH                                   0x1
#define _PORTA_AN3_MASK                                     0x10
#define _PORTA_OSC2_POSN                                    0x4
#define _PORTA_OSC2_POSITION                                0x4
#define _PORTA_OSC2_SIZE                                    0x1
#define _PORTA_OSC2_LENGTH                                  0x1
#define _PORTA_OSC2_MASK                                    0x10
#define _PORTA_OSC1_POSN                                    0x5
#define _PORTA_OSC1_POSITION                                0x5
#define _PORTA_OSC1_SIZE                                    0x1
#define _PORTA_OSC1_LENGTH                                  0x1
#define _PORTA_OSC1_MASK                                    0x20
#define _PORTA_CLKOUT_POSN                                  0x4
#define _PORTA_CLKOUT_POSITION                              0x4
#define _PORTA_CLKOUT_SIZE                                  0x1
#define _PORTA_CLKOUT_LENGTH                                0x1
#define _PORTA_CLKOUT_MASK                                  0x10
#define _PORTA_CLKIN_POSN                                   0x5
#define _PORTA_CLKIN_POSITION                               0x5
#define _PORTA_CLKIN_SIZE                                   0x1
#define _PORTA_CLKIN_LENGTH                                 0x1
#define _PORTA_CLKIN_MASK                                   0x20
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
#define _PORTA_RA6_POSN                                     0x6
#define _PORTA_RA6_POSITION                                 0x6
#define _PORTA_RA6_SIZE                                     0x1
#define _PORTA_RA6_LENGTH                                   0x1
#define _PORTA_RA6_MASK                                     0x40
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80
#define _PORTA_RJPU_POSN                                    0x7
#define _PORTA_RJPU_POSITION                                0x7
#define _PORTA_RJPU_SIZE                                    0x1
#define _PORTA_RJPU_LENGTH                                  0x1
#define _PORTA_RJPU_MASK                                    0x80
#define _PORTA_ULPWUIN_POSN                                 0x0
#define _PORTA_ULPWUIN_POSITION                             0x0
#define _PORTA_ULPWUIN_SIZE                                 0x1
#define _PORTA_ULPWUIN_LENGTH                               0x1
#define _PORTA_ULPWUIN_MASK                                 0x1

// Register: PORTB
extern volatile unsigned char           PORTB               @ 0xF81;
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned SDI                    :1;
        unsigned RX                     :1;
        unsigned SCL                    :1;
        unsigned TX                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned SDA                    :1;
        unsigned DT                     :1;
        unsigned SCK                    :1;
        unsigned CK                     :1;
    };
    struct {
        unsigned                        :4;
        unsigned AN10                   :1;
        unsigned AN11                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
    struct {
        unsigned RB0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned RB1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RB2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned RB3                    :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits @ 0xF81;
// bitfield macros
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80
#define _PORTB_SDI_POSN                                     0x4
#define _PORTB_SDI_POSITION                                 0x4
#define _PORTB_SDI_SIZE                                     0x1
#define _PORTB_SDI_LENGTH                                   0x1
#define _PORTB_SDI_MASK                                     0x10
#define _PORTB_RX_POSN                                      0x5
#define _PORTB_RX_POSITION                                  0x5
#define _PORTB_RX_SIZE                                      0x1
#define _PORTB_RX_LENGTH                                    0x1
#define _PORTB_RX_MASK                                      0x20
#define _PORTB_SCL_POSN                                     0x6
#define _PORTB_SCL_POSITION                                 0x6
#define _PORTB_SCL_SIZE                                     0x1
#define _PORTB_SCL_LENGTH                                   0x1
#define _PORTB_SCL_MASK                                     0x40
#define _PORTB_TX_POSN                                      0x7
#define _PORTB_TX_POSITION                                  0x7
#define _PORTB_TX_SIZE                                      0x1
#define _PORTB_TX_LENGTH                                    0x1
#define _PORTB_TX_MASK                                      0x80
#define _PORTB_SDA_POSN                                     0x4
#define _PORTB_SDA_POSITION                                 0x4
#define _PORTB_SDA_SIZE                                     0x1
#define _PORTB_SDA_LENGTH                                   0x1
#define _PORTB_SDA_MASK                                     0x10
#define _PORTB_DT_POSN                                      0x5
#define _PORTB_DT_POSITION                                  0x5
#define _PORTB_DT_SIZE                                      0x1
#define _PORTB_DT_LENGTH                                    0x1
#define _PORTB_DT_MASK                                      0x20
#define _PORTB_SCK_POSN                                     0x6
#define _PORTB_SCK_POSITION                                 0x6
#define _PORTB_SCK_SIZE                                     0x1
#define _PORTB_SCK_LENGTH                                   0x1
#define _PORTB_SCK_MASK                                     0x40
#define _PORTB_CK_POSN                                      0x7
#define _PORTB_CK_POSITION                                  0x7
#define _PORTB_CK_SIZE                                      0x1
#define _PORTB_CK_LENGTH                                    0x1
#define _PORTB_CK_MASK                                      0x80
#define _PORTB_AN10_POSN                                    0x4
#define _PORTB_AN10_POSITION                                0x4
#define _PORTB_AN10_SIZE                                    0x1
#define _PORTB_AN10_LENGTH                                  0x1
#define _PORTB_AN10_MASK                                    0x10
#define _PORTB_AN11_POSN                                    0x5
#define _PORTB_AN11_POSITION                                0x5
#define _PORTB_AN11_SIZE                                    0x1
#define _PORTB_AN11_LENGTH                                  0x1
#define _PORTB_AN11_MASK                                    0x20
#define _PORTB_CCP2_PA2_POSN                                0x3
#define _PORTB_CCP2_PA2_POSITION                            0x3
#define _PORTB_CCP2_PA2_SIZE                                0x1
#define _PORTB_CCP2_PA2_LENGTH                              0x1
#define _PORTB_CCP2_PA2_MASK                                0x8
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8

// Register: PORTC
extern volatile unsigned char           PORTC               @ 0xF82;
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned AN4                    :1;
        unsigned AN5                    :1;
        unsigned AN6                    :1;
        unsigned AN7                    :1;
        unsigned                        :2;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned NOT_SS                 :1;
    };
    struct {
        unsigned C12INP                 :1;
        unsigned C12IN1M                :1;
        unsigned C12IN2M                :1;
        unsigned C12IN3M                :1;
        unsigned C12OUT                 :1;
        unsigned CCP1                   :1;
        unsigned nSS                    :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned PGM                    :1;
        unsigned SRQ                    :1;
        unsigned T0CKI                  :1;
        unsigned T13CKI                 :1;
        unsigned T1OSCO                 :1;
    };
    struct {
        unsigned VREFP                  :1;
        unsigned VREFM                  :1;
        unsigned CVREF                  :1;
        unsigned                        :3;
        unsigned T1OSCI                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned P1D                    :1;
        unsigned P1C                    :1;
        unsigned P1B                    :1;
        unsigned P1A                    :1;
        unsigned SS                     :1;
        unsigned SDO                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned CCP2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PA1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits @ 0xF82;
// bitfield macros
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80
#define _PORTC_AN4_POSN                                     0x0
#define _PORTC_AN4_POSITION                                 0x0
#define _PORTC_AN4_SIZE                                     0x1
#define _PORTC_AN4_LENGTH                                   0x1
#define _PORTC_AN4_MASK                                     0x1
#define _PORTC_AN5_POSN                                     0x1
#define _PORTC_AN5_POSITION                                 0x1
#define _PORTC_AN5_SIZE                                     0x1
#define _PORTC_AN5_LENGTH                                   0x1
#define _PORTC_AN5_MASK                                     0x2
#define _PORTC_AN6_POSN                                     0x2
#define _PORTC_AN6_POSITION                                 0x2
#define _PORTC_AN6_SIZE                                     0x1
#define _PORTC_AN6_LENGTH                                   0x1
#define _PORTC_AN6_MASK                                     0x4
#define _PORTC_AN7_POSN                                     0x3
#define _PORTC_AN7_POSITION                                 0x3
#define _PORTC_AN7_SIZE                                     0x1
#define _PORTC_AN7_LENGTH                                   0x1
#define _PORTC_AN7_MASK                                     0x8
#define _PORTC_AN8_POSN                                     0x6
#define _PORTC_AN8_POSITION                                 0x6
#define _PORTC_AN8_SIZE                                     0x1
#define _PORTC_AN8_LENGTH                                   0x1
#define _PORTC_AN8_MASK                                     0x40
#define _PORTC_AN9_POSN                                     0x7
#define _PORTC_AN9_POSITION                                 0x7
#define _PORTC_AN9_SIZE                                     0x1
#define _PORTC_AN9_LENGTH                                   0x1
#define _PORTC_AN9_MASK                                     0x80
#define _PORTC_NOT_SS_POSN                                  0x6
#define _PORTC_NOT_SS_POSITION                              0x6
#define _PORTC_NOT_SS_SIZE                                  0x1
#define _PORTC_NOT_SS_LENGTH                                0x1
#define _PORTC_NOT_SS_MASK                                  0x40
#define _PORTC_C12INP_POSN                                  0x0
#define _PORTC_C12INP_POSITION                              0x0
#define _PORTC_C12INP_SIZE                                  0x1
#define _PORTC_C12INP_LENGTH                                0x1
#define _PORTC_C12INP_MASK                                  0x1
#define _PORTC_C12IN1M_POSN                                 0x1
#define _PORTC_C12IN1M_POSITION                             0x1
#define _PORTC_C12IN1M_SIZE                                 0x1
#define _PORTC_C12IN1M_LENGTH                               0x1
#define _PORTC_C12IN1M_MASK                                 0x2
#define _PORTC_C12IN2M_POSN                                 0x2
#define _PORTC_C12IN2M_POSITION                             0x2
#define _PORTC_C12IN2M_SIZE                                 0x1
#define _PORTC_C12IN2M_LENGTH                               0x1
#define _PORTC_C12IN2M_MASK                                 0x4
#define _PORTC_C12IN3M_POSN                                 0x3
#define _PORTC_C12IN3M_POSITION                             0x3
#define _PORTC_C12IN3M_SIZE                                 0x1
#define _PORTC_C12IN3M_LENGTH                               0x1
#define _PORTC_C12IN3M_MASK                                 0x8
#define _PORTC_C12OUT_POSN                                  0x4
#define _PORTC_C12OUT_POSITION                              0x4
#define _PORTC_C12OUT_SIZE                                  0x1
#define _PORTC_C12OUT_LENGTH                                0x1
#define _PORTC_C12OUT_MASK                                  0x10
#define _PORTC_CCP1_POSN                                    0x5
#define _PORTC_CCP1_POSITION                                0x5
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x20
#define _PORTC_nSS_POSN                                     0x6
#define _PORTC_nSS_POSITION                                 0x6
#define _PORTC_nSS_SIZE                                     0x1
#define _PORTC_nSS_LENGTH                                   0x1
#define _PORTC_nSS_MASK                                     0x40
#define _PORTC_INT0_POSN                                    0x0
#define _PORTC_INT0_POSITION                                0x0
#define _PORTC_INT0_SIZE                                    0x1
#define _PORTC_INT0_LENGTH                                  0x1
#define _PORTC_INT0_MASK                                    0x1
#define _PORTC_INT1_POSN                                    0x1
#define _PORTC_INT1_POSITION                                0x1
#define _PORTC_INT1_SIZE                                    0x1
#define _PORTC_INT1_LENGTH                                  0x1
#define _PORTC_INT1_MASK                                    0x2
#define _PORTC_INT2_POSN                                    0x2
#define _PORTC_INT2_POSITION                                0x2
#define _PORTC_INT2_SIZE                                    0x1
#define _PORTC_INT2_LENGTH                                  0x1
#define _PORTC_INT2_MASK                                    0x4
#define _PORTC_PGM_POSN                                     0x3
#define _PORTC_PGM_POSITION                                 0x3
#define _PORTC_PGM_SIZE                                     0x1
#define _PORTC_PGM_LENGTH                                   0x1
#define _PORTC_PGM_MASK                                     0x8
#define _PORTC_SRQ_POSN                                     0x4
#define _PORTC_SRQ_POSITION                                 0x4
#define _PORTC_SRQ_SIZE                                     0x1
#define _PORTC_SRQ_LENGTH                                   0x1
#define _PORTC_SRQ_MASK                                     0x10
#define _PORTC_T0CKI_POSN                                   0x5
#define _PORTC_T0CKI_POSITION                               0x5
#define _PORTC_T0CKI_SIZE                                   0x1
#define _PORTC_T0CKI_LENGTH                                 0x1
#define _PORTC_T0CKI_MASK                                   0x20
#define _PORTC_T13CKI_POSN                                  0x6
#define _PORTC_T13CKI_POSITION                              0x6
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x40
#define _PORTC_T1OSCO_POSN                                  0x7
#define _PORTC_T1OSCO_POSITION                              0x7
#define _PORTC_T1OSCO_SIZE                                  0x1
#define _PORTC_T1OSCO_LENGTH                                0x1
#define _PORTC_T1OSCO_MASK                                  0x80
#define _PORTC_VREFP_POSN                                   0x0
#define _PORTC_VREFP_POSITION                               0x0
#define _PORTC_VREFP_SIZE                                   0x1
#define _PORTC_VREFP_LENGTH                                 0x1
#define _PORTC_VREFP_MASK                                   0x1
#define _PORTC_VREFM_POSN                                   0x1
#define _PORTC_VREFM_POSITION                               0x1
#define _PORTC_VREFM_SIZE                                   0x1
#define _PORTC_VREFM_LENGTH                                 0x1
#define _PORTC_VREFM_MASK                                   0x2
#define _PORTC_CVREF_POSN                                   0x2
#define _PORTC_CVREF_POSITION                               0x2
#define _PORTC_CVREF_SIZE                                   0x1
#define _PORTC_CVREF_LENGTH                                 0x1
#define _PORTC_CVREF_MASK                                   0x4
#define _PORTC_T1OSCI_POSN                                  0x6
#define _PORTC_T1OSCI_POSITION                              0x6
#define _PORTC_T1OSCI_SIZE                                  0x1
#define _PORTC_T1OSCI_LENGTH                                0x1
#define _PORTC_T1OSCI_MASK                                  0x40
#define _PORTC_P1D_POSN                                     0x2
#define _PORTC_P1D_POSITION                                 0x2
#define _PORTC_P1D_SIZE                                     0x1
#define _PORTC_P1D_LENGTH                                   0x1
#define _PORTC_P1D_MASK                                     0x4
#define _PORTC_P1C_POSN                                     0x3
#define _PORTC_P1C_POSITION                                 0x3
#define _PORTC_P1C_SIZE                                     0x1
#define _PORTC_P1C_LENGTH                                   0x1
#define _PORTC_P1C_MASK                                     0x8
#define _PORTC_P1B_POSN                                     0x4
#define _PORTC_P1B_POSITION                                 0x4
#define _PORTC_P1B_SIZE                                     0x1
#define _PORTC_P1B_LENGTH                                   0x1
#define _PORTC_P1B_MASK                                     0x10
#define _PORTC_P1A_POSN                                     0x5
#define _PORTC_P1A_POSITION                                 0x5
#define _PORTC_P1A_SIZE                                     0x1
#define _PORTC_P1A_LENGTH                                   0x1
#define _PORTC_P1A_MASK                                     0x20
#define _PORTC_SS_POSN                                      0x6
#define _PORTC_SS_POSITION                                  0x6
#define _PORTC_SS_SIZE                                      0x1
#define _PORTC_SS_LENGTH                                    0x1
#define _PORTC_SS_MASK                                      0x40
#define _PORTC_SDO_POSN                                     0x7
#define _PORTC_SDO_POSITION                                 0x7
#define _PORTC_SDO_SIZE                                     0x1
#define _PORTC_SDO_LENGTH                                   0x1
#define _PORTC_SDO_MASK                                     0x80
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2

// Register: LATA
extern volatile unsigned char           LATA                @ 0xF89;
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
    };
    struct {
        unsigned LA0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LA2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LA3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LA4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LA5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LA6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LA7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LATA7                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits @ 0xF89;
// bitfield macros
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20
#define _LATA_LA0_POSN                                      0x0
#define _LATA_LA0_POSITION                                  0x0
#define _LATA_LA0_SIZE                                      0x1
#define _LATA_LA0_LENGTH                                    0x1
#define _LATA_LA0_MASK                                      0x1
#define _LATA_LA1_POSN                                      0x1
#define _LATA_LA1_POSITION                                  0x1
#define _LATA_LA1_SIZE                                      0x1
#define _LATA_LA1_LENGTH                                    0x1
#define _LATA_LA1_MASK                                      0x2
#define _LATA_LA2_POSN                                      0x2
#define _LATA_LA2_POSITION                                  0x2
#define _LATA_LA2_SIZE                                      0x1
#define _LATA_LA2_LENGTH                                    0x1
#define _LATA_LA2_MASK                                      0x4
#define _LATA_LA3_POSN                                      0x3
#define _LATA_LA3_POSITION                                  0x3
#define _LATA_LA3_SIZE                                      0x1
#define _LATA_LA3_LENGTH                                    0x1
#define _LATA_LA3_MASK                                      0x8
#define _LATA_LA4_POSN                                      0x4
#define _LATA_LA4_POSITION                                  0x4
#define _LATA_LA4_SIZE                                      0x1
#define _LATA_LA4_LENGTH                                    0x1
#define _LATA_LA4_MASK                                      0x10
#define _LATA_LA5_POSN                                      0x5
#define _LATA_LA5_POSITION                                  0x5
#define _LATA_LA5_SIZE                                      0x1
#define _LATA_LA5_LENGTH                                    0x1
#define _LATA_LA5_MASK                                      0x20
#define _LATA_LA6_POSN                                      0x6
#define _LATA_LA6_POSITION                                  0x6
#define _LATA_LA6_SIZE                                      0x1
#define _LATA_LA6_LENGTH                                    0x1
#define _LATA_LA6_MASK                                      0x40
#define _LATA_LA7_POSN                                      0x7
#define _LATA_LA7_POSITION                                  0x7
#define _LATA_LA7_SIZE                                      0x1
#define _LATA_LA7_LENGTH                                    0x1
#define _LATA_LA7_MASK                                      0x80
#define _LATA_LATA7_POSN                                    0x7
#define _LATA_LATA7_POSITION                                0x7
#define _LATA_LATA7_SIZE                                    0x1
#define _LATA_LATA7_LENGTH                                  0x1
#define _LATA_LATA7_MASK                                    0x80

// Register: LATB
extern volatile unsigned char           LATB                @ 0xF8A;
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LB0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LB1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LB2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LB3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LB4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LB5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LB6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits @ 0xF8A;
// bitfield macros
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80
#define _LATB_LB0_POSN                                      0x0
#define _LATB_LB0_POSITION                                  0x0
#define _LATB_LB0_SIZE                                      0x1
#define _LATB_LB0_LENGTH                                    0x1
#define _LATB_LB0_MASK                                      0x1
#define _LATB_LB1_POSN                                      0x1
#define _LATB_LB1_POSITION                                  0x1
#define _LATB_LB1_SIZE                                      0x1
#define _LATB_LB1_LENGTH                                    0x1
#define _LATB_LB1_MASK                                      0x2
#define _LATB_LB2_POSN                                      0x2
#define _LATB_LB2_POSITION                                  0x2
#define _LATB_LB2_SIZE                                      0x1
#define _LATB_LB2_LENGTH                                    0x1
#define _LATB_LB2_MASK                                      0x4
#define _LATB_LB3_POSN                                      0x3
#define _LATB_LB3_POSITION                                  0x3
#define _LATB_LB3_SIZE                                      0x1
#define _LATB_LB3_LENGTH                                    0x1
#define _LATB_LB3_MASK                                      0x8
#define _LATB_LB4_POSN                                      0x4
#define _LATB_LB4_POSITION                                  0x4
#define _LATB_LB4_SIZE                                      0x1
#define _LATB_LB4_LENGTH                                    0x1
#define _LATB_LB4_MASK                                      0x10
#define _LATB_LB5_POSN                                      0x5
#define _LATB_LB5_POSITION                                  0x5
#define _LATB_LB5_SIZE                                      0x1
#define _LATB_LB5_LENGTH                                    0x1
#define _LATB_LB5_MASK                                      0x20
#define _LATB_LB6_POSN                                      0x6
#define _LATB_LB6_POSITION                                  0x6
#define _LATB_LB6_SIZE                                      0x1
#define _LATB_LB6_LENGTH                                    0x1
#define _LATB_LB6_MASK                                      0x40
#define _LATB_LB7_POSN                                      0x7
#define _LATB_LB7_POSITION                                  0x7
#define _LATB_LB7_SIZE                                      0x1
#define _LATB_LB7_LENGTH                                    0x1
#define _LATB_LB7_MASK                                      0x80

// Register: LATC
extern volatile unsigned char           LATC                @ 0xF8B;
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LC1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LC2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LC3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LC4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LC5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LC6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LC7                    :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits @ 0xF8B;
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC3_POSN                                    0x3
#define _LATC_LATC3_POSITION                                0x3
#define _LATC_LATC3_SIZE                                    0x1
#define _LATC_LATC3_LENGTH                                  0x1
#define _LATC_LATC3_MASK                                    0x8
#define _LATC_LATC4_POSN                                    0x4
#define _LATC_LATC4_POSITION                                0x4
#define _LATC_LATC4_SIZE                                    0x1
#define _LATC_LATC4_LENGTH                                  0x1
#define _LATC_LATC4_MASK                                    0x10
#define _LATC_LATC5_POSN                                    0x5
#define _LATC_LATC5_POSITION                                0x5
#define _LATC_LATC5_SIZE                                    0x1
#define _LATC_LATC5_LENGTH                                  0x1
#define _LATC_LATC5_MASK                                    0x20
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80
#define _LATC_LC0_POSN                                      0x0
#define _LATC_LC0_POSITION                                  0x0
#define _LATC_LC0_SIZE                                      0x1
#define _LATC_LC0_LENGTH                                    0x1
#define _LATC_LC0_MASK                                      0x1
#define _LATC_LC1_POSN                                      0x1
#define _LATC_LC1_POSITION                                  0x1
#define _LATC_LC1_SIZE                                      0x1
#define _LATC_LC1_LENGTH                                    0x1
#define _LATC_LC1_MASK                                      0x2
#define _LATC_LC2_POSN                                      0x2
#define _LATC_LC2_POSITION                                  0x2
#define _LATC_LC2_SIZE                                      0x1
#define _LATC_LC2_LENGTH                                    0x1
#define _LATC_LC2_MASK                                      0x4
#define _LATC_LC3_POSN                                      0x3
#define _LATC_LC3_POSITION                                  0x3
#define _LATC_LC3_SIZE                                      0x1
#define _LATC_LC3_LENGTH                                    0x1
#define _LATC_LC3_MASK                                      0x8
#define _LATC_LC4_POSN                                      0x4
#define _LATC_LC4_POSITION                                  0x4
#define _LATC_LC4_SIZE                                      0x1
#define _LATC_LC4_LENGTH                                    0x1
#define _LATC_LC4_MASK                                      0x10
#define _LATC_LC5_POSN                                      0x5
#define _LATC_LC5_POSITION                                  0x5
#define _LATC_LC5_SIZE                                      0x1
#define _LATC_LC5_LENGTH                                    0x1
#define _LATC_LC5_MASK                                      0x20
#define _LATC_LC6_POSN                                      0x6
#define _LATC_LC6_POSITION                                  0x6
#define _LATC_LC6_SIZE                                      0x1
#define _LATC_LC6_LENGTH                                    0x1
#define _LATC_LC6_MASK                                      0x40
#define _LATC_LC7_POSN                                      0x7
#define _LATC_LC7_POSITION                                  0x7
#define _LATC_LC7_SIZE                                      0x1
#define _LATC_LC7_LENGTH                                    0x1
#define _LATC_LC7_MASK                                      0x80

// Register: TRISA
extern volatile unsigned char           TRISA               @ 0xF92;
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                @ 0xF92;
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits @ 0xF92;
// bitfield macros
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits @ 0xF92;
// bitfield macros
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20

// Register: TRISB
extern volatile unsigned char           TRISB               @ 0xF93;
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                @ 0xF93;
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits @ 0xF93;
// bitfield macros
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80
#define _TRISB_RB4_POSN                                     0x4
#define _TRISB_RB4_POSITION                                 0x4
#define _TRISB_RB4_SIZE                                     0x1
#define _TRISB_RB4_LENGTH                                   0x1
#define _TRISB_RB4_MASK                                     0x10
#define _TRISB_RB5_POSN                                     0x5
#define _TRISB_RB5_POSITION                                 0x5
#define _TRISB_RB5_SIZE                                     0x1
#define _TRISB_RB5_LENGTH                                   0x1
#define _TRISB_RB5_MASK                                     0x20
#define _TRISB_RB6_POSN                                     0x6
#define _TRISB_RB6_POSITION                                 0x6
#define _TRISB_RB6_SIZE                                     0x1
#define _TRISB_RB6_LENGTH                                   0x1
#define _TRISB_RB6_MASK                                     0x40
#define _TRISB_RB7_POSN                                     0x7
#define _TRISB_RB7_POSITION                                 0x7
#define _TRISB_RB7_SIZE                                     0x1
#define _TRISB_RB7_LENGTH                                   0x1
#define _TRISB_RB7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :4;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits @ 0xF93;
// bitfield macros
#define _DDRB_TRISB4_POSN                                   0x4
#define _DDRB_TRISB4_POSITION                               0x4
#define _DDRB_TRISB4_SIZE                                   0x1
#define _DDRB_TRISB4_LENGTH                                 0x1
#define _DDRB_TRISB4_MASK                                   0x10
#define _DDRB_TRISB5_POSN                                   0x5
#define _DDRB_TRISB5_POSITION                               0x5
#define _DDRB_TRISB5_SIZE                                   0x1
#define _DDRB_TRISB5_LENGTH                                 0x1
#define _DDRB_TRISB5_MASK                                   0x20
#define _DDRB_TRISB6_POSN                                   0x6
#define _DDRB_TRISB6_POSITION                               0x6
#define _DDRB_TRISB6_SIZE                                   0x1
#define _DDRB_TRISB6_LENGTH                                 0x1
#define _DDRB_TRISB6_MASK                                   0x40
#define _DDRB_TRISB7_POSN                                   0x7
#define _DDRB_TRISB7_POSITION                               0x7
#define _DDRB_TRISB7_SIZE                                   0x1
#define _DDRB_TRISB7_LENGTH                                 0x1
#define _DDRB_TRISB7_MASK                                   0x80
#define _DDRB_RB4_POSN                                      0x4
#define _DDRB_RB4_POSITION                                  0x4
#define _DDRB_RB4_SIZE                                      0x1
#define _DDRB_RB4_LENGTH                                    0x1
#define _DDRB_RB4_MASK                                      0x10
#define _DDRB_RB5_POSN                                      0x5
#define _DDRB_RB5_POSITION                                  0x5
#define _DDRB_RB5_SIZE                                      0x1
#define _DDRB_RB5_LENGTH                                    0x1
#define _DDRB_RB5_MASK                                      0x20
#define _DDRB_RB6_POSN                                      0x6
#define _DDRB_RB6_POSITION                                  0x6
#define _DDRB_RB6_SIZE                                      0x1
#define _DDRB_RB6_LENGTH                                    0x1
#define _DDRB_RB6_MASK                                      0x40
#define _DDRB_RB7_POSN                                      0x7
#define _DDRB_RB7_POSITION                                  0x7
#define _DDRB_RB7_SIZE                                      0x1
#define _DDRB_RB7_LENGTH                                    0x1
#define _DDRB_RB7_MASK                                      0x80

// Register: TRISC
extern volatile unsigned char           TRISC               @ 0xF94;
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                @ 0xF94;
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits @ 0xF94;
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
#define _TRISC_TRISC4_POSN                                  0x4
#define _TRISC_TRISC4_POSITION                              0x4
#define _TRISC_TRISC4_SIZE                                  0x1
#define _TRISC_TRISC4_LENGTH                                0x1
#define _TRISC_TRISC4_MASK                                  0x10
#define _TRISC_TRISC5_POSN                                  0x5
#define _TRISC_TRISC5_POSITION                              0x5
#define _TRISC_TRISC5_SIZE                                  0x1
#define _TRISC_TRISC5_LENGTH                                0x1
#define _TRISC_TRISC5_MASK                                  0x20
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80
#define _TRISC_RC0_POSN                                     0x0
#define _TRISC_RC0_POSITION                                 0x0
#define _TRISC_RC0_SIZE                                     0x1
#define _TRISC_RC0_LENGTH                                   0x1
#define _TRISC_RC0_MASK                                     0x1
#define _TRISC_RC1_POSN                                     0x1
#define _TRISC_RC1_POSITION                                 0x1
#define _TRISC_RC1_SIZE                                     0x1
#define _TRISC_RC1_LENGTH                                   0x1
#define _TRISC_RC1_MASK                                     0x2
#define _TRISC_RC2_POSN                                     0x2
#define _TRISC_RC2_POSITION                                 0x2
#define _TRISC_RC2_SIZE                                     0x1
#define _TRISC_RC2_LENGTH                                   0x1
#define _TRISC_RC2_MASK                                     0x4
#define _TRISC_RC3_POSN                                     0x3
#define _TRISC_RC3_POSITION                                 0x3
#define _TRISC_RC3_SIZE                                     0x1
#define _TRISC_RC3_LENGTH                                   0x1
#define _TRISC_RC3_MASK                                     0x8
#define _TRISC_RC4_POSN                                     0x4
#define _TRISC_RC4_POSITION                                 0x4
#define _TRISC_RC4_SIZE                                     0x1
#define _TRISC_RC4_LENGTH                                   0x1
#define _TRISC_RC4_MASK                                     0x10
#define _TRISC_RC5_POSN                                     0x5
#define _TRISC_RC5_POSITION                                 0x5
#define _TRISC_RC5_SIZE                                     0x1
#define _TRISC_RC5_LENGTH                                   0x1
#define _TRISC_RC5_MASK                                     0x20
#define _TRISC_RC6_POSN                                     0x6
#define _TRISC_RC6_POSITION                                 0x6
#define _TRISC_RC6_SIZE                                     0x1
#define _TRISC_RC6_LENGTH                                   0x1
#define _TRISC_RC6_MASK                                     0x40
#define _TRISC_RC7_POSN                                     0x7
#define _TRISC_RC7_POSITION                                 0x7
#define _TRISC_RC7_SIZE                                     0x1
#define _TRISC_RC7_LENGTH                                   0x1
#define _TRISC_RC7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} DDRCbits_t;
extern volatile DDRCbits_t DDRCbits @ 0xF94;
// bitfield macros
#define _DDRC_TRISC0_POSN                                   0x0
#define _DDRC_TRISC0_POSITION                               0x0
#define _DDRC_TRISC0_SIZE                                   0x1
#define _DDRC_TRISC0_LENGTH                                 0x1
#define _DDRC_TRISC0_MASK                                   0x1
#define _DDRC_TRISC1_POSN                                   0x1
#define _DDRC_TRISC1_POSITION                               0x1
#define _DDRC_TRISC1_SIZE                                   0x1
#define _DDRC_TRISC1_LENGTH                                 0x1
#define _DDRC_TRISC1_MASK                                   0x2
#define _DDRC_TRISC2_POSN                                   0x2
#define _DDRC_TRISC2_POSITION                               0x2
#define _DDRC_TRISC2_SIZE                                   0x1
#define _DDRC_TRISC2_LENGTH                                 0x1
#define _DDRC_TRISC2_MASK                                   0x4
#define _DDRC_TRISC3_POSN                                   0x3
#define _DDRC_TRISC3_POSITION                               0x3
#define _DDRC_TRISC3_SIZE                                   0x1
#define _DDRC_TRISC3_LENGTH                                 0x1
#define _DDRC_TRISC3_MASK                                   0x8
#define _DDRC_TRISC4_POSN                                   0x4
#define _DDRC_TRISC4_POSITION                               0x4
#define _DDRC_TRISC4_SIZE                                   0x1
#define _DDRC_TRISC4_LENGTH                                 0x1
#define _DDRC_TRISC4_MASK                                   0x10
#define _DDRC_TRISC5_POSN                                   0x5
#define _DDRC_TRISC5_POSITION                               0x5
#define _DDRC_TRISC5_SIZE                                   0x1
#define _DDRC_TRISC5_LENGTH                                 0x1
#define _DDRC_TRISC5_MASK                                   0x20
#define _DDRC_TRISC6_POSN                                   0x6
#define _DDRC_TRISC6_POSITION                               0x6
#define _DDRC_TRISC6_SIZE                                   0x1
#define _DDRC_TRISC6_LENGTH                                 0x1
#define _DDRC_TRISC6_MASK                                   0x40
#define _DDRC_TRISC7_POSN                                   0x7
#define _DDRC_TRISC7_POSITION                               0x7
#define _DDRC_TRISC7_SIZE                                   0x1
#define _DDRC_TRISC7_LENGTH                                 0x1
#define _DDRC_TRISC7_MASK                                   0x80
#define _DDRC_RC0_POSN                                      0x0
#define _DDRC_RC0_POSITION                                  0x0
#define _DDRC_RC0_SIZE                                      0x1
#define _DDRC_RC0_LENGTH                                    0x1
#define _DDRC_RC0_MASK                                      0x1
#define _DDRC_RC1_POSN                                      0x1
#define _DDRC_RC1_POSITION                                  0x1
#define _DDRC_RC1_SIZE                                      0x1
#define _DDRC_RC1_LENGTH                                    0x1
#define _DDRC_RC1_MASK                                      0x2
#define _DDRC_RC2_POSN                                      0x2
#define _DDRC_RC2_POSITION                                  0x2
#define _DDRC_RC2_SIZE                                      0x1
#define _DDRC_RC2_LENGTH                                    0x1
#define _DDRC_RC2_MASK                                      0x4
#define _DDRC_RC3_POSN                                      0x3
#define _DDRC_RC3_POSITION                                  0x3
#define _DDRC_RC3_SIZE                                      0x1
#define _DDRC_RC3_LENGTH                                    0x1
#define _DDRC_RC3_MASK                                      0x8
#define _DDRC_RC4_POSN                                      0x4
#define _DDRC_RC4_POSITION                                  0x4
#define _DDRC_RC4_SIZE                                      0x1
#define _DDRC_RC4_LENGTH                                    0x1
#define _DDRC_RC4_MASK                                      0x10
#define _DDRC_RC5_POSN                                      0x5
#define _DDRC_RC5_POSITION                                  0x5
#define _DDRC_RC5_SIZE                                      0x1
#define _DDRC_RC5_LENGTH                                    0x1
#define _DDRC_RC5_MASK                                      0x20
#define _DDRC_RC6_POSN                                      0x6
#define _DDRC_RC6_POSITION                                  0x6
#define _DDRC_RC6_SIZE                                      0x1
#define _DDRC_RC6_LENGTH                                    0x1
#define _DDRC_RC6_MASK                                      0x40
#define _DDRC_RC7_POSN                                      0x7
#define _DDRC_RC7_POSITION                                  0x7
#define _DDRC_RC7_SIZE                                      0x1
#define _DDRC_RC7_LENGTH                                    0x1
#define _DDRC_RC7_MASK                                      0x80

// Register: OSCTUNE
extern volatile unsigned char           OSCTUNE             @ 0xF9B;
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :6;
        unsigned SPLLEN                 :1;
        unsigned INTSRC                 :1;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits @ 0xF9B;
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F
#define _OSCTUNE_SPLLEN_POSN                                0x6
#define _OSCTUNE_SPLLEN_POSITION                            0x6
#define _OSCTUNE_SPLLEN_SIZE                                0x1
#define _OSCTUNE_SPLLEN_LENGTH                              0x1
#define _OSCTUNE_SPLLEN_MASK                                0x40
#define _OSCTUNE_INTSRC_POSN                                0x7
#define _OSCTUNE_INTSRC_POSITION                            0x7
#define _OSCTUNE_INTSRC_SIZE                                0x1
#define _OSCTUNE_INTSRC_LENGTH                              0x1
#define _OSCTUNE_INTSRC_MASK                                0x80
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10
#define _OSCTUNE_TUN5_POSN                                  0x5
#define _OSCTUNE_TUN5_POSITION                              0x5
#define _OSCTUNE_TUN5_SIZE                                  0x1
#define _OSCTUNE_TUN5_LENGTH                                0x1
#define _OSCTUNE_TUN5_MASK                                  0x20

// Register: PIE1
extern volatile unsigned char           PIE1                @ 0xF9D;
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IE                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IE                  :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits @ 0xF9D;
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_RC1IE_POSN                                    0x5
#define _PIE1_RC1IE_POSITION                                0x5
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x20
#define _PIE1_TX1IE_POSN                                    0x4
#define _PIE1_TX1IE_POSITION                                0x4
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x10

// Register: PIR1
extern volatile unsigned char           PIR1                @ 0xF9E;
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IF                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits @ 0xF9E;
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_RC1IF_POSN                                    0x5
#define _PIR1_RC1IF_POSITION                                0x5
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x20
#define _PIR1_TX1IF_POSN                                    0x4
#define _PIR1_TX1IF_POSITION                                0x4
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x10

// Register: IPR1
extern volatile unsigned char           IPR1                @ 0xF9F;
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned CCP1IP                 :1;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
        unsigned ADIP                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IP                  :1;
    };
} IPR1bits_t;
extern volatile IPR1bits_t IPR1bits @ 0xF9F;
// bitfield macros
#define _IPR1_TMR1IP_POSN                                   0x0
#define _IPR1_TMR1IP_POSITION                               0x0
#define _IPR1_TMR1IP_SIZE                                   0x1
#define _IPR1_TMR1IP_LENGTH                                 0x1
#define _IPR1_TMR1IP_MASK                                   0x1
#define _IPR1_TMR2IP_POSN                                   0x1
#define _IPR1_TMR2IP_POSITION                               0x1
#define _IPR1_TMR2IP_SIZE                                   0x1
#define _IPR1_TMR2IP_LENGTH                                 0x1
#define _IPR1_TMR2IP_MASK                                   0x2
#define _IPR1_CCP1IP_POSN                                   0x2
#define _IPR1_CCP1IP_POSITION                               0x2
#define _IPR1_CCP1IP_SIZE                                   0x1
#define _IPR1_CCP1IP_LENGTH                                 0x1
#define _IPR1_CCP1IP_MASK                                   0x4
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
#define _IPR1_TXIP_POSN                                     0x4
#define _IPR1_TXIP_POSITION                                 0x4
#define _IPR1_TXIP_SIZE                                     0x1
#define _IPR1_TXIP_LENGTH                                   0x1
#define _IPR1_TXIP_MASK                                     0x10
#define _IPR1_RCIP_POSN                                     0x5
#define _IPR1_RCIP_POSITION                                 0x5
#define _IPR1_RCIP_SIZE                                     0x1
#define _IPR1_RCIP_LENGTH                                   0x1
#define _IPR1_RCIP_MASK                                     0x20
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_RC1IP_POSN                                    0x5
#define _IPR1_RC1IP_POSITION                                0x5
#define _IPR1_RC1IP_SIZE                                    0x1
#define _IPR1_RC1IP_LENGTH                                  0x1
#define _IPR1_RC1IP_MASK                                    0x20
#define _IPR1_TX1IP_POSN                                    0x4
#define _IPR1_TX1IP_POSITION                                0x4
#define _IPR1_TX1IP_SIZE                                    0x1
#define _IPR1_TX1IP_LENGTH                                  0x1
#define _IPR1_TX1IP_MASK                                    0x10

// Register: PIE2
extern volatile unsigned char           PIE2                @ 0xFA0;
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IE                 :1;
        unsigned USBIE                  :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned C2IE                   :1;
        unsigned C1IE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIE                   :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits @ 0xFA0;
// bitfield macros
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_USBIE_POSN                                    0x2
#define _PIE2_USBIE_POSITION                                0x2
#define _PIE2_USBIE_SIZE                                    0x1
#define _PIE2_USBIE_LENGTH                                  0x1
#define _PIE2_USBIE_MASK                                    0x4
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10
#define _PIE2_C2IE_POSN                                     0x5
#define _PIE2_C2IE_POSITION                                 0x5
#define _PIE2_C2IE_SIZE                                     0x1
#define _PIE2_C2IE_LENGTH                                   0x1
#define _PIE2_C2IE_MASK                                     0x20
#define _PIE2_C1IE_POSN                                     0x6
#define _PIE2_C1IE_POSITION                                 0x6
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
#define _PIE2_CMIE_POSN                                     0x6
#define _PIE2_CMIE_POSITION                                 0x6
#define _PIE2_CMIE_SIZE                                     0x1
#define _PIE2_CMIE_LENGTH                                   0x1
#define _PIE2_CMIE_MASK                                     0x40

// Register: PIR2
extern volatile unsigned char           PIR2                @ 0xFA1;
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IF                 :1;
        unsigned USBIF                  :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned C2IF                   :1;
        unsigned C1IF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIF                   :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits @ 0xFA1;
// bitfield macros
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_USBIF_POSN                                    0x2
#define _PIR2_USBIF_POSITION                                0x2
#define _PIR2_USBIF_SIZE                                    0x1
#define _PIR2_USBIF_LENGTH                                  0x1
#define _PIR2_USBIF_MASK                                    0x4
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10
#define _PIR2_C2IF_POSN                                     0x5
#define _PIR2_C2IF_POSITION                                 0x5
#define _PIR2_C2IF_SIZE                                     0x1
#define _PIR2_C2IF_LENGTH                                   0x1
#define _PIR2_C2IF_MASK                                     0x20
#define _PIR2_C1IF_POSN                                     0x6
#define _PIR2_C1IF_POSITION                                 0x6
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
#define _PIR2_CMIF_POSN                                     0x6
#define _PIR2_CMIF_POSITION                                 0x6
#define _PIR2_CMIF_SIZE                                     0x1
#define _PIR2_CMIF_LENGTH                                   0x1
#define _PIR2_CMIF_MASK                                     0x40

// Register: IPR2
extern volatile unsigned char           IPR2                @ 0xFA2;
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned TMR3IP                 :1;
        unsigned USBIP                  :1;
        unsigned BCLIP                  :1;
        unsigned EEIP                   :1;
        unsigned C2IP                   :1;
        unsigned C1IP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :6;
        unsigned CMIP                   :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits @ 0xFA2;
// bitfield macros
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_USBIP_POSN                                    0x2
#define _IPR2_USBIP_POSITION                                0x2
#define _IPR2_USBIP_SIZE                                    0x1
#define _IPR2_USBIP_LENGTH                                  0x1
#define _IPR2_USBIP_MASK                                    0x4
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8
#define _IPR2_EEIP_POSN                                     0x4
#define _IPR2_EEIP_POSITION                                 0x4
#define _IPR2_EEIP_SIZE                                     0x1
#define _IPR2_EEIP_LENGTH                                   0x1
#define _IPR2_EEIP_MASK                                     0x10
#define _IPR2_C2IP_POSN                                     0x5
#define _IPR2_C2IP_POSITION                                 0x5
#define _IPR2_C2IP_SIZE                                     0x1
#define _IPR2_C2IP_LENGTH                                   0x1
#define _IPR2_C2IP_MASK                                     0x20
#define _IPR2_C1IP_POSN                                     0x6
#define _IPR2_C1IP_POSITION                                 0x6
#define _IPR2_C1IP_SIZE                                     0x1
#define _IPR2_C1IP_LENGTH                                   0x1
#define _IPR2_C1IP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40

// Register: EECON1
extern volatile unsigned char           EECON1              @ 0xFA6;
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned                        :1;
        unsigned CFGS                   :1;
        unsigned EEPGD                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned EEFS                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits @ 0xFA6;
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
#define _EECON1_EEPGD_POSN                                  0x7
#define _EECON1_EEPGD_POSITION                              0x7
#define _EECON1_EEPGD_SIZE                                  0x1
#define _EECON1_EEPGD_LENGTH                                0x1
#define _EECON1_EEPGD_MASK                                  0x80
#define _EECON1_EEFS_POSN                                   0x6
#define _EECON1_EEFS_POSITION                               0x6
#define _EECON1_EEFS_SIZE                                   0x1
#define _EECON1_EEFS_LENGTH                                 0x1
#define _EECON1_EEFS_MASK                                   0x40

// Register: EECON2
extern volatile unsigned char           EECON2              @ 0xFA7;
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif

// Register: EEDATA
extern volatile unsigned char           EEDATA              @ 0xFA8;
#ifndef _LIB_BUILD
asm("EEDATA equ 0FA8h");
#endif

// Register: EEADR
extern volatile unsigned char           EEADR               @ 0xFA9;
#ifndef _LIB_BUILD
asm("EEADR equ 0FA9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADR0                 :1;
        unsigned EEADR1                 :1;
        unsigned EEADR2                 :1;
        unsigned EEADR3                 :1;
        unsigned EEADR4                 :1;
        unsigned EEADR5                 :1;
        unsigned EEADR6                 :1;
        unsigned EEADR7                 :1;
    };
} EEADRbits_t;
extern volatile EEADRbits_t EEADRbits @ 0xFA9;
// bitfield macros
#define _EEADR_EEADR0_POSN                                  0x0
#define _EEADR_EEADR0_POSITION                              0x0
#define _EEADR_EEADR0_SIZE                                  0x1
#define _EEADR_EEADR0_LENGTH                                0x1
#define _EEADR_EEADR0_MASK                                  0x1
#define _EEADR_EEADR1_POSN                                  0x1
#define _EEADR_EEADR1_POSITION                              0x1
#define _EEADR_EEADR1_SIZE                                  0x1
#define _EEADR_EEADR1_LENGTH                                0x1
#define _EEADR_EEADR1_MASK                                  0x2
#define _EEADR_EEADR2_POSN                                  0x2
#define _EEADR_EEADR2_POSITION                              0x2
#define _EEADR_EEADR2_SIZE                                  0x1
#define _EEADR_EEADR2_LENGTH                                0x1
#define _EEADR_EEADR2_MASK                                  0x4
#define _EEADR_EEADR3_POSN                                  0x3
#define _EEADR_EEADR3_POSITION                              0x3
#define _EEADR_EEADR3_SIZE                                  0x1
#define _EEADR_EEADR3_LENGTH                                0x1
#define _EEADR_EEADR3_MASK                                  0x8
#define _EEADR_EEADR4_POSN                                  0x4
#define _EEADR_EEADR4_POSITION                              0x4
#define _EEADR_EEADR4_SIZE                                  0x1
#define _EEADR_EEADR4_LENGTH                                0x1
#define _EEADR_EEADR4_MASK                                  0x10
#define _EEADR_EEADR5_POSN                                  0x5
#define _EEADR_EEADR5_POSITION                              0x5
#define _EEADR_EEADR5_SIZE                                  0x1
#define _EEADR_EEADR5_LENGTH                                0x1
#define _EEADR_EEADR5_MASK                                  0x20
#define _EEADR_EEADR6_POSN                                  0x6
#define _EEADR_EEADR6_POSITION                              0x6
#define _EEADR_EEADR6_SIZE                                  0x1
#define _EEADR_EEADR6_LENGTH                                0x1
#define _EEADR_EEADR6_MASK                                  0x40
#define _EEADR_EEADR7_POSN                                  0x7
#define _EEADR_EEADR7_POSITION                              0x7
#define _EEADR_EEADR7_SIZE                                  0x1
#define _EEADR_EEADR7_LENGTH                                0x1
#define _EEADR_EEADR7_MASK                                  0x80

// Register: RCSTA
extern volatile unsigned char           RCSTA               @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA1              @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits @ 0xFAB;
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80
#define _RCSTA_ADEN_POSN                                    0x3
#define _RCSTA_ADEN_POSITION                                0x3
#define _RCSTA_ADEN_SIZE                                    0x1
#define _RCSTA_ADEN_LENGTH                                  0x1
#define _RCSTA_ADEN_MASK                                    0x8
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits @ 0xFAB;
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
#define _RCSTA1_ADEN_POSN                                   0x3
#define _RCSTA1_ADEN_POSITION                               0x3
#define _RCSTA1_ADEN_SIZE                                   0x1
#define _RCSTA1_ADEN_LENGTH                                 0x1
#define _RCSTA1_ADEN_MASK                                   0x8
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1

// Register: TXSTA
extern volatile unsigned char           TXSTA               @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits @ 0xFAC;
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80
#define _TXSTA_SENDB1_POSN                                  0x3
#define _TXSTA_SENDB1_POSITION                              0x3
#define _TXSTA_SENDB1_SIZE                                  0x1
#define _TXSTA_SENDB1_LENGTH                                0x1
#define _TXSTA_SENDB1_MASK                                  0x8
#define _TXSTA_SYNC1_POSN                                   0x4
#define _TXSTA_SYNC1_POSITION                               0x4
#define _TXSTA_SYNC1_SIZE                                   0x1
#define _TXSTA_SYNC1_LENGTH                                 0x1
#define _TXSTA_SYNC1_MASK                                   0x10
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits @ 0xFAC;
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
#define _TXSTA1_SENDB1_POSN                                 0x3
#define _TXSTA1_SENDB1_POSITION                             0x3
#define _TXSTA1_SENDB1_SIZE                                 0x1
#define _TXSTA1_SENDB1_LENGTH                               0x1
#define _TXSTA1_SENDB1_MASK                                 0x8
#define _TXSTA1_SYNC1_POSN                                  0x4
#define _TXSTA1_SYNC1_POSITION                              0x4
#define _TXSTA1_SYNC1_SIZE                                  0x1
#define _TXSTA1_SYNC1_LENGTH                                0x1
#define _TXSTA1_SYNC1_MASK                                  0x10
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1

// Register: TXREG
extern volatile unsigned char           TXREG               @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG1              @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif

// Register: RCREG
extern volatile unsigned char           RCREG               @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG1              @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif

// Register: SPBRG
extern volatile unsigned char           SPBRG               @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG1              @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif

// Register: SPBRGH
extern volatile unsigned char           SPBRGH              @ 0xFB0;
#ifndef _LIB_BUILD
asm("SPBRGH equ 0FB0h");
#endif

// Register: T3CON
extern volatile unsigned char           T3CON               @ 0xFB1;
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned                        :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :7;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits @ 0xFB1;
// bitfield macros
#define _T3CON_NOT_T3SYNC_POSN                              0x2
#define _T3CON_NOT_T3SYNC_POSITION                          0x2
#define _T3CON_NOT_T3SYNC_SIZE                              0x1
#define _T3CON_NOT_T3SYNC_LENGTH                            0x1
#define _T3CON_NOT_T3SYNC_MASK                              0x4
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_TMR3CS_POSN                                  0x1
#define _T3CON_TMR3CS_POSITION                              0x1
#define _T3CON_TMR3CS_SIZE                                  0x1
#define _T3CON_TMR3CS_LENGTH                                0x1
#define _T3CON_TMR3CS_MASK                                  0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_T3CCP1_POSN                                  0x3
#define _T3CON_T3CCP1_POSITION                              0x3
#define _T3CON_T3CCP1_SIZE                                  0x1
#define _T3CON_T3CCP1_LENGTH                                0x1
#define _T3CON_T3CCP1_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_RD16_POSN                                    0x7
#define _T3CON_RD16_POSITION                                0x7
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x80
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
#define _T3CON_T3CKPS0_POSN                                 0x4
#define _T3CON_T3CKPS0_POSITION                             0x4
#define _T3CON_T3CKPS0_SIZE                                 0x1
#define _T3CON_T3CKPS0_LENGTH                               0x1
#define _T3CON_T3CKPS0_MASK                                 0x10
#define _T3CON_T3CKPS1_POSN                                 0x5
#define _T3CON_T3CKPS1_POSITION                             0x5
#define _T3CON_T3CKPS1_SIZE                                 0x1
#define _T3CON_T3CKPS1_LENGTH                               0x1
#define _T3CON_T3CKPS1_MASK                                 0x20
#define _T3CON_RD163_POSN                                   0x7
#define _T3CON_RD163_POSITION                               0x7
#define _T3CON_RD163_SIZE                                   0x1
#define _T3CON_RD163_LENGTH                                 0x1
#define _T3CON_RD163_MASK                                   0x80
#define _T3CON_SOSCEN3_POSN                                 0x3
#define _T3CON_SOSCEN3_POSITION                             0x3
#define _T3CON_SOSCEN3_SIZE                                 0x1
#define _T3CON_SOSCEN3_LENGTH                               0x1
#define _T3CON_SOSCEN3_MASK                                 0x8
#define _T3CON_T3RD16_POSN                                  0x7
#define _T3CON_T3RD16_POSITION                              0x7
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x80

// Register: TMR3
extern volatile unsigned short          TMR3                @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif

// Register: TMR3L
extern volatile unsigned char           TMR3L               @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif

// Register: TMR3H
extern volatile unsigned char           TMR3H               @ 0xFB3;
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif

// Register: ECCP1AS
extern volatile unsigned char           ECCP1AS             @ 0xFB6;
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits @ 0xFB6;
// bitfield macros
#define _ECCP1AS_PSSBD_POSN                                 0x0
#define _ECCP1AS_PSSBD_POSITION                             0x0
#define _ECCP1AS_PSSBD_SIZE                                 0x2
#define _ECCP1AS_PSSBD_LENGTH                               0x2
#define _ECCP1AS_PSSBD_MASK                                 0x3
#define _ECCP1AS_PSSAC_POSN                                 0x2
#define _ECCP1AS_PSSAC_POSITION                             0x2
#define _ECCP1AS_PSSAC_SIZE                                 0x2
#define _ECCP1AS_PSSAC_LENGTH                               0x2
#define _ECCP1AS_PSSAC_MASK                                 0xC
#define _ECCP1AS_ECCPAS_POSN                                0x4
#define _ECCP1AS_ECCPAS_POSITION                            0x4
#define _ECCP1AS_ECCPAS_SIZE                                0x3
#define _ECCP1AS_ECCPAS_LENGTH                              0x3
#define _ECCP1AS_ECCPAS_MASK                                0x70
#define _ECCP1AS_ECCPASE_POSN                               0x7
#define _ECCP1AS_ECCPASE_POSITION                           0x7
#define _ECCP1AS_ECCPASE_SIZE                               0x1
#define _ECCP1AS_ECCPASE_LENGTH                             0x1
#define _ECCP1AS_ECCPASE_MASK                               0x80
#define _ECCP1AS_PSSBD0_POSN                                0x0
#define _ECCP1AS_PSSBD0_POSITION                            0x0
#define _ECCP1AS_PSSBD0_SIZE                                0x1
#define _ECCP1AS_PSSBD0_LENGTH                              0x1
#define _ECCP1AS_PSSBD0_MASK                                0x1
#define _ECCP1AS_PSSBD1_POSN                                0x1
#define _ECCP1AS_PSSBD1_POSITION                            0x1
#define _ECCP1AS_PSSBD1_SIZE                                0x1
#define _ECCP1AS_PSSBD1_LENGTH                              0x1
#define _ECCP1AS_PSSBD1_MASK                                0x2
#define _ECCP1AS_PSSAC0_POSN                                0x2
#define _ECCP1AS_PSSAC0_POSITION                            0x2
#define _ECCP1AS_PSSAC0_SIZE                                0x1
#define _ECCP1AS_PSSAC0_LENGTH                              0x1
#define _ECCP1AS_PSSAC0_MASK                                0x4
#define _ECCP1AS_PSSAC1_POSN                                0x3
#define _ECCP1AS_PSSAC1_POSITION                            0x3
#define _ECCP1AS_PSSAC1_SIZE                                0x1
#define _ECCP1AS_PSSAC1_LENGTH                              0x1
#define _ECCP1AS_PSSAC1_MASK                                0x8
#define _ECCP1AS_ECCPAS0_POSN                               0x4
#define _ECCP1AS_ECCPAS0_POSITION                           0x4
#define _ECCP1AS_ECCPAS0_SIZE                               0x1
#define _ECCP1AS_ECCPAS0_LENGTH                             0x1
#define _ECCP1AS_ECCPAS0_MASK                               0x10
#define _ECCP1AS_ECCPAS1_POSN                               0x5
#define _ECCP1AS_ECCPAS1_POSITION                           0x5
#define _ECCP1AS_ECCPAS1_SIZE                               0x1
#define _ECCP1AS_ECCPAS1_LENGTH                             0x1
#define _ECCP1AS_ECCPAS1_MASK                               0x20
#define _ECCP1AS_ECCPAS2_POSN                               0x6
#define _ECCP1AS_ECCPAS2_POSITION                           0x6
#define _ECCP1AS_ECCPAS2_SIZE                               0x1
#define _ECCP1AS_ECCPAS2_LENGTH                             0x1
#define _ECCP1AS_ECCPAS2_MASK                               0x40

// Register: PWM1CON
extern volatile unsigned char           PWM1CON             @ 0xFB7;
#ifndef _LIB_BUILD
asm("PWM1CON equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits @ 0xFB7;
// bitfield macros
#define _PWM1CON_PDC_POSN                                   0x0
#define _PWM1CON_PDC_POSITION                               0x0
#define _PWM1CON_PDC_SIZE                                   0x7
#define _PWM1CON_PDC_LENGTH                                 0x7
#define _PWM1CON_PDC_MASK                                   0x7F
#define _PWM1CON_PRSEN_POSN                                 0x7
#define _PWM1CON_PRSEN_POSITION                             0x7
#define _PWM1CON_PRSEN_SIZE                                 0x1
#define _PWM1CON_PRSEN_LENGTH                               0x1
#define _PWM1CON_PRSEN_MASK                                 0x80
#define _PWM1CON_PDC0_POSN                                  0x0
#define _PWM1CON_PDC0_POSITION                              0x0
#define _PWM1CON_PDC0_SIZE                                  0x1
#define _PWM1CON_PDC0_LENGTH                                0x1
#define _PWM1CON_PDC0_MASK                                  0x1
#define _PWM1CON_PDC1_POSN                                  0x1
#define _PWM1CON_PDC1_POSITION                              0x1
#define _PWM1CON_PDC1_SIZE                                  0x1
#define _PWM1CON_PDC1_LENGTH                                0x1
#define _PWM1CON_PDC1_MASK                                  0x2
#define _PWM1CON_PDC2_POSN                                  0x2
#define _PWM1CON_PDC2_POSITION                              0x2
#define _PWM1CON_PDC2_SIZE                                  0x1
#define _PWM1CON_PDC2_LENGTH                                0x1
#define _PWM1CON_PDC2_MASK                                  0x4
#define _PWM1CON_PDC3_POSN                                  0x3
#define _PWM1CON_PDC3_POSITION                              0x3
#define _PWM1CON_PDC3_SIZE                                  0x1
#define _PWM1CON_PDC3_LENGTH                                0x1
#define _PWM1CON_PDC3_MASK                                  0x8
#define _PWM1CON_PDC4_POSN                                  0x4
#define _PWM1CON_PDC4_POSITION                              0x4
#define _PWM1CON_PDC4_SIZE                                  0x1
#define _PWM1CON_PDC4_LENGTH                                0x1
#define _PWM1CON_PDC4_MASK                                  0x10
#define _PWM1CON_PDC5_POSN                                  0x5
#define _PWM1CON_PDC5_POSITION                              0x5
#define _PWM1CON_PDC5_SIZE                                  0x1
#define _PWM1CON_PDC5_LENGTH                                0x1
#define _PWM1CON_PDC5_MASK                                  0x20
#define _PWM1CON_PDC6_POSN                                  0x6
#define _PWM1CON_PDC6_POSITION                              0x6
#define _PWM1CON_PDC6_SIZE                                  0x1
#define _PWM1CON_PDC6_LENGTH                                0x1
#define _PWM1CON_PDC6_MASK                                  0x40

// Register: BAUDCON
extern volatile unsigned char           BAUDCON             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FB8h");
#endif
// aliases
extern volatile unsigned char           BAUDCTL             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits @ 0xFB8;
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_CKTXP_POSN                                 0x4
#define _BAUDCON_CKTXP_POSITION                             0x4
#define _BAUDCON_CKTXP_SIZE                                 0x1
#define _BAUDCON_CKTXP_LENGTH                               0x1
#define _BAUDCON_CKTXP_MASK                                 0x10
#define _BAUDCON_DTRXP_POSN                                 0x5
#define _BAUDCON_DTRXP_POSITION                             0x5
#define _BAUDCON_DTRXP_SIZE                                 0x1
#define _BAUDCON_DTRXP_LENGTH                               0x1
#define _BAUDCON_DTRXP_MASK                                 0x20
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RXCKP_POSN                                 0x5
#define _BAUDCON_RXCKP_POSITION                             0x5
#define _BAUDCON_RXCKP_SIZE                                 0x1
#define _BAUDCON_RXCKP_LENGTH                               0x1
#define _BAUDCON_RXCKP_MASK                                 0x20
#define _BAUDCON_W4E_POSN                                   0x1
#define _BAUDCON_W4E_POSITION                               0x1
#define _BAUDCON_W4E_SIZE                                   0x1
#define _BAUDCON_W4E_LENGTH                                 0x1
#define _BAUDCON_W4E_MASK                                   0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned CKTXP                  :1;
        unsigned DTRXP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits @ 0xFB8;
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_CKTXP_POSN                                 0x4
#define _BAUDCTL_CKTXP_POSITION                             0x4
#define _BAUDCTL_CKTXP_SIZE                                 0x1
#define _BAUDCTL_CKTXP_LENGTH                               0x1
#define _BAUDCTL_CKTXP_MASK                                 0x10
#define _BAUDCTL_DTRXP_POSN                                 0x5
#define _BAUDCTL_DTRXP_POSITION                             0x5
#define _BAUDCTL_DTRXP_SIZE                                 0x1
#define _BAUDCTL_DTRXP_LENGTH                               0x1
#define _BAUDCTL_DTRXP_MASK                                 0x20
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RXCKP_POSN                                 0x5
#define _BAUDCTL_RXCKP_POSITION                             0x5
#define _BAUDCTL_RXCKP_SIZE                                 0x1
#define _BAUDCTL_RXCKP_LENGTH                               0x1
#define _BAUDCTL_RXCKP_MASK                                 0x20
#define _BAUDCTL_W4E_POSN                                   0x1
#define _BAUDCTL_W4E_POSITION                               0x1
#define _BAUDCTL_W4E_SIZE                                   0x1
#define _BAUDCTL_W4E_LENGTH                                 0x1
#define _BAUDCTL_W4E_MASK                                   0x2

// Register: PSTRCON
extern volatile unsigned char           PSTRCON             @ 0xFB9;
#ifndef _LIB_BUILD
asm("PSTRCON equ 0FB9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STRA                   :1;
        unsigned STRB                   :1;
        unsigned STRC                   :1;
        unsigned STRD                   :1;
        unsigned STRSYNC                :1;
    };
} PSTRCONbits_t;
extern volatile PSTRCONbits_t PSTRCONbits @ 0xFB9;
// bitfield macros
#define _PSTRCON_STRA_POSN                                  0x0
#define _PSTRCON_STRA_POSITION                              0x0
#define _PSTRCON_STRA_SIZE                                  0x1
#define _PSTRCON_STRA_LENGTH                                0x1
#define _PSTRCON_STRA_MASK                                  0x1
#define _PSTRCON_STRB_POSN                                  0x1
#define _PSTRCON_STRB_POSITION                              0x1
#define _PSTRCON_STRB_SIZE                                  0x1
#define _PSTRCON_STRB_LENGTH                                0x1
#define _PSTRCON_STRB_MASK                                  0x2
#define _PSTRCON_STRC_POSN                                  0x2
#define _PSTRCON_STRC_POSITION                              0x2
#define _PSTRCON_STRC_SIZE                                  0x1
#define _PSTRCON_STRC_LENGTH                                0x1
#define _PSTRCON_STRC_MASK                                  0x4
#define _PSTRCON_STRD_POSN                                  0x3
#define _PSTRCON_STRD_POSITION                              0x3
#define _PSTRCON_STRD_SIZE                                  0x1
#define _PSTRCON_STRD_LENGTH                                0x1
#define _PSTRCON_STRD_MASK                                  0x8
#define _PSTRCON_STRSYNC_POSN                               0x4
#define _PSTRCON_STRSYNC_POSITION                           0x4
#define _PSTRCON_STRSYNC_SIZE                               0x1
#define _PSTRCON_STRSYNC_LENGTH                             0x1
#define _PSTRCON_STRSYNC_MASK                               0x10

// Register: REFCON0
extern volatile unsigned char           REFCON0             @ 0xFBA;
#ifndef _LIB_BUILD
asm("REFCON0 equ 0FBAh");
#endif
// aliases
extern volatile unsigned char           VREFCON0            @ 0xFBA;
#ifndef _LIB_BUILD
asm("VREFCON0 equ 0FBAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned                        :1;
        unsigned FVR1S0                 :1;
        unsigned FVR1S1                 :1;
        unsigned FVR1ST                 :1;
        unsigned FVR1EN                 :1;
    };
} REFCON0bits_t;
extern volatile REFCON0bits_t REFCON0bits @ 0xFBA;
// bitfield macros
#define _REFCON0_FVR1S0_POSN                                0x4
#define _REFCON0_FVR1S0_POSITION                            0x4
#define _REFCON0_FVR1S0_SIZE                                0x1
#define _REFCON0_FVR1S0_LENGTH                              0x1
#define _REFCON0_FVR1S0_MASK                                0x10
#define _REFCON0_FVR1S1_POSN                                0x5
#define _REFCON0_FVR1S1_POSITION                            0x5
#define _REFCON0_FVR1S1_SIZE                                0x1
#define _REFCON0_FVR1S1_LENGTH                              0x1
#define _REFCON0_FVR1S1_MASK                                0x20
#define _REFCON0_FVR1ST_POSN                                0x6
#define _REFCON0_FVR1ST_POSITION                            0x6
#define _REFCON0_FVR1ST_SIZE                                0x1
#define _REFCON0_FVR1ST_LENGTH                              0x1
#define _REFCON0_FVR1ST_MASK                                0x40
#define _REFCON0_FVR1EN_POSN                                0x7
#define _REFCON0_FVR1EN_POSITION                            0x7
#define _REFCON0_FVR1EN_SIZE                                0x1
#define _REFCON0_FVR1EN_LENGTH                              0x1
#define _REFCON0_FVR1EN_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned                        :1;
        unsigned FVR1S0                 :1;
        unsigned FVR1S1                 :1;
        unsigned FVR1ST                 :1;
        unsigned FVR1EN                 :1;
    };
} VREFCON0bits_t;
extern volatile VREFCON0bits_t VREFCON0bits @ 0xFBA;
// bitfield macros
#define _VREFCON0_FVR1S0_POSN                               0x4
#define _VREFCON0_FVR1S0_POSITION                           0x4
#define _VREFCON0_FVR1S0_SIZE                               0x1
#define _VREFCON0_FVR1S0_LENGTH                             0x1
#define _VREFCON0_FVR1S0_MASK                               0x10
#define _VREFCON0_FVR1S1_POSN                               0x5
#define _VREFCON0_FVR1S1_POSITION                           0x5
#define _VREFCON0_FVR1S1_SIZE                               0x1
#define _VREFCON0_FVR1S1_LENGTH                             0x1
#define _VREFCON0_FVR1S1_MASK                               0x20
#define _VREFCON0_FVR1ST_POSN                               0x6
#define _VREFCON0_FVR1ST_POSITION                           0x6
#define _VREFCON0_FVR1ST_SIZE                               0x1
#define _VREFCON0_FVR1ST_LENGTH                             0x1
#define _VREFCON0_FVR1ST_MASK                               0x40
#define _VREFCON0_FVR1EN_POSN                               0x7
#define _VREFCON0_FVR1EN_POSITION                           0x7
#define _VREFCON0_FVR1EN_SIZE                               0x1
#define _VREFCON0_FVR1EN_LENGTH                             0x1
#define _VREFCON0_FVR1EN_MASK                               0x80

// Register: REFCON1
extern volatile unsigned char           REFCON1             @ 0xFBB;
#ifndef _LIB_BUILD
asm("REFCON1 equ 0FBBh");
#endif
// aliases
extern volatile unsigned char           VREFCON1            @ 0xFBB;
#ifndef _LIB_BUILD
asm("VREFCON1 equ 0FBBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned D1NSS                  :1;
        unsigned                        :1;
        unsigned D1PSS                  :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned D1LPS                  :1;
        unsigned D1EN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
    struct {
        unsigned D1NSS0                 :1;
    };
} REFCON1bits_t;
extern volatile REFCON1bits_t REFCON1bits @ 0xFBB;
// bitfield macros
#define _REFCON1_D1NSS_POSN                                 0x0
#define _REFCON1_D1NSS_POSITION                             0x0
#define _REFCON1_D1NSS_SIZE                                 0x1
#define _REFCON1_D1NSS_LENGTH                               0x1
#define _REFCON1_D1NSS_MASK                                 0x1
#define _REFCON1_D1PSS_POSN                                 0x2
#define _REFCON1_D1PSS_POSITION                             0x2
#define _REFCON1_D1PSS_SIZE                                 0x2
#define _REFCON1_D1PSS_LENGTH                               0x2
#define _REFCON1_D1PSS_MASK                                 0xC
#define _REFCON1_DAC1OE_POSN                                0x5
#define _REFCON1_DAC1OE_POSITION                            0x5
#define _REFCON1_DAC1OE_SIZE                                0x1
#define _REFCON1_DAC1OE_LENGTH                              0x1
#define _REFCON1_DAC1OE_MASK                                0x20
#define _REFCON1_D1LPS_POSN                                 0x6
#define _REFCON1_D1LPS_POSITION                             0x6
#define _REFCON1_D1LPS_SIZE                                 0x1
#define _REFCON1_D1LPS_LENGTH                               0x1
#define _REFCON1_D1LPS_MASK                                 0x40
#define _REFCON1_D1EN_POSN                                  0x7
#define _REFCON1_D1EN_POSITION                              0x7
#define _REFCON1_D1EN_SIZE                                  0x1
#define _REFCON1_D1EN_LENGTH                                0x1
#define _REFCON1_D1EN_MASK                                  0x80
#define _REFCON1_D1PSS0_POSN                                0x2
#define _REFCON1_D1PSS0_POSITION                            0x2
#define _REFCON1_D1PSS0_SIZE                                0x1
#define _REFCON1_D1PSS0_LENGTH                              0x1
#define _REFCON1_D1PSS0_MASK                                0x4
#define _REFCON1_D1PSS1_POSN                                0x3
#define _REFCON1_D1PSS1_POSITION                            0x3
#define _REFCON1_D1PSS1_SIZE                                0x1
#define _REFCON1_D1PSS1_LENGTH                              0x1
#define _REFCON1_D1PSS1_MASK                                0x8
#define _REFCON1_D1NSS0_POSN                                0x0
#define _REFCON1_D1NSS0_POSITION                            0x0
#define _REFCON1_D1NSS0_SIZE                                0x1
#define _REFCON1_D1NSS0_LENGTH                              0x1
#define _REFCON1_D1NSS0_MASK                                0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned D1NSS                  :1;
        unsigned                        :1;
        unsigned D1PSS                  :2;
        unsigned                        :1;
        unsigned DAC1OE                 :1;
        unsigned D1LPS                  :1;
        unsigned D1EN                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned D1PSS0                 :1;
        unsigned D1PSS1                 :1;
    };
    struct {
        unsigned D1NSS0                 :1;
    };
} VREFCON1bits_t;
extern volatile VREFCON1bits_t VREFCON1bits @ 0xFBB;
// bitfield macros
#define _VREFCON1_D1NSS_POSN                                0x0
#define _VREFCON1_D1NSS_POSITION                            0x0
#define _VREFCON1_D1NSS_SIZE                                0x1
#define _VREFCON1_D1NSS_LENGTH                              0x1
#define _VREFCON1_D1NSS_MASK                                0x1
#define _VREFCON1_D1PSS_POSN                                0x2
#define _VREFCON1_D1PSS_POSITION                            0x2
#define _VREFCON1_D1PSS_SIZE                                0x2
#define _VREFCON1_D1PSS_LENGTH                              0x2
#define _VREFCON1_D1PSS_MASK                                0xC
#define _VREFCON1_DAC1OE_POSN                               0x5
#define _VREFCON1_DAC1OE_POSITION                           0x5
#define _VREFCON1_DAC1OE_SIZE                               0x1
#define _VREFCON1_DAC1OE_LENGTH                             0x1
#define _VREFCON1_DAC1OE_MASK                               0x20
#define _VREFCON1_D1LPS_POSN                                0x6
#define _VREFCON1_D1LPS_POSITION                            0x6
#define _VREFCON1_D1LPS_SIZE                                0x1
#define _VREFCON1_D1LPS_LENGTH                              0x1
#define _VREFCON1_D1LPS_MASK                                0x40
#define _VREFCON1_D1EN_POSN                                 0x7
#define _VREFCON1_D1EN_POSITION                             0x7
#define _VREFCON1_D1EN_SIZE                                 0x1
#define _VREFCON1_D1EN_LENGTH                               0x1
#define _VREFCON1_D1EN_MASK                                 0x80
#define _VREFCON1_D1PSS0_POSN                               0x2
#define _VREFCON1_D1PSS0_POSITION                           0x2
#define _VREFCON1_D1PSS0_SIZE                               0x1
#define _VREFCON1_D1PSS0_LENGTH                             0x1
#define _VREFCON1_D1PSS0_MASK                               0x4
#define _VREFCON1_D1PSS1_POSN                               0x3
#define _VREFCON1_D1PSS1_POSITION                           0x3
#define _VREFCON1_D1PSS1_SIZE                               0x1
#define _VREFCON1_D1PSS1_LENGTH                             0x1
#define _VREFCON1_D1PSS1_MASK                               0x8
#define _VREFCON1_D1NSS0_POSN                               0x0
#define _VREFCON1_D1NSS0_POSITION                           0x0
#define _VREFCON1_D1NSS0_SIZE                               0x1
#define _VREFCON1_D1NSS0_LENGTH                             0x1
#define _VREFCON1_D1NSS0_MASK                               0x1

// Register: REFCON2
extern volatile unsigned char           REFCON2             @ 0xFBC;
#ifndef _LIB_BUILD
asm("REFCON2 equ 0FBCh");
#endif
// aliases
extern volatile unsigned char           VREFCON2            @ 0xFBC;
#ifndef _LIB_BUILD
asm("VREFCON2 equ 0FBCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
    };
} REFCON2bits_t;
extern volatile REFCON2bits_t REFCON2bits @ 0xFBC;
// bitfield macros
#define _REFCON2_DAC1R0_POSN                                0x0
#define _REFCON2_DAC1R0_POSITION                            0x0
#define _REFCON2_DAC1R0_SIZE                                0x1
#define _REFCON2_DAC1R0_LENGTH                              0x1
#define _REFCON2_DAC1R0_MASK                                0x1
#define _REFCON2_DAC1R1_POSN                                0x1
#define _REFCON2_DAC1R1_POSITION                            0x1
#define _REFCON2_DAC1R1_SIZE                                0x1
#define _REFCON2_DAC1R1_LENGTH                              0x1
#define _REFCON2_DAC1R1_MASK                                0x2
#define _REFCON2_DAC1R2_POSN                                0x2
#define _REFCON2_DAC1R2_POSITION                            0x2
#define _REFCON2_DAC1R2_SIZE                                0x1
#define _REFCON2_DAC1R2_LENGTH                              0x1
#define _REFCON2_DAC1R2_MASK                                0x4
#define _REFCON2_DAC1R3_POSN                                0x3
#define _REFCON2_DAC1R3_POSITION                            0x3
#define _REFCON2_DAC1R3_SIZE                                0x1
#define _REFCON2_DAC1R3_LENGTH                              0x1
#define _REFCON2_DAC1R3_MASK                                0x8
#define _REFCON2_DAC1R4_POSN                                0x4
#define _REFCON2_DAC1R4_POSITION                            0x4
#define _REFCON2_DAC1R4_SIZE                                0x1
#define _REFCON2_DAC1R4_LENGTH                              0x1
#define _REFCON2_DAC1R4_MASK                                0x10
// alias bitfield definitions
typedef union {
    struct {
        unsigned DAC1R0                 :1;
        unsigned DAC1R1                 :1;
        unsigned DAC1R2                 :1;
        unsigned DAC1R3                 :1;
        unsigned DAC1R4                 :1;
    };
} VREFCON2bits_t;
extern volatile VREFCON2bits_t VREFCON2bits @ 0xFBC;
// bitfield macros
#define _VREFCON2_DAC1R0_POSN                               0x0
#define _VREFCON2_DAC1R0_POSITION                           0x0
#define _VREFCON2_DAC1R0_SIZE                               0x1
#define _VREFCON2_DAC1R0_LENGTH                             0x1
#define _VREFCON2_DAC1R0_MASK                               0x1
#define _VREFCON2_DAC1R1_POSN                               0x1
#define _VREFCON2_DAC1R1_POSITION                           0x1
#define _VREFCON2_DAC1R1_SIZE                               0x1
#define _VREFCON2_DAC1R1_LENGTH                             0x1
#define _VREFCON2_DAC1R1_MASK                               0x2
#define _VREFCON2_DAC1R2_POSN                               0x2
#define _VREFCON2_DAC1R2_POSITION                           0x2
#define _VREFCON2_DAC1R2_SIZE                               0x1
#define _VREFCON2_DAC1R2_LENGTH                             0x1
#define _VREFCON2_DAC1R2_MASK                               0x4
#define _VREFCON2_DAC1R3_POSN                               0x3
#define _VREFCON2_DAC1R3_POSITION                           0x3
#define _VREFCON2_DAC1R3_SIZE                               0x1
#define _VREFCON2_DAC1R3_LENGTH                             0x1
#define _VREFCON2_DAC1R3_MASK                               0x8
#define _VREFCON2_DAC1R4_POSN                               0x4
#define _VREFCON2_DAC1R4_POSITION                           0x4
#define _VREFCON2_DAC1R4_SIZE                               0x1
#define _VREFCON2_DAC1R4_LENGTH                             0x1
#define _VREFCON2_DAC1R4_MASK                               0x10

// Register: CCP1CON
extern volatile unsigned char           CCP1CON             @ 0xFBD;
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits @ 0xFBD;
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20
#define _CCP1CON_P1M0_POSN                                  0x6
#define _CCP1CON_P1M0_POSITION                              0x6
#define _CCP1CON_P1M0_SIZE                                  0x1
#define _CCP1CON_P1M0_LENGTH                                0x1
#define _CCP1CON_P1M0_MASK                                  0x40
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80

// Register: CCPR1
extern volatile unsigned short          CCPR1               @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBEh");
#endif

// Register: CCPR1L
extern volatile unsigned char           CCPR1L              @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBEh");
#endif

// Register: CCPR1H
extern volatile unsigned char           CCPR1H              @ 0xFBF;
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif

// Register: ADCON2
extern volatile unsigned char           ADCON2              @ 0xFC0;
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits @ 0xFC0;
// bitfield macros
#define _ADCON2_ADCS_POSN                                   0x0
#define _ADCON2_ADCS_POSITION                               0x0
#define _ADCON2_ADCS_SIZE                                   0x3
#define _ADCON2_ADCS_LENGTH                                 0x3
#define _ADCON2_ADCS_MASK                                   0x7
#define _ADCON2_ACQT_POSN                                   0x3
#define _ADCON2_ACQT_POSITION                               0x3
#define _ADCON2_ACQT_SIZE                                   0x3
#define _ADCON2_ACQT_LENGTH                                 0x3
#define _ADCON2_ACQT_MASK                                   0x38
#define _ADCON2_ADFM_POSN                                   0x7
#define _ADCON2_ADFM_POSITION                               0x7
#define _ADCON2_ADFM_SIZE                                   0x1
#define _ADCON2_ADFM_LENGTH                                 0x1
#define _ADCON2_ADFM_MASK                                   0x80
#define _ADCON2_ADCS0_POSN                                  0x0
#define _ADCON2_ADCS0_POSITION                              0x0
#define _ADCON2_ADCS0_SIZE                                  0x1
#define _ADCON2_ADCS0_LENGTH                                0x1
#define _ADCON2_ADCS0_MASK                                  0x1
#define _ADCON2_ADCS1_POSN                                  0x1
#define _ADCON2_ADCS1_POSITION                              0x1
#define _ADCON2_ADCS1_SIZE                                  0x1
#define _ADCON2_ADCS1_LENGTH                                0x1
#define _ADCON2_ADCS1_MASK                                  0x2
#define _ADCON2_ADCS2_POSN                                  0x2
#define _ADCON2_ADCS2_POSITION                              0x2
#define _ADCON2_ADCS2_SIZE                                  0x1
#define _ADCON2_ADCS2_LENGTH                                0x1
#define _ADCON2_ADCS2_MASK                                  0x4
#define _ADCON2_ACQT0_POSN                                  0x3
#define _ADCON2_ACQT0_POSITION                              0x3
#define _ADCON2_ACQT0_SIZE                                  0x1
#define _ADCON2_ACQT0_LENGTH                                0x1
#define _ADCON2_ACQT0_MASK                                  0x8
#define _ADCON2_ACQT1_POSN                                  0x4
#define _ADCON2_ACQT1_POSITION                              0x4
#define _ADCON2_ACQT1_SIZE                                  0x1
#define _ADCON2_ACQT1_LENGTH                                0x1
#define _ADCON2_ACQT1_MASK                                  0x10
#define _ADCON2_ACQT2_POSN                                  0x5
#define _ADCON2_ACQT2_POSITION                              0x5
#define _ADCON2_ACQT2_SIZE                                  0x1
#define _ADCON2_ACQT2_LENGTH                                0x1
#define _ADCON2_ACQT2_MASK                                  0x20

// Register: ADCON1
extern volatile unsigned char           ADCON1              @ 0xFC1;
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NVCFG0                 :1;
        unsigned NVCFG1                 :1;
        unsigned PVCFG0                 :1;
        unsigned PVCFG1                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits @ 0xFC1;
// bitfield macros
#define _ADCON1_NVCFG0_POSN                                 0x0
#define _ADCON1_NVCFG0_POSITION                             0x0
#define _ADCON1_NVCFG0_SIZE                                 0x1
#define _ADCON1_NVCFG0_LENGTH                               0x1
#define _ADCON1_NVCFG0_MASK                                 0x1
#define _ADCON1_NVCFG1_POSN                                 0x1
#define _ADCON1_NVCFG1_POSITION                             0x1
#define _ADCON1_NVCFG1_SIZE                                 0x1
#define _ADCON1_NVCFG1_LENGTH                               0x1
#define _ADCON1_NVCFG1_MASK                                 0x2
#define _ADCON1_PVCFG0_POSN                                 0x2
#define _ADCON1_PVCFG0_POSITION                             0x2
#define _ADCON1_PVCFG0_SIZE                                 0x1
#define _ADCON1_PVCFG0_LENGTH                               0x1
#define _ADCON1_PVCFG0_MASK                                 0x4
#define _ADCON1_PVCFG1_POSN                                 0x3
#define _ADCON1_PVCFG1_POSITION                             0x3
#define _ADCON1_PVCFG1_SIZE                                 0x1
#define _ADCON1_PVCFG1_LENGTH                               0x1
#define _ADCON1_PVCFG1_MASK                                 0x8
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8

// Register: ADCON0
extern volatile unsigned char           ADCON0              @ 0xFC2;
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
    };
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits @ 0xFC2;
// bitfield macros
#define _ADCON0_GO_NOT_DONE_POSN                            0x1
#define _ADCON0_GO_NOT_DONE_POSITION                        0x1
#define _ADCON0_GO_NOT_DONE_SIZE                            0x1
#define _ADCON0_GO_NOT_DONE_LENGTH                          0x1
#define _ADCON0_GO_NOT_DONE_MASK                            0x2
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
#define _ADCON0_GODONE_POSN                                 0x1
#define _ADCON0_GODONE_POSITION                             0x1
#define _ADCON0_GODONE_SIZE                                 0x1
#define _ADCON0_GODONE_LENGTH                               0x1
#define _ADCON0_GODONE_MASK                                 0x2

// Register: ADRES
extern volatile unsigned short          ADRES               @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif

// Register: ADRESL
extern volatile unsigned char           ADRESL              @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif

// Register: ADRESH
extern volatile unsigned char           ADRESH              @ 0xFC4;
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif

// Register: SSPCON2
extern volatile unsigned char           SSPCON2             @ 0xFC5;
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits @ 0xFC5;
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80

// Register: SSPCON1
extern volatile unsigned char           SSPCON1             @ 0xFC6;
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits @ 0xFC6;
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8

// Register: SSPSTAT
extern volatile unsigned char           SSPSTAT             @ 0xFC7;
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned W                      :1;
        unsigned                        :2;
        unsigned A                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :5;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
    };
    struct {
        unsigned                        :3;
        unsigned START                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned STOP                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits @ 0xFC7;
// bitfield macros
#define _SSPSTAT_R_NOT_W_POSN                               0x2
#define _SSPSTAT_R_NOT_W_POSITION                           0x2
#define _SSPSTAT_R_NOT_W_SIZE                               0x1
#define _SSPSTAT_R_NOT_W_LENGTH                             0x1
#define _SSPSTAT_R_NOT_W_MASK                               0x4
#define _SSPSTAT_D_NOT_A_POSN                               0x5
#define _SSPSTAT_D_NOT_A_POSITION                           0x5
#define _SSPSTAT_D_NOT_A_SIZE                               0x1
#define _SSPSTAT_D_NOT_A_LENGTH                             0x1
#define _SSPSTAT_D_NOT_A_MASK                               0x20
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80
#define _SSPSTAT_R_POSN                                     0x2
#define _SSPSTAT_R_POSITION                                 0x2
#define _SSPSTAT_R_SIZE                                     0x1
#define _SSPSTAT_R_LENGTH                                   0x1
#define _SSPSTAT_R_MASK                                     0x4
#define _SSPSTAT_D_POSN                                     0x5
#define _SSPSTAT_D_POSITION                                 0x5
#define _SSPSTAT_D_SIZE                                     0x1
#define _SSPSTAT_D_LENGTH                                   0x1
#define _SSPSTAT_D_MASK                                     0x20
#define _SSPSTAT_W_POSN                                     0x2
#define _SSPSTAT_W_POSITION                                 0x2
#define _SSPSTAT_W_SIZE                                     0x1
#define _SSPSTAT_W_LENGTH                                   0x1
#define _SSPSTAT_W_MASK                                     0x4
#define _SSPSTAT_A_POSN                                     0x5
#define _SSPSTAT_A_POSITION                                 0x5
#define _SSPSTAT_A_SIZE                                     0x1
#define _SSPSTAT_A_LENGTH                                   0x1
#define _SSPSTAT_A_MASK                                     0x20
#define _SSPSTAT_nW_POSN                                    0x2
#define _SSPSTAT_nW_POSITION                                0x2
#define _SSPSTAT_nW_SIZE                                    0x1
#define _SSPSTAT_nW_LENGTH                                  0x1
#define _SSPSTAT_nW_MASK                                    0x4
#define _SSPSTAT_nA_POSN                                    0x5
#define _SSPSTAT_nA_POSITION                                0x5
#define _SSPSTAT_nA_SIZE                                    0x1
#define _SSPSTAT_nA_LENGTH                                  0x1
#define _SSPSTAT_nA_MASK                                    0x20
#define _SSPSTAT_R_W_POSN                                   0x2
#define _SSPSTAT_R_W_POSITION                               0x2
#define _SSPSTAT_R_W_SIZE                                   0x1
#define _SSPSTAT_R_W_LENGTH                                 0x1
#define _SSPSTAT_R_W_MASK                                   0x4
#define _SSPSTAT_D_A_POSN                                   0x5
#define _SSPSTAT_D_A_POSITION                               0x5
#define _SSPSTAT_D_A_SIZE                                   0x1
#define _SSPSTAT_D_A_LENGTH                                 0x1
#define _SSPSTAT_D_A_MASK                                   0x20
#define _SSPSTAT_NOT_WRITE_POSN                             0x2
#define _SSPSTAT_NOT_WRITE_POSITION                         0x2
#define _SSPSTAT_NOT_WRITE_SIZE                             0x1
#define _SSPSTAT_NOT_WRITE_LENGTH                           0x1
#define _SSPSTAT_NOT_WRITE_MASK                             0x4
#define _SSPSTAT_NOT_ADDRESS_POSN                           0x5
#define _SSPSTAT_NOT_ADDRESS_POSITION                       0x5
#define _SSPSTAT_NOT_ADDRESS_SIZE                           0x1
#define _SSPSTAT_NOT_ADDRESS_LENGTH                         0x1
#define _SSPSTAT_NOT_ADDRESS_MASK                           0x20
#define _SSPSTAT_nWRITE_POSN                                0x2
#define _SSPSTAT_nWRITE_POSITION                            0x2
#define _SSPSTAT_nWRITE_SIZE                                0x1
#define _SSPSTAT_nWRITE_LENGTH                              0x1
#define _SSPSTAT_nWRITE_MASK                                0x4
#define _SSPSTAT_nADDRESS_POSN                              0x5
#define _SSPSTAT_nADDRESS_POSITION                          0x5
#define _SSPSTAT_nADDRESS_SIZE                              0x1
#define _SSPSTAT_nADDRESS_LENGTH                            0x1
#define _SSPSTAT_nADDRESS_MASK                              0x20
#define _SSPSTAT_DA_POSN                                    0x5
#define _SSPSTAT_DA_POSITION                                0x5
#define _SSPSTAT_DA_SIZE                                    0x1
#define _SSPSTAT_DA_LENGTH                                  0x1
#define _SSPSTAT_DA_MASK                                    0x20
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_START_POSN                                 0x3
#define _SSPSTAT_START_POSITION                             0x3
#define _SSPSTAT_START_SIZE                                 0x1
#define _SSPSTAT_START_LENGTH                               0x1
#define _SSPSTAT_START_MASK                                 0x8
#define _SSPSTAT_STOP_POSN                                  0x4
#define _SSPSTAT_STOP_POSITION                              0x4
#define _SSPSTAT_STOP_SIZE                                  0x1
#define _SSPSTAT_STOP_LENGTH                                0x1
#define _SSPSTAT_STOP_MASK                                  0x10
#define _SSPSTAT_NOT_W_POSN                                 0x2
#define _SSPSTAT_NOT_W_POSITION                             0x2
#define _SSPSTAT_NOT_W_SIZE                                 0x1
#define _SSPSTAT_NOT_W_LENGTH                               0x1
#define _SSPSTAT_NOT_W_MASK                                 0x4
#define _SSPSTAT_NOT_A_POSN                                 0x5
#define _SSPSTAT_NOT_A_POSITION                             0x5
#define _SSPSTAT_NOT_A_SIZE                                 0x1
#define _SSPSTAT_NOT_A_LENGTH                               0x1
#define _SSPSTAT_NOT_A_MASK                                 0x20

// Register: SSPADD
extern volatile unsigned char           SSPADD              @ 0xFC8;
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif

// Register: SSPBUF
extern volatile unsigned char           SSPBUF              @ 0xFC9;
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif

// Register: T2CON
extern volatile unsigned char           T2CON               @ 0xFCA;
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS                :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits @ 0xFCA;
// bitfield macros
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
#define _T2CON_T2OUTPS_POSN                                 0x3
#define _T2CON_T2OUTPS_POSITION                             0x3
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0x78
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40

// Register: PR2
extern volatile unsigned char           PR2                 @ 0xFCB;
#ifndef _LIB_BUILD
asm("PR2 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           MEMCON              @ 0xFCB;
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits @ 0xFCB;
// bitfield macros
#define _PR2_EBDIS_POSN                                     0x7
#define _PR2_EBDIS_POSITION                                 0x7
#define _PR2_EBDIS_SIZE                                     0x1
#define _PR2_EBDIS_LENGTH                                   0x1
#define _PR2_EBDIS_MASK                                     0x80
#define _PR2_WAIT0_POSN                                     0x4
#define _PR2_WAIT0_POSITION                                 0x4
#define _PR2_WAIT0_SIZE                                     0x1
#define _PR2_WAIT0_LENGTH                                   0x1
#define _PR2_WAIT0_MASK                                     0x10
#define _PR2_WAIT1_POSN                                     0x5
#define _PR2_WAIT1_POSITION                                 0x5
#define _PR2_WAIT1_SIZE                                     0x1
#define _PR2_WAIT1_LENGTH                                   0x1
#define _PR2_WAIT1_MASK                                     0x20
#define _PR2_WM0_POSN                                       0x0
#define _PR2_WM0_POSITION                                   0x0
#define _PR2_WM0_SIZE                                       0x1
#define _PR2_WM0_LENGTH                                     0x1
#define _PR2_WM0_MASK                                       0x1
#define _PR2_WM1_POSN                                       0x1
#define _PR2_WM1_POSITION                                   0x1
#define _PR2_WM1_SIZE                                       0x1
#define _PR2_WM1_LENGTH                                     0x1
#define _PR2_WM1_MASK                                       0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} MEMCONbits_t;
extern volatile MEMCONbits_t MEMCONbits @ 0xFCB;
// bitfield macros
#define _MEMCON_EBDIS_POSN                                  0x7
#define _MEMCON_EBDIS_POSITION                              0x7
#define _MEMCON_EBDIS_SIZE                                  0x1
#define _MEMCON_EBDIS_LENGTH                                0x1
#define _MEMCON_EBDIS_MASK                                  0x80
#define _MEMCON_WAIT0_POSN                                  0x4
#define _MEMCON_WAIT0_POSITION                              0x4
#define _MEMCON_WAIT0_SIZE                                  0x1
#define _MEMCON_WAIT0_LENGTH                                0x1
#define _MEMCON_WAIT0_MASK                                  0x10
#define _MEMCON_WAIT1_POSN                                  0x5
#define _MEMCON_WAIT1_POSITION                              0x5
#define _MEMCON_WAIT1_SIZE                                  0x1
#define _MEMCON_WAIT1_LENGTH                                0x1
#define _MEMCON_WAIT1_MASK                                  0x20
#define _MEMCON_WM0_POSN                                    0x0
#define _MEMCON_WM0_POSITION                                0x0
#define _MEMCON_WM0_SIZE                                    0x1
#define _MEMCON_WM0_LENGTH                                  0x1
#define _MEMCON_WM0_MASK                                    0x1
#define _MEMCON_WM1_POSN                                    0x1
#define _MEMCON_WM1_POSITION                                0x1
#define _MEMCON_WM1_SIZE                                    0x1
#define _MEMCON_WM1_LENGTH                                  0x1
#define _MEMCON_WM1_MASK                                    0x2

// Register: TMR2
extern volatile unsigned char           TMR2                @ 0xFCC;
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif

// Register: T1CON
extern volatile unsigned char           T1CON               @ 0xFCD;
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits @ 0xFCD;
// bitfield macros
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_TMR1CS_POSN                                  0x1
#define _T1CON_TMR1CS_POSITION                              0x1
#define _T1CON_TMR1CS_SIZE                                  0x1
#define _T1CON_TMR1CS_LENGTH                                0x1
#define _T1CON_TMR1CS_MASK                                  0x2
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_T1RUN_POSN                                   0x6
#define _T1CON_T1RUN_POSITION                               0x6
#define _T1CON_T1RUN_SIZE                                   0x1
#define _T1CON_T1RUN_LENGTH                                 0x1
#define _T1CON_T1RUN_MASK                                   0x40
#define _T1CON_RD16_POSN                                    0x7
#define _T1CON_RD16_POSITION                                0x7
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x80
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
#define _T1CON_T1RD16_POSN                                  0x7
#define _T1CON_T1RD16_POSITION                              0x7
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x80

// Register: TMR1
extern volatile unsigned short          TMR1                @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif

// Register: TMR1L
extern volatile unsigned char           TMR1L               @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif

// Register: TMR1H
extern volatile unsigned char           TMR1H               @ 0xFCF;
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif

// Register: RCON
extern volatile unsigned char           RCON                @ 0xFD0;
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned                        :1;
        unsigned SBOREN                 :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
    };
} RCONbits_t;
extern volatile RCONbits_t RCONbits @ 0xFD0;
// bitfield macros
#define _RCON_NOT_BOR_POSN                                  0x0
#define _RCON_NOT_BOR_POSITION                              0x0
#define _RCON_NOT_BOR_SIZE                                  0x1
#define _RCON_NOT_BOR_LENGTH                                0x1
#define _RCON_NOT_BOR_MASK                                  0x1
#define _RCON_NOT_POR_POSN                                  0x1
#define _RCON_NOT_POR_POSITION                              0x1
#define _RCON_NOT_POR_SIZE                                  0x1
#define _RCON_NOT_POR_LENGTH                                0x1
#define _RCON_NOT_POR_MASK                                  0x2
#define _RCON_NOT_PD_POSN                                   0x2
#define _RCON_NOT_PD_POSITION                               0x2
#define _RCON_NOT_PD_SIZE                                   0x1
#define _RCON_NOT_PD_LENGTH                                 0x1
#define _RCON_NOT_PD_MASK                                   0x4
#define _RCON_NOT_TO_POSN                                   0x3
#define _RCON_NOT_TO_POSITION                               0x3
#define _RCON_NOT_TO_SIZE                                   0x1
#define _RCON_NOT_TO_LENGTH                                 0x1
#define _RCON_NOT_TO_MASK                                   0x8
#define _RCON_NOT_RI_POSN                                   0x4
#define _RCON_NOT_RI_POSITION                               0x4
#define _RCON_NOT_RI_SIZE                                   0x1
#define _RCON_NOT_RI_LENGTH                                 0x1
#define _RCON_NOT_RI_MASK                                   0x10
#define _RCON_nBOR_POSN                                     0x0
#define _RCON_nBOR_POSITION                                 0x0
#define _RCON_nBOR_SIZE                                     0x1
#define _RCON_nBOR_LENGTH                                   0x1
#define _RCON_nBOR_MASK                                     0x1
#define _RCON_nPOR_POSN                                     0x1
#define _RCON_nPOR_POSITION                                 0x1
#define _RCON_nPOR_SIZE                                     0x1
#define _RCON_nPOR_LENGTH                                   0x1
#define _RCON_nPOR_MASK                                     0x2
#define _RCON_nPD_POSN                                      0x2
#define _RCON_nPD_POSITION                                  0x2
#define _RCON_nPD_SIZE                                      0x1
#define _RCON_nPD_LENGTH                                    0x1
#define _RCON_nPD_MASK                                      0x4
#define _RCON_nTO_POSN                                      0x3
#define _RCON_nTO_POSITION                                  0x3
#define _RCON_nTO_SIZE                                      0x1
#define _RCON_nTO_LENGTH                                    0x1
#define _RCON_nTO_MASK                                      0x8
#define _RCON_nRI_POSN                                      0x4
#define _RCON_nRI_POSITION                                  0x4
#define _RCON_nRI_SIZE                                      0x1
#define _RCON_nRI_LENGTH                                    0x1
#define _RCON_nRI_MASK                                      0x10
#define _RCON_SBOREN_POSN                                   0x6
#define _RCON_SBOREN_POSITION                               0x6
#define _RCON_SBOREN_SIZE                                   0x1
#define _RCON_SBOREN_LENGTH                                 0x1
#define _RCON_SBOREN_MASK                                   0x40
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
#define _RCON_BOR_POSN                                      0x0
#define _RCON_BOR_POSITION                                  0x0
#define _RCON_BOR_SIZE                                      0x1
#define _RCON_BOR_LENGTH                                    0x1
#define _RCON_BOR_MASK                                      0x1
#define _RCON_POR_POSN                                      0x1
#define _RCON_POR_POSITION                                  0x1
#define _RCON_POR_SIZE                                      0x1
#define _RCON_POR_LENGTH                                    0x1
#define _RCON_POR_MASK                                      0x2
#define _RCON_PD_POSN                                       0x2
#define _RCON_PD_POSITION                                   0x2
#define _RCON_PD_SIZE                                       0x1
#define _RCON_PD_LENGTH                                     0x1
#define _RCON_PD_MASK                                       0x4
#define _RCON_TO_POSN                                       0x3
#define _RCON_TO_POSITION                                   0x3
#define _RCON_TO_SIZE                                       0x1
#define _RCON_TO_LENGTH                                     0x1
#define _RCON_TO_MASK                                       0x8
#define _RCON_RI_POSN                                       0x4
#define _RCON_RI_POSITION                                   0x4
#define _RCON_RI_SIZE                                       0x1
#define _RCON_RI_LENGTH                                     0x1
#define _RCON_RI_MASK                                       0x10

// Register: WDTCON
extern volatile unsigned char           WDTCON              @ 0xFD1;
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits @ 0xFD1;
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: OSCCON2
extern volatile unsigned char           OSCCON2             @ 0xFD2;
#ifndef _LIB_BUILD
asm("OSCCON2 equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LFIOFS                 :1;
        unsigned HFIOFL                 :1;
        unsigned PRI_SD                 :1;
    };
} OSCCON2bits_t;
extern volatile OSCCON2bits_t OSCCON2bits @ 0xFD2;
// bitfield macros
#define _OSCCON2_LFIOFS_POSN                                0x0
#define _OSCCON2_LFIOFS_POSITION                            0x0
#define _OSCCON2_LFIOFS_SIZE                                0x1
#define _OSCCON2_LFIOFS_LENGTH                              0x1
#define _OSCCON2_LFIOFS_MASK                                0x1
#define _OSCCON2_HFIOFL_POSN                                0x1
#define _OSCCON2_HFIOFL_POSITION                            0x1
#define _OSCCON2_HFIOFL_SIZE                                0x1
#define _OSCCON2_HFIOFL_LENGTH                              0x1
#define _OSCCON2_HFIOFL_MASK                                0x2
#define _OSCCON2_PRI_SD_POSN                                0x2
#define _OSCCON2_PRI_SD_POSITION                            0x2
#define _OSCCON2_PRI_SD_SIZE                                0x1
#define _OSCCON2_PRI_SD_LENGTH                              0x1
#define _OSCCON2_PRI_SD_MASK                                0x4

// Register: OSCCON
extern volatile unsigned char           OSCCON              @ 0xFD3;
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
    struct {
        unsigned SCS                    :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits @ 0xFD3;
// bitfield macros
#define _OSCCON_SCS0_POSN                                   0x0
#define _OSCCON_SCS0_POSITION                               0x0
#define _OSCCON_SCS0_SIZE                                   0x1
#define _OSCCON_SCS0_LENGTH                                 0x1
#define _OSCCON_SCS0_MASK                                   0x1
#define _OSCCON_SCS1_POSN                                   0x1
#define _OSCCON_SCS1_POSITION                               0x1
#define _OSCCON_SCS1_SIZE                                   0x1
#define _OSCCON_SCS1_LENGTH                                 0x1
#define _OSCCON_SCS1_MASK                                   0x2
#define _OSCCON_IOFS_POSN                                   0x2
#define _OSCCON_IOFS_POSITION                               0x2
#define _OSCCON_IOFS_SIZE                                   0x1
#define _OSCCON_IOFS_LENGTH                                 0x1
#define _OSCCON_IOFS_MASK                                   0x4
#define _OSCCON_OSTS_POSN                                   0x3
#define _OSCCON_OSTS_POSITION                               0x3
#define _OSCCON_OSTS_SIZE                                   0x1
#define _OSCCON_OSTS_LENGTH                                 0x1
#define _OSCCON_OSTS_MASK                                   0x8
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x3
#define _OSCCON_IRCF_LENGTH                                 0x3
#define _OSCCON_IRCF_MASK                                   0x70
#define _OSCCON_IDLEN_POSN                                  0x7
#define _OSCCON_IDLEN_POSITION                              0x7
#define _OSCCON_IDLEN_SIZE                                  0x1
#define _OSCCON_IDLEN_LENGTH                                0x1
#define _OSCCON_IDLEN_MASK                                  0x80
#define _OSCCON_IRCF0_POSN                                  0x4
#define _OSCCON_IRCF0_POSITION                              0x4
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x10
#define _OSCCON_IRCF1_POSN                                  0x5
#define _OSCCON_IRCF1_POSITION                              0x5
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x20
#define _OSCCON_IRCF2_POSN                                  0x6
#define _OSCCON_IRCF2_POSITION                              0x6
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x40
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x1
#define _OSCCON_SCS_LENGTH                                  0x1
#define _OSCCON_SCS_MASK                                    0x1

// Register: T0CON
extern volatile unsigned char           T0CON               @ 0xFD5;
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
    };
} T0CONbits_t;
extern volatile T0CONbits_t T0CONbits @ 0xFD5;
// bitfield macros
#define _T0CON_T0PS_POSN                                    0x0
#define _T0CON_T0PS_POSITION                                0x0
#define _T0CON_T0PS_SIZE                                    0x3
#define _T0CON_T0PS_LENGTH                                  0x3
#define _T0CON_T0PS_MASK                                    0x7
#define _T0CON_PSA_POSN                                     0x3
#define _T0CON_PSA_POSITION                                 0x3
#define _T0CON_PSA_SIZE                                     0x1
#define _T0CON_PSA_LENGTH                                   0x1
#define _T0CON_PSA_MASK                                     0x8
#define _T0CON_T0SE_POSN                                    0x4
#define _T0CON_T0SE_POSITION                                0x4
#define _T0CON_T0SE_SIZE                                    0x1
#define _T0CON_T0SE_LENGTH                                  0x1
#define _T0CON_T0SE_MASK                                    0x10
#define _T0CON_T0CS_POSN                                    0x5
#define _T0CON_T0CS_POSITION                                0x5
#define _T0CON_T0CS_SIZE                                    0x1
#define _T0CON_T0CS_LENGTH                                  0x1
#define _T0CON_T0CS_MASK                                    0x20
#define _T0CON_T08BIT_POSN                                  0x6
#define _T0CON_T08BIT_POSITION                              0x6
#define _T0CON_T08BIT_SIZE                                  0x1
#define _T0CON_T08BIT_LENGTH                                0x1
#define _T0CON_T08BIT_MASK                                  0x40
#define _T0CON_TMR0ON_POSN                                  0x7
#define _T0CON_TMR0ON_POSITION                              0x7
#define _T0CON_TMR0ON_SIZE                                  0x1
#define _T0CON_TMR0ON_LENGTH                                0x1
#define _T0CON_TMR0ON_MASK                                  0x80
#define _T0CON_T0PS0_POSN                                   0x0
#define _T0CON_T0PS0_POSITION                               0x0
#define _T0CON_T0PS0_SIZE                                   0x1
#define _T0CON_T0PS0_LENGTH                                 0x1
#define _T0CON_T0PS0_MASK                                   0x1
#define _T0CON_T0PS1_POSN                                   0x1
#define _T0CON_T0PS1_POSITION                               0x1
#define _T0CON_T0PS1_SIZE                                   0x1
#define _T0CON_T0PS1_LENGTH                                 0x1
#define _T0CON_T0PS1_MASK                                   0x2
#define _T0CON_T0PS2_POSN                                   0x2
#define _T0CON_T0PS2_POSITION                               0x2
#define _T0CON_T0PS2_SIZE                                   0x1
#define _T0CON_T0PS2_LENGTH                                 0x1
#define _T0CON_T0PS2_MASK                                   0x4

// Register: TMR0
extern volatile unsigned short          TMR0                @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif

// Register: TMR0L
extern volatile unsigned char           TMR0L               @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif

// Register: TMR0H
extern volatile unsigned char           TMR0H               @ 0xFD7;
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif

// Register: STATUS
extern volatile unsigned char           STATUS              @ 0xFD8;
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned NEGATIVE               :1;
    };
    struct {
        unsigned                        :3;
        unsigned OVERFLOW               :1;
    };
    struct {
        unsigned                        :2;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits @ 0xFD8;
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_OV_POSN                                     0x3
#define _STATUS_OV_POSITION                                 0x3
#define _STATUS_OV_SIZE                                     0x1
#define _STATUS_OV_LENGTH                                   0x1
#define _STATUS_OV_MASK                                     0x8
#define _STATUS_N_POSN                                      0x4
#define _STATUS_N_POSITION                                  0x4
#define _STATUS_N_SIZE                                      0x1
#define _STATUS_N_LENGTH                                    0x1
#define _STATUS_N_MASK                                      0x10
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_NEGATIVE_POSN                               0x4
#define _STATUS_NEGATIVE_POSITION                           0x4
#define _STATUS_NEGATIVE_SIZE                               0x1
#define _STATUS_NEGATIVE_LENGTH                             0x1
#define _STATUS_NEGATIVE_MASK                               0x10
#define _STATUS_OVERFLOW_POSN                               0x3
#define _STATUS_OVERFLOW_POSITION                           0x3
#define _STATUS_OVERFLOW_SIZE                               0x1
#define _STATUS_OVERFLOW_LENGTH                             0x1
#define _STATUS_OVERFLOW_MASK                               0x8
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR2
extern volatile unsigned short          FSR2                @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif

// Register: FSR2L
extern volatile unsigned char           FSR2L               @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif

// Register: FSR2H
extern volatile unsigned char           FSR2H               @ 0xFDA;
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif

// Register: PLUSW2
extern volatile unsigned char           PLUSW2              @ 0xFDB;
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif

// Register: PREINC2
extern volatile unsigned char           PREINC2             @ 0xFDC;
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif

// Register: POSTDEC2
extern volatile unsigned char           POSTDEC2            @ 0xFDD;
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif

// Register: POSTINC2
extern volatile unsigned char           POSTINC2            @ 0xFDE;
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif

// Register: INDF2
extern volatile unsigned char           INDF2               @ 0xFDF;
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif

// Register: BSR
extern volatile unsigned char           BSR                 @ 0xFE0;
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif

// Register: FSR1
extern volatile unsigned short          FSR1                @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif

// Register: FSR1L
extern volatile unsigned char           FSR1L               @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif

// Register: FSR1H
extern volatile unsigned char           FSR1H               @ 0xFE2;
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif

// Register: PLUSW1
extern volatile unsigned char           PLUSW1              @ 0xFE3;
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif

// Register: PREINC1
extern volatile unsigned char           PREINC1             @ 0xFE4;
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif

// Register: POSTDEC1
extern volatile unsigned char           POSTDEC1            @ 0xFE5;
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif

// Register: POSTINC1
extern volatile unsigned char           POSTINC1            @ 0xFE6;
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif

// Register: INDF1
extern volatile unsigned char           INDF1               @ 0xFE7;
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif

// Register: WREG
extern volatile unsigned char           WREG                @ 0xFE8;
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif
// aliases
// extern volatile unsigned char           W                   @ 0xFE8;
#ifndef _LIB_BUILD
// asm("W equ 0FE8h");
#endif

// Register: FSR0
extern volatile unsigned short          FSR0                @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif

// Register: FSR0L
extern volatile unsigned char           FSR0L               @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif

// Register: FSR0H
extern volatile unsigned char           FSR0H               @ 0xFEA;
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif

// Register: PLUSW0
extern volatile unsigned char           PLUSW0              @ 0xFEB;
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif

// Register: PREINC0
extern volatile unsigned char           PREINC0             @ 0xFEC;
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif

// Register: POSTDEC0
extern volatile unsigned char           POSTDEC0            @ 0xFED;
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif

// Register: POSTINC0
extern volatile unsigned char           POSTINC0            @ 0xFEE;
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif

// Register: INDF0
extern volatile unsigned char           INDF0               @ 0xFEF;
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif

// Register: INTCON3
extern volatile unsigned char           INTCON3             @ 0xFF0;
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned                        :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned                        :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned                        :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned                        :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits_t;
extern volatile INTCON3bits_t INTCON3bits @ 0xFF0;
// bitfield macros
#define _INTCON3_INT1IF_POSN                                0x0
#define _INTCON3_INT1IF_POSITION                            0x0
#define _INTCON3_INT1IF_SIZE                                0x1
#define _INTCON3_INT1IF_LENGTH                              0x1
#define _INTCON3_INT1IF_MASK                                0x1
#define _INTCON3_INT2IF_POSN                                0x1
#define _INTCON3_INT2IF_POSITION                            0x1
#define _INTCON3_INT2IF_SIZE                                0x1
#define _INTCON3_INT2IF_LENGTH                              0x1
#define _INTCON3_INT2IF_MASK                                0x2
#define _INTCON3_INT1IE_POSN                                0x3
#define _INTCON3_INT1IE_POSITION                            0x3
#define _INTCON3_INT1IE_SIZE                                0x1
#define _INTCON3_INT1IE_LENGTH                              0x1
#define _INTCON3_INT1IE_MASK                                0x8
#define _INTCON3_INT2IE_POSN                                0x4
#define _INTCON3_INT2IE_POSITION                            0x4
#define _INTCON3_INT2IE_SIZE                                0x1
#define _INTCON3_INT2IE_LENGTH                              0x1
#define _INTCON3_INT2IE_MASK                                0x10
#define _INTCON3_INT1IP_POSN                                0x6
#define _INTCON3_INT1IP_POSITION                            0x6
#define _INTCON3_INT1IP_SIZE                                0x1
#define _INTCON3_INT1IP_LENGTH                              0x1
#define _INTCON3_INT1IP_MASK                                0x40
#define _INTCON3_INT2IP_POSN                                0x7
#define _INTCON3_INT2IP_POSITION                            0x7
#define _INTCON3_INT2IP_SIZE                                0x1
#define _INTCON3_INT2IP_LENGTH                              0x1
#define _INTCON3_INT2IP_MASK                                0x80
#define _INTCON3_INT1F_POSN                                 0x0
#define _INTCON3_INT1F_POSITION                             0x0
#define _INTCON3_INT1F_SIZE                                 0x1
#define _INTCON3_INT1F_LENGTH                               0x1
#define _INTCON3_INT1F_MASK                                 0x1
#define _INTCON3_INT2F_POSN                                 0x1
#define _INTCON3_INT2F_POSITION                             0x1
#define _INTCON3_INT2F_SIZE                                 0x1
#define _INTCON3_INT2F_LENGTH                               0x1
#define _INTCON3_INT2F_MASK                                 0x2
#define _INTCON3_INT1E_POSN                                 0x3
#define _INTCON3_INT1E_POSITION                             0x3
#define _INTCON3_INT1E_SIZE                                 0x1
#define _INTCON3_INT1E_LENGTH                               0x1
#define _INTCON3_INT1E_MASK                                 0x8
#define _INTCON3_INT2E_POSN                                 0x4
#define _INTCON3_INT2E_POSITION                             0x4
#define _INTCON3_INT2E_SIZE                                 0x1
#define _INTCON3_INT2E_LENGTH                               0x1
#define _INTCON3_INT2E_MASK                                 0x10
#define _INTCON3_INT1P_POSN                                 0x6
#define _INTCON3_INT1P_POSITION                             0x6
#define _INTCON3_INT1P_SIZE                                 0x1
#define _INTCON3_INT1P_LENGTH                               0x1
#define _INTCON3_INT1P_MASK                                 0x40
#define _INTCON3_INT2P_POSN                                 0x7
#define _INTCON3_INT2P_POSITION                             0x7
#define _INTCON3_INT2P_SIZE                                 0x1
#define _INTCON3_INT2P_LENGTH                               0x1
#define _INTCON3_INT2P_MASK                                 0x80

// Register: INTCON2
extern volatile unsigned char           INTCON2             @ 0xFF1;
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned NOT_RABPU              :1;
    };
    struct {
        unsigned RABIP                  :1;
        unsigned                        :1;
        unsigned TMR0IP                 :1;
        unsigned                        :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRABPU                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned RABPU                  :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits @ 0xFF1;
// bitfield macros
#define _INTCON2_NOT_RABPU_POSN                             0x7
#define _INTCON2_NOT_RABPU_POSITION                         0x7
#define _INTCON2_NOT_RABPU_SIZE                             0x1
#define _INTCON2_NOT_RABPU_LENGTH                           0x1
#define _INTCON2_NOT_RABPU_MASK                             0x80
#define _INTCON2_RABIP_POSN                                 0x0
#define _INTCON2_RABIP_POSITION                             0x0
#define _INTCON2_RABIP_SIZE                                 0x1
#define _INTCON2_RABIP_LENGTH                               0x1
#define _INTCON2_RABIP_MASK                                 0x1
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG2_POSN                               0x4
#define _INTCON2_INTEDG2_POSITION                           0x4
#define _INTCON2_INTEDG2_SIZE                               0x1
#define _INTCON2_INTEDG2_LENGTH                             0x1
#define _INTCON2_INTEDG2_MASK                               0x10
#define _INTCON2_INTEDG1_POSN                               0x5
#define _INTCON2_INTEDG1_POSITION                           0x5
#define _INTCON2_INTEDG1_SIZE                               0x1
#define _INTCON2_INTEDG1_LENGTH                             0x1
#define _INTCON2_INTEDG1_MASK                               0x20
#define _INTCON2_INTEDG0_POSN                               0x6
#define _INTCON2_INTEDG0_POSITION                           0x6
#define _INTCON2_INTEDG0_SIZE                               0x1
#define _INTCON2_INTEDG0_LENGTH                             0x1
#define _INTCON2_INTEDG0_MASK                               0x40
#define _INTCON2_nRABPU_POSN                                0x7
#define _INTCON2_nRABPU_POSITION                            0x7
#define _INTCON2_nRABPU_SIZE                                0x1
#define _INTCON2_nRABPU_LENGTH                              0x1
#define _INTCON2_nRABPU_MASK                                0x80
#define _INTCON2_RABPU_POSN                                 0x7
#define _INTCON2_RABPU_POSITION                             0x7
#define _INTCON2_RABPU_SIZE                                 0x1
#define _INTCON2_RABPU_LENGTH                               0x1
#define _INTCON2_RABPU_MASK                                 0x80

// Register: INTCON
extern volatile unsigned char           INTCON              @ 0xFF2;
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RABIF                  :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RABIE                  :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits @ 0xFF2;
// bitfield macros
#define _INTCON_RABIF_POSN                                  0x0
#define _INTCON_RABIF_POSITION                              0x0
#define _INTCON_RABIF_SIZE                                  0x1
#define _INTCON_RABIF_LENGTH                                0x1
#define _INTCON_RABIF_MASK                                  0x1
#define _INTCON_INT0IF_POSN                                 0x1
#define _INTCON_INT0IF_POSITION                             0x1
#define _INTCON_INT0IF_SIZE                                 0x1
#define _INTCON_INT0IF_LENGTH                               0x1
#define _INTCON_INT0IF_MASK                                 0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_RABIE_POSN                                  0x3
#define _INTCON_RABIE_POSITION                              0x3
#define _INTCON_RABIE_SIZE                                  0x1
#define _INTCON_RABIE_LENGTH                                0x1
#define _INTCON_RABIE_MASK                                  0x8
#define _INTCON_INT0IE_POSN                                 0x4
#define _INTCON_INT0IE_POSITION                             0x4
#define _INTCON_INT0IE_SIZE                                 0x1
#define _INTCON_INT0IE_LENGTH                               0x1
#define _INTCON_INT0IE_MASK                                 0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_GIEL_POSN                              0x6
#define _INTCON_PEIE_GIEL_POSITION                          0x6
#define _INTCON_PEIE_GIEL_SIZE                              0x1
#define _INTCON_PEIE_GIEL_LENGTH                            0x1
#define _INTCON_PEIE_GIEL_MASK                              0x40
#define _INTCON_GIE_GIEH_POSN                               0x7
#define _INTCON_GIE_GIEH_POSITION                           0x7
#define _INTCON_GIE_GIEH_SIZE                               0x1
#define _INTCON_GIE_GIEH_LENGTH                             0x1
#define _INTCON_GIE_GIEH_MASK                               0x80
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80
#define _INTCON_GIEL_POSN                                   0x6
#define _INTCON_GIEL_POSITION                               0x6
#define _INTCON_GIEL_SIZE                                   0x1
#define _INTCON_GIEL_LENGTH                                 0x1
#define _INTCON_GIEL_MASK                                   0x40
#define _INTCON_GIEH_POSN                                   0x7
#define _INTCON_GIEH_POSITION                               0x7
#define _INTCON_GIEH_SIZE                                   0x1
#define _INTCON_GIEH_LENGTH                                 0x1
#define _INTCON_GIEH_MASK                                   0x80
#define _INTCON_INT0F_POSN                                  0x1
#define _INTCON_INT0F_POSITION                              0x1
#define _INTCON_INT0F_SIZE                                  0x1
#define _INTCON_INT0F_LENGTH                                0x1
#define _INTCON_INT0F_MASK                                  0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_INT0E_POSN                                  0x4
#define _INTCON_INT0E_POSITION                              0x4
#define _INTCON_INT0E_SIZE                                  0x1
#define _INTCON_INT0E_LENGTH                                0x1
#define _INTCON_INT0E_MASK                                  0x10
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20

// Register: PROD
extern volatile unsigned short          PROD                @ 0xFF3;
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif

// Register: PRODL
extern volatile unsigned char           PRODL               @ 0xFF3;
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif

// Register: PRODH
extern volatile unsigned char           PRODH               @ 0xFF4;
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif

// Register: TABLAT
extern volatile unsigned char           TABLAT              @ 0xFF5;
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif

// Register: TBLPTR
#ifndef __CCI__
extern volatile unsigned short long     TBLPTR              @ 0xFF6;
#endif
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif

// Register: TBLPTRL
extern volatile unsigned char           TBLPTRL             @ 0xFF6;
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif

// Register: TBLPTRH
extern volatile unsigned char           TBLPTRH             @ 0xFF7;
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif

// Register: TBLPTRU
extern volatile unsigned char           TBLPTRU             @ 0xFF8;
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif

// Register: PCLAT
#ifndef __CCI__
extern volatile unsigned short long     PCLAT               @ 0xFF9;
#endif
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
#ifndef __CCI__
extern volatile unsigned short long     PC                  @ 0xFF9;
#endif
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif

// Register: PCL
extern volatile unsigned char           PCL                 @ 0xFF9;
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif

// Register: PCLATH
extern volatile unsigned char           PCLATH              @ 0xFFA;
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif

// Register: PCLATU
extern volatile unsigned char           PCLATU              @ 0xFFB;
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif

// Register: STKPTR
extern volatile unsigned char           STKPTR              @ 0xFFC;
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned SP0                    :1;
        unsigned SP1                    :1;
        unsigned SP2                    :1;
        unsigned SP3                    :1;
        unsigned SP4                    :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits @ 0xFFC;
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F
#define _STKPTR_STKUNF_POSN                                 0x6
#define _STKPTR_STKUNF_POSITION                             0x6
#define _STKPTR_STKUNF_SIZE                                 0x1
#define _STKPTR_STKUNF_LENGTH                               0x1
#define _STKPTR_STKUNF_MASK                                 0x40
#define _STKPTR_STKFUL_POSN                                 0x7
#define _STKPTR_STKFUL_POSITION                             0x7
#define _STKPTR_STKFUL_SIZE                                 0x1
#define _STKPTR_STKFUL_LENGTH                               0x1
#define _STKPTR_STKFUL_MASK                                 0x80
#define _STKPTR_SP0_POSN                                    0x0
#define _STKPTR_SP0_POSITION                                0x0
#define _STKPTR_SP0_SIZE                                    0x1
#define _STKPTR_SP0_LENGTH                                  0x1
#define _STKPTR_SP0_MASK                                    0x1
#define _STKPTR_SP1_POSN                                    0x1
#define _STKPTR_SP1_POSITION                                0x1
#define _STKPTR_SP1_SIZE                                    0x1
#define _STKPTR_SP1_LENGTH                                  0x1
#define _STKPTR_SP1_MASK                                    0x2
#define _STKPTR_SP2_POSN                                    0x2
#define _STKPTR_SP2_POSITION                                0x2
#define _STKPTR_SP2_SIZE                                    0x1
#define _STKPTR_SP2_LENGTH                                  0x1
#define _STKPTR_SP2_MASK                                    0x4
#define _STKPTR_SP3_POSN                                    0x3
#define _STKPTR_SP3_POSITION                                0x3
#define _STKPTR_SP3_SIZE                                    0x1
#define _STKPTR_SP3_LENGTH                                  0x1
#define _STKPTR_SP3_MASK                                    0x8
#define _STKPTR_SP4_POSN                                    0x4
#define _STKPTR_SP4_POSITION                                0x4
#define _STKPTR_SP4_SIZE                                    0x1
#define _STKPTR_SP4_LENGTH                                  0x1
#define _STKPTR_SP4_MASK                                    0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80

// Register: TOS
#ifndef __CCI__
extern volatile unsigned short long     TOS                 @ 0xFFD;
#endif
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
extern volatile unsigned char           TOSL                @ 0xFFD;
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif

// Register: TOSH
extern volatile unsigned char           TOSH                @ 0xFFE;
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif

// Register: TOSU
extern volatile unsigned char           TOSU                @ 0xFFF;
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&0FFh)
#endif
extern volatile __bit                   ABDEN               @ (((unsigned) &BAUDCON)*8) + 0;
#define                                 ABDEN_bit           BANKMASK(BAUDCON), 0
extern volatile __bit                   ABDOVF              @ (((unsigned) &BAUDCON)*8) + 7;
#define                                 ABDOVF_bit          BANKMASK(BAUDCON), 7
extern volatile __bit                   ACKDT               @ (((unsigned) &SSPCON2)*8) + 5;
#define                                 ACKDT_bit           BANKMASK(SSPCON2), 5
extern volatile __bit                   ACKEN               @ (((unsigned) &SSPCON2)*8) + 4;
#define                                 ACKEN_bit           BANKMASK(SSPCON2), 4
extern volatile __bit                   ACKSTAT             @ (((unsigned) &SSPCON2)*8) + 6;
#define                                 ACKSTAT_bit         BANKMASK(SSPCON2), 6
extern volatile __bit                   ACQT0               @ (((unsigned) &ADCON2)*8) + 3;
#define                                 ACQT0_bit           BANKMASK(ADCON2), 3
extern volatile __bit                   ACQT1               @ (((unsigned) &ADCON2)*8) + 4;
#define                                 ACQT1_bit           BANKMASK(ADCON2), 4
extern volatile __bit                   ACQT2               @ (((unsigned) &ADCON2)*8) + 5;
#define                                 ACQT2_bit           BANKMASK(ADCON2), 5
extern volatile __bit                   ACTVIE              @ (((unsigned) &UIE)*8) + 2;
#define                                 ACTVIE_bit          BANKMASK(UIE), 2
extern volatile __bit                   ACTVIF              @ (((unsigned) &UIR)*8) + 2;
#define                                 ACTVIF_bit          BANKMASK(UIR), 2
extern volatile __bit                   ADCS0               @ (((unsigned) &ADCON2)*8) + 0;
#define                                 ADCS0_bit           BANKMASK(ADCON2), 0
extern volatile __bit                   ADCS1               @ (((unsigned) &ADCON2)*8) + 1;
#define                                 ADCS1_bit           BANKMASK(ADCON2), 1
extern volatile __bit                   ADCS2               @ (((unsigned) &ADCON2)*8) + 2;
#define                                 ADCS2_bit           BANKMASK(ADCON2), 2
extern volatile __bit                   ADDEN               @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADDEN_bit           BANKMASK(RCSTA), 3
extern volatile __bit                   ADDR0               @ (((unsigned) &UADDR)*8) + 0;
#define                                 ADDR0_bit           BANKMASK(UADDR), 0
extern volatile __bit                   ADDR1               @ (((unsigned) &UADDR)*8) + 1;
#define                                 ADDR1_bit           BANKMASK(UADDR), 1
extern volatile __bit                   ADDR2               @ (((unsigned) &UADDR)*8) + 2;
#define                                 ADDR2_bit           BANKMASK(UADDR), 2
extern volatile __bit                   ADDR3               @ (((unsigned) &UADDR)*8) + 3;
#define                                 ADDR3_bit           BANKMASK(UADDR), 3
extern volatile __bit                   ADDR4               @ (((unsigned) &UADDR)*8) + 4;
#define                                 ADDR4_bit           BANKMASK(UADDR), 4
extern volatile __bit                   ADDR5               @ (((unsigned) &UADDR)*8) + 5;
#define                                 ADDR5_bit           BANKMASK(UADDR), 5
extern volatile __bit                   ADDR6               @ (((unsigned) &UADDR)*8) + 6;
#define                                 ADDR6_bit           BANKMASK(UADDR), 6
extern volatile __bit                   ADEN                @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADEN_bit            BANKMASK(RCSTA), 3
extern volatile __bit                   ADFM                @ (((unsigned) &ADCON2)*8) + 7;
#define                                 ADFM_bit            BANKMASK(ADCON2), 7
extern volatile __bit                   ADIE                @ (((unsigned) &PIE1)*8) + 6;
#define                                 ADIE_bit            BANKMASK(PIE1), 6
extern volatile __bit                   ADIF                @ (((unsigned) &PIR1)*8) + 6;
#define                                 ADIF_bit            BANKMASK(PIR1), 6
extern volatile __bit                   ADIP                @ (((unsigned) &IPR1)*8) + 6;
#define                                 ADIP_bit            BANKMASK(IPR1), 6
extern volatile __bit                   ADON                @ (((unsigned) &ADCON0)*8) + 0;
#define                                 ADON_bit            BANKMASK(ADCON0), 0
extern volatile __bit                   AN10                @ (((unsigned) &PORTB)*8) + 4;
#define                                 AN10_bit            BANKMASK(PORTB), 4
extern volatile __bit                   AN11                @ (((unsigned) &PORTB)*8) + 5;
#define                                 AN11_bit            BANKMASK(PORTB), 5
extern volatile __bit                   AN3                 @ (((unsigned) &PORTA)*8) + 4;
#define                                 AN3_bit             BANKMASK(PORTA), 4
extern volatile __bit                   AN4                 @ (((unsigned) &PORTC)*8) + 0;
#define                                 AN4_bit             BANKMASK(PORTC), 0
extern volatile __bit                   AN5                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 AN5_bit             BANKMASK(PORTC), 1
extern volatile __bit                   AN6                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 AN6_bit             BANKMASK(PORTC), 2
extern volatile __bit                   AN7                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 AN7_bit             BANKMASK(PORTC), 3
extern volatile __bit                   AN8                 @ (((unsigned) &PORTC)*8) + 6;
#define                                 AN8_bit             BANKMASK(PORTC), 6
extern volatile __bit                   AN9                 @ (((unsigned) &PORTC)*8) + 7;
#define                                 AN9_bit             BANKMASK(PORTC), 7
extern volatile __bit                   ANS10               @ (((unsigned) &ANSELH)*8) + 2;
#define                                 ANS10_bit           BANKMASK(ANSELH), 2
extern volatile __bit                   ANS11               @ (((unsigned) &ANSELH)*8) + 3;
#define                                 ANS11_bit           BANKMASK(ANSELH), 3
extern volatile __bit                   ANS3                @ (((unsigned) &ANSEL)*8) + 3;
#define                                 ANS3_bit            BANKMASK(ANSEL), 3
extern volatile __bit                   ANS4                @ (((unsigned) &ANSEL)*8) + 4;
#define                                 ANS4_bit            BANKMASK(ANSEL), 4
extern volatile __bit                   ANS5                @ (((unsigned) &ANSEL)*8) + 5;
#define                                 ANS5_bit            BANKMASK(ANSEL), 5
extern volatile __bit                   ANS6                @ (((unsigned) &ANSEL)*8) + 6;
#define                                 ANS6_bit            BANKMASK(ANSEL), 6
extern volatile __bit                   ANS7                @ (((unsigned) &ANSEL)*8) + 7;
#define                                 ANS7_bit            BANKMASK(ANSEL), 7
extern volatile __bit                   ANS8                @ (((unsigned) &ANSELH)*8) + 0;
#define                                 ANS8_bit            BANKMASK(ANSELH), 0
extern volatile __bit                   ANS9                @ (((unsigned) &ANSELH)*8) + 1;
#define                                 ANS9_bit            BANKMASK(ANSELH), 1
extern volatile __bit                   BCLIE               @ (((unsigned) &PIE2)*8) + 3;
#define                                 BCLIE_bit           BANKMASK(PIE2), 3
extern volatile __bit                   BCLIF               @ (((unsigned) &PIR2)*8) + 3;
#define                                 BCLIF_bit           BANKMASK(PIR2), 3
extern volatile __bit                   BCLIP               @ (((unsigned) &IPR2)*8) + 3;
#define                                 BCLIP_bit           BANKMASK(IPR2), 3
extern volatile __bit                   BF                  @ (((unsigned) &SSPSTAT)*8) + 0;
#define                                 BF_bit              BANKMASK(SSPSTAT), 0
extern volatile __bit                   BOR                 @ (((unsigned) &RCON)*8) + 0;
#define                                 BOR_bit             BANKMASK(RCON), 0
extern volatile __bit                   BRG16               @ (((unsigned) &BAUDCON)*8) + 3;
#define                                 BRG16_bit           BANKMASK(BAUDCON), 3
extern volatile __bit                   BRGH                @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH_bit            BANKMASK(TXSTA), 2
extern volatile __bit                   BRGH1               @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH1_bit           BANKMASK(TXSTA), 2
extern volatile __bit                   BTOEE               @ (((unsigned) &UEIE)*8) + 4;
#define                                 BTOEE_bit           BANKMASK(UEIE), 4
extern volatile __bit                   BTOEF               @ (((unsigned) &UEIR)*8) + 4;
#define                                 BTOEF_bit           BANKMASK(UEIR), 4
extern volatile __bit                   BTSEE               @ (((unsigned) &UEIE)*8) + 7;
#define                                 BTSEE_bit           BANKMASK(UEIE), 7
extern volatile __bit                   BTSEF               @ (((unsigned) &UEIR)*8) + 7;
#define                                 BTSEF_bit           BANKMASK(UEIR), 7
extern volatile __bit                   C12IN1M             @ (((unsigned) &PORTC)*8) + 1;
#define                                 C12IN1M_bit         BANKMASK(PORTC), 1
extern volatile __bit                   C12IN2M             @ (((unsigned) &PORTC)*8) + 2;
#define                                 C12IN2M_bit         BANKMASK(PORTC), 2
extern volatile __bit                   C12IN3M             @ (((unsigned) &PORTC)*8) + 3;
#define                                 C12IN3M_bit         BANKMASK(PORTC), 3
extern volatile __bit                   C12INP              @ (((unsigned) &PORTC)*8) + 0;
#define                                 C12INP_bit          BANKMASK(PORTC), 0
extern volatile __bit                   C12OUT              @ (((unsigned) &PORTC)*8) + 4;
#define                                 C12OUT_bit          BANKMASK(PORTC), 4
extern volatile __bit                   C1CH0               @ (((unsigned) &CM1CON0)*8) + 0;
#define                                 C1CH0_bit           BANKMASK(CM1CON0), 0
extern volatile __bit                   C1CH1               @ (((unsigned) &CM1CON0)*8) + 1;
#define                                 C1CH1_bit           BANKMASK(CM1CON0), 1
extern volatile __bit                   C1HYS               @ (((unsigned) &CM2CON1)*8) + 3;
#define                                 C1HYS_bit           BANKMASK(CM2CON1), 3
extern volatile __bit                   C1IE                @ (((unsigned) &PIE2)*8) + 6;
#define                                 C1IE_bit            BANKMASK(PIE2), 6
extern volatile __bit                   C1IF                @ (((unsigned) &PIR2)*8) + 6;
#define                                 C1IF_bit            BANKMASK(PIR2), 6
extern volatile __bit                   C1IP                @ (((unsigned) &IPR2)*8) + 6;
#define                                 C1IP_bit            BANKMASK(IPR2), 6
extern volatile __bit                   C1OE                @ (((unsigned) &CM1CON0)*8) + 5;
#define                                 C1OE_bit            BANKMASK(CM1CON0), 5
extern volatile __bit                   C1ON                @ (((unsigned) &CM1CON0)*8) + 7;
#define                                 C1ON_bit            BANKMASK(CM1CON0), 7
extern volatile __bit                   C1OUT               @ (((unsigned) &CM1CON0)*8) + 6;
#define                                 C1OUT_bit           BANKMASK(CM1CON0), 6
extern volatile __bit                   C1POL               @ (((unsigned) &CM1CON0)*8) + 4;
#define                                 C1POL_bit           BANKMASK(CM1CON0), 4
extern volatile __bit                   C1R                 @ (((unsigned) &CM1CON0)*8) + 2;
#define                                 C1R_bit             BANKMASK(CM1CON0), 2
extern volatile __bit                   C1RSEL              @ (((unsigned) &CM2CON1)*8) + 5;
#define                                 C1RSEL_bit          BANKMASK(CM2CON1), 5
extern volatile __bit                   C1SP                @ (((unsigned) &CM1CON0)*8) + 3;
#define                                 C1SP_bit            BANKMASK(CM1CON0), 3
extern volatile __bit                   C1SYNC              @ (((unsigned) &CM2CON1)*8) + 1;
#define                                 C1SYNC_bit          BANKMASK(CM2CON1), 1
extern volatile __bit                   C2CH0               @ (((unsigned) &CM2CON0)*8) + 0;
#define                                 C2CH0_bit           BANKMASK(CM2CON0), 0
extern volatile __bit                   C2CH1               @ (((unsigned) &CM2CON0)*8) + 1;
#define                                 C2CH1_bit           BANKMASK(CM2CON0), 1
extern volatile __bit                   C2HYS               @ (((unsigned) &CM2CON1)*8) + 2;
#define                                 C2HYS_bit           BANKMASK(CM2CON1), 2
extern volatile __bit                   C2IE                @ (((unsigned) &PIE2)*8) + 5;
#define                                 C2IE_bit            BANKMASK(PIE2), 5
extern volatile __bit                   C2IF                @ (((unsigned) &PIR2)*8) + 5;
#define                                 C2IF_bit            BANKMASK(PIR2), 5
extern volatile __bit                   C2IP                @ (((unsigned) &IPR2)*8) + 5;
#define                                 C2IP_bit            BANKMASK(IPR2), 5
extern volatile __bit                   C2OE                @ (((unsigned) &CM2CON0)*8) + 5;
#define                                 C2OE_bit            BANKMASK(CM2CON0), 5
extern volatile __bit                   C2ON                @ (((unsigned) &CM2CON0)*8) + 7;
#define                                 C2ON_bit            BANKMASK(CM2CON0), 7
extern volatile __bit                   C2OUT               @ (((unsigned) &CM2CON0)*8) + 6;
#define                                 C2OUT_bit           BANKMASK(CM2CON0), 6
extern volatile __bit                   C2POL               @ (((unsigned) &CM2CON0)*8) + 4;
#define                                 C2POL_bit           BANKMASK(CM2CON0), 4
extern volatile __bit                   C2R                 @ (((unsigned) &CM2CON0)*8) + 2;
#define                                 C2R_bit             BANKMASK(CM2CON0), 2
extern volatile __bit                   C2RSEL              @ (((unsigned) &CM2CON1)*8) + 4;
#define                                 C2RSEL_bit          BANKMASK(CM2CON1), 4
extern volatile __bit                   C2SP                @ (((unsigned) &CM2CON0)*8) + 3;
#define                                 C2SP_bit            BANKMASK(CM2CON0), 3
extern volatile __bit                   C2SYNC              @ (((unsigned) &CM2CON1)*8) + 0;
#define                                 C2SYNC_bit          BANKMASK(CM2CON1), 0
extern volatile __bit                   CARRY               @ (((unsigned) &STATUS)*8) + 0;
#define                                 CARRY_bit           BANKMASK(STATUS), 0
extern volatile __bit                   CCP1                @ (((unsigned) &PORTC)*8) + 5;
#define                                 CCP1_bit            BANKMASK(PORTC), 5
extern volatile __bit                   CCP1IE              @ (((unsigned) &PIE1)*8) + 2;
#define                                 CCP1IE_bit          BANKMASK(PIE1), 2
extern volatile __bit                   CCP1IF              @ (((unsigned) &PIR1)*8) + 2;
#define                                 CCP1IF_bit          BANKMASK(PIR1), 2
extern volatile __bit                   CCP1IP              @ (((unsigned) &IPR1)*8) + 2;
#define                                 CCP1IP_bit          BANKMASK(IPR1), 2
extern volatile __bit                   CCP1M0              @ (((unsigned) &CCP1CON)*8) + 0;
#define                                 CCP1M0_bit          BANKMASK(CCP1CON), 0
extern volatile __bit                   CCP1M1              @ (((unsigned) &CCP1CON)*8) + 1;
#define                                 CCP1M1_bit          BANKMASK(CCP1CON), 1
extern volatile __bit                   CCP1M2              @ (((unsigned) &CCP1CON)*8) + 2;
#define                                 CCP1M2_bit          BANKMASK(CCP1CON), 2
extern volatile __bit                   CCP1M3              @ (((unsigned) &CCP1CON)*8) + 3;
#define                                 CCP1M3_bit          BANKMASK(CCP1CON), 3
extern volatile __bit                   CCP2                @ (((unsigned) &PORTC)*8) + 1;
#define                                 CCP2_bit            BANKMASK(PORTC), 1
extern volatile __bit                   CCP2_PA2            @ (((unsigned) &PORTB)*8) + 3;
#define                                 CCP2_PA2_bit        BANKMASK(PORTB), 3
extern volatile __bit                   CFGS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 CFGS_bit            BANKMASK(EECON1), 6
extern volatile __bit                   CHS0                @ (((unsigned) &ADCON0)*8) + 2;
#define                                 CHS0_bit            BANKMASK(ADCON0), 2
extern volatile __bit                   CHS1                @ (((unsigned) &ADCON0)*8) + 3;
#define                                 CHS1_bit            BANKMASK(ADCON0), 3
extern volatile __bit                   CHS2                @ (((unsigned) &ADCON0)*8) + 4;
#define                                 CHS2_bit            BANKMASK(ADCON0), 4
extern volatile __bit                   CHS3                @ (((unsigned) &ADCON0)*8) + 5;
#define                                 CHS3_bit            BANKMASK(ADCON0), 5
extern volatile __bit                   CHSN3               @ (((unsigned) &ADCON1)*8) + 3;
#define                                 CHSN3_bit           BANKMASK(ADCON1), 3
extern volatile __bit                   CK                  @ (((unsigned) &PORTB)*8) + 7;
#define                                 CK_bit              BANKMASK(PORTB), 7
extern volatile __bit                   CKE                 @ (((unsigned) &SSPSTAT)*8) + 6;
#define                                 CKE_bit             BANKMASK(SSPSTAT), 6
extern volatile __bit                   CKP                 @ (((unsigned) &SSPCON1)*8) + 4;
#define                                 CKP_bit             BANKMASK(SSPCON1), 4
extern volatile __bit                   CKTXP               @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 CKTXP_bit           BANKMASK(BAUDCON), 4
extern volatile __bit                   CLKIN               @ (((unsigned) &PORTA)*8) + 5;
#define                                 CLKIN_bit           BANKMASK(PORTA), 5
extern volatile __bit                   CLKOUT              @ (((unsigned) &PORTA)*8) + 4;
#define                                 CLKOUT_bit          BANKMASK(PORTA), 4
extern volatile __bit                   CMIE                @ (((unsigned) &PIE2)*8) + 6;
#define                                 CMIE_bit            BANKMASK(PIE2), 6
extern volatile __bit                   CMIF                @ (((unsigned) &PIR2)*8) + 6;
#define                                 CMIF_bit            BANKMASK(PIR2), 6
extern volatile __bit                   CMIP                @ (((unsigned) &IPR2)*8) + 6;
#define                                 CMIP_bit            BANKMASK(IPR2), 6
extern volatile __bit                   CRC16EE             @ (((unsigned) &UEIE)*8) + 2;
#define                                 CRC16EE_bit         BANKMASK(UEIE), 2
extern volatile __bit                   CRC16EF             @ (((unsigned) &UEIR)*8) + 2;
#define                                 CRC16EF_bit         BANKMASK(UEIR), 2
extern volatile __bit                   CRC5EE              @ (((unsigned) &UEIE)*8) + 1;
#define                                 CRC5EE_bit          BANKMASK(UEIE), 1
extern volatile __bit                   CRC5EF              @ (((unsigned) &UEIR)*8) + 1;
#define                                 CRC5EF_bit          BANKMASK(UEIR), 1
extern volatile __bit                   CREN                @ (((unsigned) &RCSTA)*8) + 4;
#define                                 CREN_bit            BANKMASK(RCSTA), 4
extern volatile __bit                   CSRC                @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC_bit            BANKMASK(TXSTA), 7
extern volatile __bit                   CSRC1               @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC1_bit           BANKMASK(TXSTA), 7
extern volatile __bit                   CVREF               @ (((unsigned) &PORTC)*8) + 2;
#define                                 CVREF_bit           BANKMASK(PORTC), 2
extern volatile __bit                   D1EN                @ (((unsigned) &REFCON1)*8) + 7;
#define                                 D1EN_bit            BANKMASK(REFCON1), 7
extern volatile __bit                   D1LPS               @ (((unsigned) &REFCON1)*8) + 6;
#define                                 D1LPS_bit           BANKMASK(REFCON1), 6
extern volatile __bit                   D1NSS               @ (((unsigned) &REFCON1)*8) + 0;
#define                                 D1NSS_bit           BANKMASK(REFCON1), 0
extern volatile __bit                   D1NSS0              @ (((unsigned) &REFCON1)*8) + 0;
#define                                 D1NSS0_bit          BANKMASK(REFCON1), 0
extern volatile __bit                   D1PSS0              @ (((unsigned) &REFCON1)*8) + 2;
#define                                 D1PSS0_bit          BANKMASK(REFCON1), 2
extern volatile __bit                   D1PSS1              @ (((unsigned) &REFCON1)*8) + 3;
#define                                 D1PSS1_bit          BANKMASK(REFCON1), 3
extern volatile __bit                   DA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 DA_bit              BANKMASK(SSPSTAT), 5
extern volatile __bit                   DAC1OE              @ (((unsigned) &REFCON1)*8) + 5;
#define                                 DAC1OE_bit          BANKMASK(REFCON1), 5
extern volatile __bit                   DAC1R0              @ (((unsigned) &REFCON2)*8) + 0;
#define                                 DAC1R0_bit          BANKMASK(REFCON2), 0
extern volatile __bit                   DAC1R1              @ (((unsigned) &REFCON2)*8) + 1;
#define                                 DAC1R1_bit          BANKMASK(REFCON2), 1
extern volatile __bit                   DAC1R2              @ (((unsigned) &REFCON2)*8) + 2;
#define                                 DAC1R2_bit          BANKMASK(REFCON2), 2
extern volatile __bit                   DAC1R3              @ (((unsigned) &REFCON2)*8) + 3;
#define                                 DAC1R3_bit          BANKMASK(REFCON2), 3
extern volatile __bit                   DAC1R4              @ (((unsigned) &REFCON2)*8) + 4;
#define                                 DAC1R4_bit          BANKMASK(REFCON2), 4
extern volatile __bit                   DC                  @ (((unsigned) &STATUS)*8) + 1;
#define                                 DC_bit              BANKMASK(STATUS), 1
extern volatile __bit                   DC1B0               @ (((unsigned) &CCP1CON)*8) + 4;
#define                                 DC1B0_bit           BANKMASK(CCP1CON), 4
extern volatile __bit                   DC1B1               @ (((unsigned) &CCP1CON)*8) + 5;
#define                                 DC1B1_bit           BANKMASK(CCP1CON), 5
extern volatile __bit                   DFN8EE              @ (((unsigned) &UEIE)*8) + 3;
#define                                 DFN8EE_bit          BANKMASK(UEIE), 3
extern volatile __bit                   DFN8EF              @ (((unsigned) &UEIR)*8) + 3;
#define                                 DFN8EF_bit          BANKMASK(UEIR), 3
extern volatile __bit                   DIR                 @ (((unsigned) &USTAT)*8) + 2;
#define                                 DIR_bit             BANKMASK(USTAT), 2
extern volatile __bit                   DONE                @ (((unsigned) &ADCON0)*8) + 1;
#define                                 DONE_bit            BANKMASK(ADCON0), 1
extern volatile __bit                   DT                  @ (((unsigned) &PORTB)*8) + 5;
#define                                 DT_bit              BANKMASK(PORTB), 5
extern volatile __bit                   DTRXP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 DTRXP_bit           BANKMASK(BAUDCON), 5
extern volatile __bit                   D_A                 @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_A_bit             BANKMASK(SSPSTAT), 5
extern volatile __bit                   D_NOT_A             @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_NOT_A_bit         BANKMASK(SSPSTAT), 5
extern volatile __bit                   D_nA                @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_nA_bit            BANKMASK(SSPSTAT), 5
extern volatile __bit                   EBDIS               @ (((unsigned) &PR2)*8) + 7;
#define                                 EBDIS_bit           BANKMASK(PR2), 7
extern volatile __bit                   ECCPAS0             @ (((unsigned) &ECCP1AS)*8) + 4;
#define                                 ECCPAS0_bit         BANKMASK(ECCP1AS), 4
extern volatile __bit                   ECCPAS1             @ (((unsigned) &ECCP1AS)*8) + 5;
#define                                 ECCPAS1_bit         BANKMASK(ECCP1AS), 5
extern volatile __bit                   ECCPAS2             @ (((unsigned) &ECCP1AS)*8) + 6;
#define                                 ECCPAS2_bit         BANKMASK(ECCP1AS), 6
extern volatile __bit                   ECCPASE             @ (((unsigned) &ECCP1AS)*8) + 7;
#define                                 ECCPASE_bit         BANKMASK(ECCP1AS), 7
extern volatile __bit                   EEADR0              @ (((unsigned) &EEADR)*8) + 0;
#define                                 EEADR0_bit          BANKMASK(EEADR), 0
extern volatile __bit                   EEADR1              @ (((unsigned) &EEADR)*8) + 1;
#define                                 EEADR1_bit          BANKMASK(EEADR), 1
extern volatile __bit                   EEADR2              @ (((unsigned) &EEADR)*8) + 2;
#define                                 EEADR2_bit          BANKMASK(EEADR), 2
extern volatile __bit                   EEADR3              @ (((unsigned) &EEADR)*8) + 3;
#define                                 EEADR3_bit          BANKMASK(EEADR), 3
extern volatile __bit                   EEADR4              @ (((unsigned) &EEADR)*8) + 4;
#define                                 EEADR4_bit          BANKMASK(EEADR), 4
extern volatile __bit                   EEADR5              @ (((unsigned) &EEADR)*8) + 5;
#define                                 EEADR5_bit          BANKMASK(EEADR), 5
extern volatile __bit                   EEADR6              @ (((unsigned) &EEADR)*8) + 6;
#define                                 EEADR6_bit          BANKMASK(EEADR), 6
extern volatile __bit                   EEADR7              @ (((unsigned) &EEADR)*8) + 7;
#define                                 EEADR7_bit          BANKMASK(EEADR), 7
extern volatile __bit                   EEFS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 EEFS_bit            BANKMASK(EECON1), 6
extern volatile __bit                   EEIE                @ (((unsigned) &PIE2)*8) + 4;
#define                                 EEIE_bit            BANKMASK(PIE2), 4
extern volatile __bit                   EEIF                @ (((unsigned) &PIR2)*8) + 4;
#define                                 EEIF_bit            BANKMASK(PIR2), 4
extern volatile __bit                   EEIP                @ (((unsigned) &IPR2)*8) + 4;
#define                                 EEIP_bit            BANKMASK(IPR2), 4
extern volatile __bit                   EEPGD               @ (((unsigned) &EECON1)*8) + 7;
#define                                 EEPGD_bit           BANKMASK(EECON1), 7
extern volatile __bit                   ENDP0               @ (((unsigned) &USTAT)*8) + 3;
#define                                 ENDP0_bit           BANKMASK(USTAT), 3
extern volatile __bit                   ENDP1               @ (((unsigned) &USTAT)*8) + 4;
#define                                 ENDP1_bit           BANKMASK(USTAT), 4
extern volatile __bit                   ENDP2               @ (((unsigned) &USTAT)*8) + 5;
#define                                 ENDP2_bit           BANKMASK(USTAT), 5
extern volatile __bit                   ENDP3               @ (((unsigned) &USTAT)*8) + 6;
#define                                 ENDP3_bit           BANKMASK(USTAT), 6
extern volatile __bit                   EP0CONDIS           @ (((unsigned) &UEP0)*8) + 3;
#define                                 EP0CONDIS_bit       BANKMASK(UEP0), 3
extern volatile __bit                   EP0HSHK             @ (((unsigned) &UEP0)*8) + 4;
#define                                 EP0HSHK_bit         BANKMASK(UEP0), 4
extern volatile __bit                   EP0INEN             @ (((unsigned) &UEP0)*8) + 1;
#define                                 EP0INEN_bit         BANKMASK(UEP0), 1
extern volatile __bit                   EP0OUTEN            @ (((unsigned) &UEP0)*8) + 2;
#define                                 EP0OUTEN_bit        BANKMASK(UEP0), 2
extern volatile __bit                   EP0STALL            @ (((unsigned) &UEP0)*8) + 0;
#define                                 EP0STALL_bit        BANKMASK(UEP0), 0
extern volatile __bit                   EP1CONDIS           @ (((unsigned) &UEP1)*8) + 3;
#define                                 EP1CONDIS_bit       BANKMASK(UEP1), 3
extern volatile __bit                   EP1HSHK             @ (((unsigned) &UEP1)*8) + 4;
#define                                 EP1HSHK_bit         BANKMASK(UEP1), 4
extern volatile __bit                   EP1INEN             @ (((unsigned) &UEP1)*8) + 1;
#define                                 EP1INEN_bit         BANKMASK(UEP1), 1
extern volatile __bit                   EP1OUTEN            @ (((unsigned) &UEP1)*8) + 2;
#define                                 EP1OUTEN_bit        BANKMASK(UEP1), 2
extern volatile __bit                   EP1STALL            @ (((unsigned) &UEP1)*8) + 0;
#define                                 EP1STALL_bit        BANKMASK(UEP1), 0
extern volatile __bit                   EP2CONDIS           @ (((unsigned) &UEP2)*8) + 3;
#define                                 EP2CONDIS_bit       BANKMASK(UEP2), 3
extern volatile __bit                   EP2HSHK             @ (((unsigned) &UEP2)*8) + 4;
#define                                 EP2HSHK_bit         BANKMASK(UEP2), 4
extern volatile __bit                   EP2INEN             @ (((unsigned) &UEP2)*8) + 1;
#define                                 EP2INEN_bit         BANKMASK(UEP2), 1
extern volatile __bit                   EP2OUTEN            @ (((unsigned) &UEP2)*8) + 2;
#define                                 EP2OUTEN_bit        BANKMASK(UEP2), 2
extern volatile __bit                   EP2STALL            @ (((unsigned) &UEP2)*8) + 0;
#define                                 EP2STALL_bit        BANKMASK(UEP2), 0
extern volatile __bit                   EP3CONDIS           @ (((unsigned) &UEP3)*8) + 3;
#define                                 EP3CONDIS_bit       BANKMASK(UEP3), 3
extern volatile __bit                   EP3HSHK             @ (((unsigned) &UEP3)*8) + 4;
#define                                 EP3HSHK_bit         BANKMASK(UEP3), 4
extern volatile __bit                   EP3INEN             @ (((unsigned) &UEP3)*8) + 1;
#define                                 EP3INEN_bit         BANKMASK(UEP3), 1
extern volatile __bit                   EP3OUTEN            @ (((unsigned) &UEP3)*8) + 2;
#define                                 EP3OUTEN_bit        BANKMASK(UEP3), 2
extern volatile __bit                   EP3STALL            @ (((unsigned) &UEP3)*8) + 0;
#define                                 EP3STALL_bit        BANKMASK(UEP3), 0
extern volatile __bit                   EP4CONDIS           @ (((unsigned) &UEP4)*8) + 3;
#define                                 EP4CONDIS_bit       BANKMASK(UEP4), 3
extern volatile __bit                   EP4HSHK             @ (((unsigned) &UEP4)*8) + 4;
#define                                 EP4HSHK_bit         BANKMASK(UEP4), 4
extern volatile __bit                   EP4INEN             @ (((unsigned) &UEP4)*8) + 1;
#define                                 EP4INEN_bit         BANKMASK(UEP4), 1
extern volatile __bit                   EP4OUTEN            @ (((unsigned) &UEP4)*8) + 2;
#define                                 EP4OUTEN_bit        BANKMASK(UEP4), 2
extern volatile __bit                   EP4STALL            @ (((unsigned) &UEP4)*8) + 0;
#define                                 EP4STALL_bit        BANKMASK(UEP4), 0
extern volatile __bit                   EP5CONDIS           @ (((unsigned) &UEP5)*8) + 3;
#define                                 EP5CONDIS_bit       BANKMASK(UEP5), 3
extern volatile __bit                   EP5HSHK             @ (((unsigned) &UEP5)*8) + 4;
#define                                 EP5HSHK_bit         BANKMASK(UEP5), 4
extern volatile __bit                   EP5INEN             @ (((unsigned) &UEP5)*8) + 1;
#define                                 EP5INEN_bit         BANKMASK(UEP5), 1
extern volatile __bit                   EP5OUTEN            @ (((unsigned) &UEP5)*8) + 2;
#define                                 EP5OUTEN_bit        BANKMASK(UEP5), 2
extern volatile __bit                   EP5STALL            @ (((unsigned) &UEP5)*8) + 0;
#define                                 EP5STALL_bit        BANKMASK(UEP5), 0
extern volatile __bit                   EP6CONDIS           @ (((unsigned) &UEP6)*8) + 3;
#define                                 EP6CONDIS_bit       BANKMASK(UEP6), 3
extern volatile __bit                   EP6HSHK             @ (((unsigned) &UEP6)*8) + 4;
#define                                 EP6HSHK_bit         BANKMASK(UEP6), 4
extern volatile __bit                   EP6INEN             @ (((unsigned) &UEP6)*8) + 1;
#define                                 EP6INEN_bit         BANKMASK(UEP6), 1
extern volatile __bit                   EP6OUTEN            @ (((unsigned) &UEP6)*8) + 2;
#define                                 EP6OUTEN_bit        BANKMASK(UEP6), 2
extern volatile __bit                   EP6STALL            @ (((unsigned) &UEP6)*8) + 0;
#define                                 EP6STALL_bit        BANKMASK(UEP6), 0
extern volatile __bit                   EP7CONDIS           @ (((unsigned) &UEP7)*8) + 3;
#define                                 EP7CONDIS_bit       BANKMASK(UEP7), 3
extern volatile __bit                   EP7HSHK             @ (((unsigned) &UEP7)*8) + 4;
#define                                 EP7HSHK_bit         BANKMASK(UEP7), 4
extern volatile __bit                   EP7INEN             @ (((unsigned) &UEP7)*8) + 1;
#define                                 EP7INEN_bit         BANKMASK(UEP7), 1
extern volatile __bit                   EP7OUTEN            @ (((unsigned) &UEP7)*8) + 2;
#define                                 EP7OUTEN_bit        BANKMASK(UEP7), 2
extern volatile __bit                   EP7STALL            @ (((unsigned) &UEP7)*8) + 0;
#define                                 EP7STALL_bit        BANKMASK(UEP7), 0
extern volatile __bit _DEPRECATED       EPCONDIS            @ (((unsigned) &UEP0)*8) + 3;
#define                                 EPCONDIS_bit        BANKMASK(UEP0), 3
extern volatile __bit                   EPCONDIS0           @ (((unsigned) &UEP0)*8) + 3;
#define                                 EPCONDIS0_bit       BANKMASK(UEP0), 3
extern volatile __bit                   EPCONDIS1           @ (((unsigned) &UEP1)*8) + 3;
#define                                 EPCONDIS1_bit       BANKMASK(UEP1), 3
extern volatile __bit                   EPCONDIS2           @ (((unsigned) &UEP2)*8) + 3;
#define                                 EPCONDIS2_bit       BANKMASK(UEP2), 3
extern volatile __bit                   EPCONDIS3           @ (((unsigned) &UEP3)*8) + 3;
#define                                 EPCONDIS3_bit       BANKMASK(UEP3), 3
extern volatile __bit                   EPCONDIS4           @ (((unsigned) &UEP4)*8) + 3;
#define                                 EPCONDIS4_bit       BANKMASK(UEP4), 3
extern volatile __bit                   EPCONDIS5           @ (((unsigned) &UEP5)*8) + 3;
#define                                 EPCONDIS5_bit       BANKMASK(UEP5), 3
extern volatile __bit                   EPCONDIS6           @ (((unsigned) &UEP6)*8) + 3;
#define                                 EPCONDIS6_bit       BANKMASK(UEP6), 3
extern volatile __bit                   EPCONDIS7           @ (((unsigned) &UEP7)*8) + 3;
#define                                 EPCONDIS7_bit       BANKMASK(UEP7), 3
extern volatile __bit _DEPRECATED       EPHSHK              @ (((unsigned) &UEP0)*8) + 4;
#define                                 EPHSHK_bit          BANKMASK(UEP0), 4
extern volatile __bit                   EPHSHK0             @ (((unsigned) &UEP0)*8) + 4;
#define                                 EPHSHK0_bit         BANKMASK(UEP0), 4
extern volatile __bit                   EPHSHK1             @ (((unsigned) &UEP1)*8) + 4;
#define                                 EPHSHK1_bit         BANKMASK(UEP1), 4
extern volatile __bit                   EPHSHK2             @ (((unsigned) &UEP2)*8) + 4;
#define                                 EPHSHK2_bit         BANKMASK(UEP2), 4
extern volatile __bit                   EPHSHK3             @ (((unsigned) &UEP3)*8) + 4;
#define                                 EPHSHK3_bit         BANKMASK(UEP3), 4
extern volatile __bit                   EPHSHK4             @ (((unsigned) &UEP4)*8) + 4;
#define                                 EPHSHK4_bit         BANKMASK(UEP4), 4
extern volatile __bit                   EPHSHK5             @ (((unsigned) &UEP5)*8) + 4;
#define                                 EPHSHK5_bit         BANKMASK(UEP5), 4
extern volatile __bit                   EPHSHK6             @ (((unsigned) &UEP6)*8) + 4;
#define                                 EPHSHK6_bit         BANKMASK(UEP6), 4
extern volatile __bit                   EPHSHK7             @ (((unsigned) &UEP7)*8) + 4;
#define                                 EPHSHK7_bit         BANKMASK(UEP7), 4
extern volatile __bit _DEPRECATED       EPINEN              @ (((unsigned) &UEP0)*8) + 1;
#define                                 EPINEN_bit          BANKMASK(UEP0), 1
extern volatile __bit                   EPINEN0             @ (((unsigned) &UEP0)*8) + 1;
#define                                 EPINEN0_bit         BANKMASK(UEP0), 1
extern volatile __bit                   EPINEN1             @ (((unsigned) &UEP1)*8) + 1;
#define                                 EPINEN1_bit         BANKMASK(UEP1), 1
extern volatile __bit                   EPINEN2             @ (((unsigned) &UEP2)*8) + 1;
#define                                 EPINEN2_bit         BANKMASK(UEP2), 1
extern volatile __bit                   EPINEN3             @ (((unsigned) &UEP3)*8) + 1;
#define                                 EPINEN3_bit         BANKMASK(UEP3), 1
extern volatile __bit                   EPINEN4             @ (((unsigned) &UEP4)*8) + 1;
#define                                 EPINEN4_bit         BANKMASK(UEP4), 1
extern volatile __bit                   EPINEN5             @ (((unsigned) &UEP5)*8) + 1;
#define                                 EPINEN5_bit         BANKMASK(UEP5), 1
extern volatile __bit                   EPINEN6             @ (((unsigned) &UEP6)*8) + 1;
#define                                 EPINEN6_bit         BANKMASK(UEP6), 1
extern volatile __bit                   EPINEN7             @ (((unsigned) &UEP7)*8) + 1;
#define                                 EPINEN7_bit         BANKMASK(UEP7), 1
extern volatile __bit _DEPRECATED       EPOUTEN             @ (((unsigned) &UEP0)*8) + 2;
#define                                 EPOUTEN_bit         BANKMASK(UEP0), 2
extern volatile __bit                   EPOUTEN0            @ (((unsigned) &UEP0)*8) + 2;
#define                                 EPOUTEN0_bit        BANKMASK(UEP0), 2
extern volatile __bit                   EPOUTEN1            @ (((unsigned) &UEP1)*8) + 2;
#define                                 EPOUTEN1_bit        BANKMASK(UEP1), 2
extern volatile __bit                   EPOUTEN2            @ (((unsigned) &UEP2)*8) + 2;
#define                                 EPOUTEN2_bit        BANKMASK(UEP2), 2
extern volatile __bit                   EPOUTEN3            @ (((unsigned) &UEP3)*8) + 2;
#define                                 EPOUTEN3_bit        BANKMASK(UEP3), 2
extern volatile __bit                   EPOUTEN4            @ (((unsigned) &UEP4)*8) + 2;
#define                                 EPOUTEN4_bit        BANKMASK(UEP4), 2
extern volatile __bit                   EPOUTEN5            @ (((unsigned) &UEP5)*8) + 2;
#define                                 EPOUTEN5_bit        BANKMASK(UEP5), 2
extern volatile __bit                   EPOUTEN6            @ (((unsigned) &UEP6)*8) + 2;
#define                                 EPOUTEN6_bit        BANKMASK(UEP6), 2
extern volatile __bit                   EPOUTEN7            @ (((unsigned) &UEP7)*8) + 2;
#define                                 EPOUTEN7_bit        BANKMASK(UEP7), 2
extern volatile __bit _DEPRECATED       EPSTALL             @ (((unsigned) &UEP0)*8) + 0;
#define                                 EPSTALL_bit         BANKMASK(UEP0), 0
extern volatile __bit                   EPSTALL0            @ (((unsigned) &UEP0)*8) + 0;
#define                                 EPSTALL0_bit        BANKMASK(UEP0), 0
extern volatile __bit                   EPSTALL1            @ (((unsigned) &UEP1)*8) + 0;
#define                                 EPSTALL1_bit        BANKMASK(UEP1), 0
extern volatile __bit                   EPSTALL2            @ (((unsigned) &UEP2)*8) + 0;
#define                                 EPSTALL2_bit        BANKMASK(UEP2), 0
extern volatile __bit                   EPSTALL3            @ (((unsigned) &UEP3)*8) + 0;
#define                                 EPSTALL3_bit        BANKMASK(UEP3), 0
extern volatile __bit                   EPSTALL4            @ (((unsigned) &UEP4)*8) + 0;
#define                                 EPSTALL4_bit        BANKMASK(UEP4), 0
extern volatile __bit                   EPSTALL5            @ (((unsigned) &UEP5)*8) + 0;
#define                                 EPSTALL5_bit        BANKMASK(UEP5), 0
extern volatile __bit                   EPSTALL6            @ (((unsigned) &UEP6)*8) + 0;
#define                                 EPSTALL6_bit        BANKMASK(UEP6), 0
extern volatile __bit                   EPSTALL7            @ (((unsigned) &UEP7)*8) + 0;
#define                                 EPSTALL7_bit        BANKMASK(UEP7), 0
extern volatile __bit                   FERR                @ (((unsigned) &RCSTA)*8) + 2;
#define                                 FERR_bit            BANKMASK(RCSTA), 2
extern volatile __bit                   FREE                @ (((unsigned) &EECON1)*8) + 4;
#define                                 FREE_bit            BANKMASK(EECON1), 4
extern volatile __bit                   FRM0                @ (((unsigned) &UFRML)*8) + 0;
#define                                 FRM0_bit            BANKMASK(UFRML), 0
extern volatile __bit                   FRM1                @ (((unsigned) &UFRML)*8) + 1;
#define                                 FRM1_bit            BANKMASK(UFRML), 1
extern volatile __bit                   FRM10               @ (((unsigned) &UFRMH)*8) + 2;
#define                                 FRM10_bit           BANKMASK(UFRMH), 2
extern volatile __bit                   FRM2                @ (((unsigned) &UFRML)*8) + 2;
#define                                 FRM2_bit            BANKMASK(UFRML), 2
extern volatile __bit                   FRM3                @ (((unsigned) &UFRML)*8) + 3;
#define                                 FRM3_bit            BANKMASK(UFRML), 3
extern volatile __bit                   FRM4                @ (((unsigned) &UFRML)*8) + 4;
#define                                 FRM4_bit            BANKMASK(UFRML), 4
extern volatile __bit                   FRM5                @ (((unsigned) &UFRML)*8) + 5;
#define                                 FRM5_bit            BANKMASK(UFRML), 5
extern volatile __bit                   FRM6                @ (((unsigned) &UFRML)*8) + 6;
#define                                 FRM6_bit            BANKMASK(UFRML), 6
extern volatile __bit                   FRM7                @ (((unsigned) &UFRML)*8) + 7;
#define                                 FRM7_bit            BANKMASK(UFRML), 7
extern volatile __bit                   FRM8                @ (((unsigned) &UFRMH)*8) + 0;
#define                                 FRM8_bit            BANKMASK(UFRMH), 0
extern volatile __bit                   FRM9                @ (((unsigned) &UFRMH)*8) + 1;
#define                                 FRM9_bit            BANKMASK(UFRMH), 1
extern volatile __bit                   FSEN                @ (((unsigned) &UCFG)*8) + 2;
#define                                 FSEN_bit            BANKMASK(UCFG), 2
extern volatile __bit                   FVR1EN              @ (((unsigned) &REFCON0)*8) + 7;
#define                                 FVR1EN_bit          BANKMASK(REFCON0), 7
extern volatile __bit                   FVR1S0              @ (((unsigned) &REFCON0)*8) + 4;
#define                                 FVR1S0_bit          BANKMASK(REFCON0), 4
extern volatile __bit                   FVR1S1              @ (((unsigned) &REFCON0)*8) + 5;
#define                                 FVR1S1_bit          BANKMASK(REFCON0), 5
extern volatile __bit                   FVR1ST              @ (((unsigned) &REFCON0)*8) + 6;
#define                                 FVR1ST_bit          BANKMASK(REFCON0), 6
extern volatile __bit                   GCEN                @ (((unsigned) &SSPCON2)*8) + 7;
#define                                 GCEN_bit            BANKMASK(SSPCON2), 7
extern volatile __bit                   GIE                 @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_bit             BANKMASK(INTCON), 7
extern volatile __bit                   GIEH                @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIEH_bit            BANKMASK(INTCON), 7
extern volatile __bit                   GIEL                @ (((unsigned) &INTCON)*8) + 6;
#define                                 GIEL_bit            BANKMASK(INTCON), 6
extern volatile __bit                   GIE_GIEH            @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_GIEH_bit        BANKMASK(INTCON), 7
extern volatile __bit                   GO                  @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_bit              BANKMASK(ADCON0), 1
extern volatile __bit                   GODONE              @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GODONE_bit          BANKMASK(ADCON0), 1
extern volatile __bit                   GO_DONE             @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_DONE_bit         BANKMASK(ADCON0), 1
extern volatile __bit                   GO_NOT_DONE         @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_NOT_DONE_bit     BANKMASK(ADCON0), 1
extern volatile __bit                   GO_nDONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_nDONE_bit        BANKMASK(ADCON0), 1
extern volatile __bit                   HFIOFL              @ (((unsigned) &OSCCON2)*8) + 1;
#define                                 HFIOFL_bit          BANKMASK(OSCCON2), 1
extern volatile __bit                   IDLEIE              @ (((unsigned) &UIE)*8) + 4;
#define                                 IDLEIE_bit          BANKMASK(UIE), 4
extern volatile __bit                   IDLEIF              @ (((unsigned) &UIR)*8) + 4;
#define                                 IDLEIF_bit          BANKMASK(UIR), 4
extern volatile __bit                   IDLEN               @ (((unsigned) &OSCCON)*8) + 7;
#define                                 IDLEN_bit           BANKMASK(OSCCON), 7
extern volatile __bit                   INT0                @ (((unsigned) &PORTC)*8) + 0;
#define                                 INT0_bit            BANKMASK(PORTC), 0
extern volatile __bit                   INT0E               @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0E_bit           BANKMASK(INTCON), 4
extern volatile __bit                   INT0F               @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0F_bit           BANKMASK(INTCON), 1
extern volatile __bit                   INT0IE              @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0IE_bit          BANKMASK(INTCON), 4
extern volatile __bit                   INT0IF              @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0IF_bit          BANKMASK(INTCON), 1
extern volatile __bit                   INT1                @ (((unsigned) &PORTC)*8) + 1;
#define                                 INT1_bit            BANKMASK(PORTC), 1
extern volatile __bit                   INT1E               @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1E_bit           BANKMASK(INTCON3), 3
extern volatile __bit                   INT1F               @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1F_bit           BANKMASK(INTCON3), 0
extern volatile __bit                   INT1IE              @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1IE_bit          BANKMASK(INTCON3), 3
extern volatile __bit                   INT1IF              @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1IF_bit          BANKMASK(INTCON3), 0
extern volatile __bit                   INT1IP              @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1IP_bit          BANKMASK(INTCON3), 6
extern volatile __bit                   INT1P               @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1P_bit           BANKMASK(INTCON3), 6
extern volatile __bit                   INT2                @ (((unsigned) &PORTC)*8) + 2;
#define                                 INT2_bit            BANKMASK(PORTC), 2
extern volatile __bit                   INT2E               @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2E_bit           BANKMASK(INTCON3), 4
extern volatile __bit                   INT2F               @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2F_bit           BANKMASK(INTCON3), 1
extern volatile __bit                   INT2IE              @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2IE_bit          BANKMASK(INTCON3), 4
extern volatile __bit                   INT2IF              @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2IF_bit          BANKMASK(INTCON3), 1
extern volatile __bit                   INT2IP              @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2IP_bit          BANKMASK(INTCON3), 7
extern volatile __bit                   INT2P               @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2P_bit           BANKMASK(INTCON3), 7
extern volatile __bit                   INTEDG0             @ (((unsigned) &INTCON2)*8) + 6;
#define                                 INTEDG0_bit         BANKMASK(INTCON2), 6
extern volatile __bit                   INTEDG1             @ (((unsigned) &INTCON2)*8) + 5;
#define                                 INTEDG1_bit         BANKMASK(INTCON2), 5
extern volatile __bit                   INTEDG2             @ (((unsigned) &INTCON2)*8) + 4;
#define                                 INTEDG2_bit         BANKMASK(INTCON2), 4
extern volatile __bit                   INTSRC              @ (((unsigned) &OSCTUNE)*8) + 7;
#define                                 INTSRC_bit          BANKMASK(OSCTUNE), 7
extern volatile __bit                   IOCA0               @ (((unsigned) &IOCA)*8) + 0;
#define                                 IOCA0_bit           BANKMASK(IOCA), 0
extern volatile __bit                   IOCA1               @ (((unsigned) &IOCA)*8) + 1;
#define                                 IOCA1_bit           BANKMASK(IOCA), 1
extern volatile __bit                   IOCA3               @ (((unsigned) &IOCA)*8) + 3;
#define                                 IOCA3_bit           BANKMASK(IOCA), 3
extern volatile __bit                   IOCA4               @ (((unsigned) &IOCA)*8) + 4;
#define                                 IOCA4_bit           BANKMASK(IOCA), 4
extern volatile __bit                   IOCA5               @ (((unsigned) &IOCA)*8) + 5;
#define                                 IOCA5_bit           BANKMASK(IOCA), 5
extern volatile __bit                   IOCB4               @ (((unsigned) &IOCB)*8) + 4;
#define                                 IOCB4_bit           BANKMASK(IOCB), 4
extern volatile __bit                   IOCB5               @ (((unsigned) &IOCB)*8) + 5;
#define                                 IOCB5_bit           BANKMASK(IOCB), 5
extern volatile __bit                   IOCB6               @ (((unsigned) &IOCB)*8) + 6;
#define                                 IOCB6_bit           BANKMASK(IOCB), 6
extern volatile __bit                   IOCB7               @ (((unsigned) &IOCB)*8) + 7;
#define                                 IOCB7_bit           BANKMASK(IOCB), 7
extern volatile __bit                   IOFS                @ (((unsigned) &OSCCON)*8) + 2;
#define                                 IOFS_bit            BANKMASK(OSCCON), 2
extern volatile __bit                   IPEN                @ (((unsigned) &RCON)*8) + 7;
#define                                 IPEN_bit            BANKMASK(RCON), 7
extern volatile __bit                   IRCF0               @ (((unsigned) &OSCCON)*8) + 4;
#define                                 IRCF0_bit           BANKMASK(OSCCON), 4
extern volatile __bit                   IRCF1               @ (((unsigned) &OSCCON)*8) + 5;
#define                                 IRCF1_bit           BANKMASK(OSCCON), 5
extern volatile __bit                   IRCF2               @ (((unsigned) &OSCCON)*8) + 6;
#define                                 IRCF2_bit           BANKMASK(OSCCON), 6
extern volatile __bit                   LA0                 @ (((unsigned) &LATA)*8) + 0;
#define                                 LA0_bit             BANKMASK(LATA), 0
extern volatile __bit                   LA1                 @ (((unsigned) &LATA)*8) + 1;
#define                                 LA1_bit             BANKMASK(LATA), 1
extern volatile __bit                   LA2                 @ (((unsigned) &LATA)*8) + 2;
#define                                 LA2_bit             BANKMASK(LATA), 2
extern volatile __bit                   LA3                 @ (((unsigned) &LATA)*8) + 3;
#define                                 LA3_bit             BANKMASK(LATA), 3
extern volatile __bit                   LA4                 @ (((unsigned) &LATA)*8) + 4;
#define                                 LA4_bit             BANKMASK(LATA), 4
extern volatile __bit                   LA5                 @ (((unsigned) &LATA)*8) + 5;
#define                                 LA5_bit             BANKMASK(LATA), 5
extern volatile __bit                   LA6                 @ (((unsigned) &LATA)*8) + 6;
#define                                 LA6_bit             BANKMASK(LATA), 6
extern volatile __bit                   LA7                 @ (((unsigned) &LATA)*8) + 7;
#define                                 LA7_bit             BANKMASK(LATA), 7
extern volatile __bit                   LATA4               @ (((unsigned) &LATA)*8) + 4;
#define                                 LATA4_bit           BANKMASK(LATA), 4
extern volatile __bit                   LATA5               @ (((unsigned) &LATA)*8) + 5;
#define                                 LATA5_bit           BANKMASK(LATA), 5
extern volatile __bit                   LATA7               @ (((unsigned) &LATA)*8) + 7;
#define                                 LATA7_bit           BANKMASK(LATA), 7
extern volatile __bit                   LATB4               @ (((unsigned) &LATB)*8) + 4;
#define                                 LATB4_bit           BANKMASK(LATB), 4
extern volatile __bit                   LATB5               @ (((unsigned) &LATB)*8) + 5;
#define                                 LATB5_bit           BANKMASK(LATB), 5
extern volatile __bit                   LATB6               @ (((unsigned) &LATB)*8) + 6;
#define                                 LATB6_bit           BANKMASK(LATB), 6
extern volatile __bit                   LATB7               @ (((unsigned) &LATB)*8) + 7;
#define                                 LATB7_bit           BANKMASK(LATB), 7
extern volatile __bit                   LATC0               @ (((unsigned) &LATC)*8) + 0;
#define                                 LATC0_bit           BANKMASK(LATC), 0
extern volatile __bit                   LATC1               @ (((unsigned) &LATC)*8) + 1;
#define                                 LATC1_bit           BANKMASK(LATC), 1
extern volatile __bit                   LATC2               @ (((unsigned) &LATC)*8) + 2;
#define                                 LATC2_bit           BANKMASK(LATC), 2
extern volatile __bit                   LATC3               @ (((unsigned) &LATC)*8) + 3;
#define                                 LATC3_bit           BANKMASK(LATC), 3
extern volatile __bit                   LATC4               @ (((unsigned) &LATC)*8) + 4;
#define                                 LATC4_bit           BANKMASK(LATC), 4
extern volatile __bit                   LATC5               @ (((unsigned) &LATC)*8) + 5;
#define                                 LATC5_bit           BANKMASK(LATC), 5
extern volatile __bit                   LATC6               @ (((unsigned) &LATC)*8) + 6;
#define                                 LATC6_bit           BANKMASK(LATC), 6
extern volatile __bit                   LATC7               @ (((unsigned) &LATC)*8) + 7;
#define                                 LATC7_bit           BANKMASK(LATC), 7
extern volatile __bit                   LB0                 @ (((unsigned) &LATB)*8) + 0;
#define                                 LB0_bit             BANKMASK(LATB), 0
extern volatile __bit                   LB1                 @ (((unsigned) &LATB)*8) + 1;
#define                                 LB1_bit             BANKMASK(LATB), 1
extern volatile __bit                   LB2                 @ (((unsigned) &LATB)*8) + 2;
#define                                 LB2_bit             BANKMASK(LATB), 2
extern volatile __bit                   LB3                 @ (((unsigned) &LATB)*8) + 3;
#define                                 LB3_bit             BANKMASK(LATB), 3
extern volatile __bit                   LB4                 @ (((unsigned) &LATB)*8) + 4;
#define                                 LB4_bit             BANKMASK(LATB), 4
extern volatile __bit                   LB5                 @ (((unsigned) &LATB)*8) + 5;
#define                                 LB5_bit             BANKMASK(LATB), 5
extern volatile __bit                   LB6                 @ (((unsigned) &LATB)*8) + 6;
#define                                 LB6_bit             BANKMASK(LATB), 6
extern volatile __bit                   LB7                 @ (((unsigned) &LATB)*8) + 7;
#define                                 LB7_bit             BANKMASK(LATB), 7
extern volatile __bit                   LC0                 @ (((unsigned) &LATC)*8) + 0;
#define                                 LC0_bit             BANKMASK(LATC), 0
extern volatile __bit                   LC1                 @ (((unsigned) &LATC)*8) + 1;
#define                                 LC1_bit             BANKMASK(LATC), 1
extern volatile __bit                   LC2                 @ (((unsigned) &LATC)*8) + 2;
#define                                 LC2_bit             BANKMASK(LATC), 2
extern volatile __bit                   LC3                 @ (((unsigned) &LATC)*8) + 3;
#define                                 LC3_bit             BANKMASK(LATC), 3
extern volatile __bit                   LC4                 @ (((unsigned) &LATC)*8) + 4;
#define                                 LC4_bit             BANKMASK(LATC), 4
extern volatile __bit                   LC5                 @ (((unsigned) &LATC)*8) + 5;
#define                                 LC5_bit             BANKMASK(LATC), 5
extern volatile __bit                   LC6                 @ (((unsigned) &LATC)*8) + 6;
#define                                 LC6_bit             BANKMASK(LATC), 6
extern volatile __bit                   LC7                 @ (((unsigned) &LATC)*8) + 7;
#define                                 LC7_bit             BANKMASK(LATC), 7
extern volatile __bit                   LFIOFS              @ (((unsigned) &OSCCON2)*8) + 0;
#define                                 LFIOFS_bit          BANKMASK(OSCCON2), 0
extern volatile __bit                   LVDIN               @ (((unsigned) &PORTA)*8) + 5;
#define                                 LVDIN_bit           BANKMASK(PORTA), 5
extern volatile __bit                   MC1OUT              @ (((unsigned) &CM2CON1)*8) + 7;
#define                                 MC1OUT_bit          BANKMASK(CM2CON1), 7
extern volatile __bit                   MC2OUT              @ (((unsigned) &CM2CON1)*8) + 6;
#define                                 MC2OUT_bit          BANKMASK(CM2CON1), 6
extern volatile __bit                   MSK0                @ (((unsigned) &SSPMSK)*8) + 0;
#define                                 MSK0_bit            BANKMASK(SSPMSK), 0
extern volatile __bit                   MSK1                @ (((unsigned) &SSPMSK)*8) + 1;
#define                                 MSK1_bit            BANKMASK(SSPMSK), 1
extern volatile __bit                   MSK2                @ (((unsigned) &SSPMSK)*8) + 2;
#define                                 MSK2_bit            BANKMASK(SSPMSK), 2
extern volatile __bit                   MSK3                @ (((unsigned) &SSPMSK)*8) + 3;
#define                                 MSK3_bit            BANKMASK(SSPMSK), 3
extern volatile __bit                   MSK4                @ (((unsigned) &SSPMSK)*8) + 4;
#define                                 MSK4_bit            BANKMASK(SSPMSK), 4
extern volatile __bit                   MSK5                @ (((unsigned) &SSPMSK)*8) + 5;
#define                                 MSK5_bit            BANKMASK(SSPMSK), 5
extern volatile __bit                   MSK6                @ (((unsigned) &SSPMSK)*8) + 6;
#define                                 MSK6_bit            BANKMASK(SSPMSK), 6
extern volatile __bit                   MSK7                @ (((unsigned) &SSPMSK)*8) + 7;
#define                                 MSK7_bit            BANKMASK(SSPMSK), 7
extern volatile __bit                   NEGATIVE            @ (((unsigned) &STATUS)*8) + 4;
#define                                 NEGATIVE_bit        BANKMASK(STATUS), 4
extern volatile __bit                   NOT_A               @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_A_bit           BANKMASK(SSPSTAT), 5
extern volatile __bit                   NOT_ADDRESS         @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_ADDRESS_bit     BANKMASK(SSPSTAT), 5
extern volatile __bit                   NOT_BOR             @ (((unsigned) &RCON)*8) + 0;
#define                                 NOT_BOR_bit         BANKMASK(RCON), 0
extern volatile __bit                   NOT_DONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 NOT_DONE_bit        BANKMASK(ADCON0), 1
extern volatile __bit                   NOT_PD              @ (((unsigned) &RCON)*8) + 2;
#define                                 NOT_PD_bit          BANKMASK(RCON), 2
extern volatile __bit                   NOT_POR             @ (((unsigned) &RCON)*8) + 1;
#define                                 NOT_POR_bit         BANKMASK(RCON), 1
extern volatile __bit                   NOT_RABPU           @ (((unsigned) &INTCON2)*8) + 7;
#define                                 NOT_RABPU_bit       BANKMASK(INTCON2), 7
extern volatile __bit                   NOT_RI              @ (((unsigned) &RCON)*8) + 4;
#define                                 NOT_RI_bit          BANKMASK(RCON), 4
extern volatile __bit                   NOT_SS              @ (((unsigned) &PORTC)*8) + 6;
#define                                 NOT_SS_bit          BANKMASK(PORTC), 6
extern volatile __bit                   NOT_T1SYNC          @ (((unsigned) &T1CON)*8) + 2;
#define                                 NOT_T1SYNC_bit      BANKMASK(T1CON), 2
extern volatile __bit                   NOT_T3SYNC          @ (((unsigned) &T3CON)*8) + 2;
#define                                 NOT_T3SYNC_bit      BANKMASK(T3CON), 2
extern volatile __bit                   NOT_TO              @ (((unsigned) &RCON)*8) + 3;
#define                                 NOT_TO_bit          BANKMASK(RCON), 3
extern volatile __bit                   NOT_W               @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_W_bit           BANKMASK(SSPSTAT), 2
extern volatile __bit                   NOT_WRITE           @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_WRITE_bit       BANKMASK(SSPSTAT), 2
extern volatile __bit                   NVCFG0              @ (((unsigned) &ADCON1)*8) + 0;
#define                                 NVCFG0_bit          BANKMASK(ADCON1), 0
extern volatile __bit                   NVCFG1              @ (((unsigned) &ADCON1)*8) + 1;
#define                                 NVCFG1_bit          BANKMASK(ADCON1), 1
extern volatile __bit                   OERR                @ (((unsigned) &RCSTA)*8) + 1;
#define                                 OERR_bit            BANKMASK(RCSTA), 1
extern volatile __bit                   OSC1                @ (((unsigned) &PORTA)*8) + 5;
#define                                 OSC1_bit            BANKMASK(PORTA), 5
extern volatile __bit                   OSC2                @ (((unsigned) &PORTA)*8) + 4;
#define                                 OSC2_bit            BANKMASK(PORTA), 4
extern volatile __bit                   OSCFIE              @ (((unsigned) &PIE2)*8) + 7;
#define                                 OSCFIE_bit          BANKMASK(PIE2), 7
extern volatile __bit                   OSCFIF              @ (((unsigned) &PIR2)*8) + 7;
#define                                 OSCFIF_bit          BANKMASK(PIR2), 7
extern volatile __bit                   OSCFIP              @ (((unsigned) &IPR2)*8) + 7;
#define                                 OSCFIP_bit          BANKMASK(IPR2), 7
extern volatile __bit                   OSTS                @ (((unsigned) &OSCCON)*8) + 3;
#define                                 OSTS_bit            BANKMASK(OSCCON), 3
extern volatile __bit                   OV                  @ (((unsigned) &STATUS)*8) + 3;
#define                                 OV_bit              BANKMASK(STATUS), 3
extern volatile __bit                   OVERFLOW            @ (((unsigned) &STATUS)*8) + 3;
#define                                 OVERFLOW_bit        BANKMASK(STATUS), 3
extern volatile __bit                   P1A                 @ (((unsigned) &PORTC)*8) + 5;
#define                                 P1A_bit             BANKMASK(PORTC), 5
extern volatile __bit                   P1B                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 P1B_bit             BANKMASK(PORTC), 4
extern volatile __bit                   P1C                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 P1C_bit             BANKMASK(PORTC), 3
extern volatile __bit                   P1D                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 P1D_bit             BANKMASK(PORTC), 2
extern volatile __bit                   P1M0                @ (((unsigned) &CCP1CON)*8) + 6;
#define                                 P1M0_bit            BANKMASK(CCP1CON), 6
extern volatile __bit                   P1M1                @ (((unsigned) &CCP1CON)*8) + 7;
#define                                 P1M1_bit            BANKMASK(CCP1CON), 7
extern volatile __bit                   PA1                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 PA1_bit             BANKMASK(PORTC), 2
extern volatile __bit                   PA2                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 PA2_bit             BANKMASK(PORTC), 1
extern volatile __bit                   PD                  @ (((unsigned) &RCON)*8) + 2;
#define                                 PD_bit              BANKMASK(RCON), 2
extern volatile __bit                   PDC0                @ (((unsigned) &PWM1CON)*8) + 0;
#define                                 PDC0_bit            BANKMASK(PWM1CON), 0
extern volatile __bit                   PDC1                @ (((unsigned) &PWM1CON)*8) + 1;
#define                                 PDC1_bit            BANKMASK(PWM1CON), 1
extern volatile __bit                   PDC2                @ (((unsigned) &PWM1CON)*8) + 2;
#define                                 PDC2_bit            BANKMASK(PWM1CON), 2
extern volatile __bit                   PDC3                @ (((unsigned) &PWM1CON)*8) + 3;
#define                                 PDC3_bit            BANKMASK(PWM1CON), 3
extern volatile __bit                   PDC4                @ (((unsigned) &PWM1CON)*8) + 4;
#define                                 PDC4_bit            BANKMASK(PWM1CON), 4
extern volatile __bit                   PDC5                @ (((unsigned) &PWM1CON)*8) + 5;
#define                                 PDC5_bit            BANKMASK(PWM1CON), 5
extern volatile __bit                   PDC6                @ (((unsigned) &PWM1CON)*8) + 6;
#define                                 PDC6_bit            BANKMASK(PWM1CON), 6
extern volatile __bit                   PEIE                @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_bit            BANKMASK(INTCON), 6
extern volatile __bit                   PEIE_GIEL           @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_GIEL_bit       BANKMASK(INTCON), 6
extern volatile __bit                   PEN                 @ (((unsigned) &SSPCON2)*8) + 2;
#define                                 PEN_bit             BANKMASK(SSPCON2), 2
extern volatile __bit                   PGM                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 PGM_bit             BANKMASK(PORTC), 3
extern volatile __bit                   PIDEE               @ (((unsigned) &UEIE)*8) + 0;
#define                                 PIDEE_bit           BANKMASK(UEIE), 0
extern volatile __bit                   PIDEF               @ (((unsigned) &UEIR)*8) + 0;
#define                                 PIDEF_bit           BANKMASK(UEIR), 0
extern volatile __bit                   PKTDIS              @ (((unsigned) &UCON)*8) + 4;
#define                                 PKTDIS_bit          BANKMASK(UCON), 4
extern volatile __bit                   POR                 @ (((unsigned) &RCON)*8) + 1;
#define                                 POR_bit             BANKMASK(RCON), 1
extern volatile __bit                   PPB0                @ (((unsigned) &UCFG)*8) + 0;
#define                                 PPB0_bit            BANKMASK(UCFG), 0
extern volatile __bit                   PPB1                @ (((unsigned) &UCFG)*8) + 1;
#define                                 PPB1_bit            BANKMASK(UCFG), 1
extern volatile __bit                   PPBI                @ (((unsigned) &USTAT)*8) + 1;
#define                                 PPBI_bit            BANKMASK(USTAT), 1
extern volatile __bit                   PPBRST              @ (((unsigned) &UCON)*8) + 6;
#define                                 PPBRST_bit          BANKMASK(UCON), 6
extern volatile __bit                   PRI_SD              @ (((unsigned) &OSCCON2)*8) + 2;
#define                                 PRI_SD_bit          BANKMASK(OSCCON2), 2
extern volatile __bit                   PRSEN               @ (((unsigned) &PWM1CON)*8) + 7;
#define                                 PRSEN_bit           BANKMASK(PWM1CON), 7
extern volatile __bit                   PSA                 @ (((unsigned) &T0CON)*8) + 3;
#define                                 PSA_bit             BANKMASK(T0CON), 3
extern volatile __bit                   PSSAC0              @ (((unsigned) &ECCP1AS)*8) + 2;
#define                                 PSSAC0_bit          BANKMASK(ECCP1AS), 2
extern volatile __bit                   PSSAC1              @ (((unsigned) &ECCP1AS)*8) + 3;
#define                                 PSSAC1_bit          BANKMASK(ECCP1AS), 3
extern volatile __bit                   PSSBD0              @ (((unsigned) &ECCP1AS)*8) + 0;
#define                                 PSSBD0_bit          BANKMASK(ECCP1AS), 0
extern volatile __bit                   PSSBD1              @ (((unsigned) &ECCP1AS)*8) + 1;
#define                                 PSSBD1_bit          BANKMASK(ECCP1AS), 1
extern volatile __bit                   PVCFG0              @ (((unsigned) &ADCON1)*8) + 2;
#define                                 PVCFG0_bit          BANKMASK(ADCON1), 2
extern volatile __bit                   PVCFG1              @ (((unsigned) &ADCON1)*8) + 3;
#define                                 PVCFG1_bit          BANKMASK(ADCON1), 3
extern volatile __bit                   RA0                 @ (((unsigned) &PORTA)*8) + 0;
#define                                 RA0_bit             BANKMASK(PORTA), 0
extern volatile __bit                   RA1                 @ (((unsigned) &PORTA)*8) + 1;
#define                                 RA1_bit             BANKMASK(PORTA), 1
extern volatile __bit                   RA2                 @ (((unsigned) &PORTA)*8) + 2;
#define                                 RA2_bit             BANKMASK(PORTA), 2
extern volatile __bit                   RA3                 @ (((unsigned) &PORTA)*8) + 3;
#define                                 RA3_bit             BANKMASK(PORTA), 3
extern volatile __bit _DEPRECATED       RA4                 @ (((unsigned) &PORTA)*8) + 4;
#define                                 RA4_bit             BANKMASK(PORTA), 4
extern volatile __bit _DEPRECATED       RA5                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 RA5_bit             BANKMASK(PORTA), 5
extern volatile __bit                   RA6                 @ (((unsigned) &PORTA)*8) + 6;
#define                                 RA6_bit             BANKMASK(PORTA), 6
extern volatile __bit                   RA7                 @ (((unsigned) &PORTA)*8) + 7;
#define                                 RA7_bit             BANKMASK(PORTA), 7
extern volatile __bit                   RABIE               @ (((unsigned) &INTCON)*8) + 3;
#define                                 RABIE_bit           BANKMASK(INTCON), 3
extern volatile __bit                   RABIF               @ (((unsigned) &INTCON)*8) + 0;
#define                                 RABIF_bit           BANKMASK(INTCON), 0
extern volatile __bit                   RABIP               @ (((unsigned) &INTCON2)*8) + 0;
#define                                 RABIP_bit           BANKMASK(INTCON2), 0
extern volatile __bit                   RABPU               @ (((unsigned) &INTCON2)*8) + 7;
#define                                 RABPU_bit           BANKMASK(INTCON2), 7
extern volatile __bit                   RB0                 @ (((unsigned) &PORTB)*8) + 0;
#define                                 RB0_bit             BANKMASK(PORTB), 0
extern volatile __bit                   RB1                 @ (((unsigned) &PORTB)*8) + 1;
#define                                 RB1_bit             BANKMASK(PORTB), 1
extern volatile __bit                   RB2                 @ (((unsigned) &PORTB)*8) + 2;
#define                                 RB2_bit             BANKMASK(PORTB), 2
extern volatile __bit                   RB3                 @ (((unsigned) &PORTB)*8) + 3;
#define                                 RB3_bit             BANKMASK(PORTB), 3
extern volatile __bit _DEPRECATED       RB4                 @ (((unsigned) &PORTB)*8) + 4;
#define                                 RB4_bit             BANKMASK(PORTB), 4
extern volatile __bit _DEPRECATED       RB5                 @ (((unsigned) &PORTB)*8) + 5;
#define                                 RB5_bit             BANKMASK(PORTB), 5
extern volatile __bit _DEPRECATED       RB6                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 RB6_bit             BANKMASK(PORTB), 6
extern volatile __bit _DEPRECATED       RB7                 @ (((unsigned) &PORTB)*8) + 7;
#define                                 RB7_bit             BANKMASK(PORTB), 7
extern volatile __bit                   RBIE                @ (((unsigned) &INTCON)*8) + 3;
#define                                 RBIE_bit            BANKMASK(INTCON), 3
extern volatile __bit                   RBIF                @ (((unsigned) &INTCON)*8) + 0;
#define                                 RBIF_bit            BANKMASK(INTCON), 0
extern volatile __bit _DEPRECATED       RC0                 @ (((unsigned) &PORTC)*8) + 0;
#define                                 RC0_bit             BANKMASK(PORTC), 0
extern volatile __bit _DEPRECATED       RC1                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 RC1_bit             BANKMASK(PORTC), 1
extern volatile __bit                   RC1IE               @ (((unsigned) &PIE1)*8) + 5;
#define                                 RC1IE_bit           BANKMASK(PIE1), 5
extern volatile __bit                   RC1IF               @ (((unsigned) &PIR1)*8) + 5;
#define                                 RC1IF_bit           BANKMASK(PIR1), 5
extern volatile __bit                   RC1IP               @ (((unsigned) &IPR1)*8) + 5;
#define                                 RC1IP_bit           BANKMASK(IPR1), 5
extern volatile __bit _DEPRECATED       RC2                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 RC2_bit             BANKMASK(PORTC), 2
extern volatile __bit _DEPRECATED       RC3                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 RC3_bit             BANKMASK(PORTC), 3
extern volatile __bit _DEPRECATED       RC4                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 RC4_bit             BANKMASK(PORTC), 4
extern volatile __bit _DEPRECATED       RC5                 @ (((unsigned) &PORTC)*8) + 5;
#define                                 RC5_bit             BANKMASK(PORTC), 5
extern volatile __bit _DEPRECATED       RC6                 @ (((unsigned) &PORTC)*8) + 6;
#define                                 RC6_bit             BANKMASK(PORTC), 6
extern volatile __bit _DEPRECATED       RC7                 @ (((unsigned) &PORTC)*8) + 7;
#define                                 RC7_bit             BANKMASK(PORTC), 7
extern volatile __bit                   RC8_9               @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RC8_9_bit           BANKMASK(RCSTA), 6
extern volatile __bit                   RC9                 @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RC9_bit             BANKMASK(RCSTA), 6
extern volatile __bit                   RCD8                @ (((unsigned) &RCSTA)*8) + 0;
#define                                 RCD8_bit            BANKMASK(RCSTA), 0
extern volatile __bit                   RCEN                @ (((unsigned) &SSPCON2)*8) + 3;
#define                                 RCEN_bit            BANKMASK(SSPCON2), 3
extern volatile __bit                   RCIDL               @ (((unsigned) &BAUDCON)*8) + 6;
#define                                 RCIDL_bit           BANKMASK(BAUDCON), 6
extern volatile __bit                   RCIE                @ (((unsigned) &PIE1)*8) + 5;
#define                                 RCIE_bit            BANKMASK(PIE1), 5
extern volatile __bit                   RCIF                @ (((unsigned) &PIR1)*8) + 5;
#define                                 RCIF_bit            BANKMASK(PIR1), 5
extern volatile __bit                   RCIP                @ (((unsigned) &IPR1)*8) + 5;
#define                                 RCIP_bit            BANKMASK(IPR1), 5
extern volatile __bit                   RD                  @ (((unsigned) &EECON1)*8) + 0;
#define                                 RD_bit              BANKMASK(EECON1), 0
extern volatile __bit                   RD163               @ (((unsigned) &T3CON)*8) + 7;
#define                                 RD163_bit           BANKMASK(T3CON), 7
extern volatile __bit                   RESUME              @ (((unsigned) &UCON)*8) + 2;
#define                                 RESUME_bit          BANKMASK(UCON), 2
extern volatile __bit                   RI                  @ (((unsigned) &RCON)*8) + 4;
#define                                 RI_bit              BANKMASK(RCON), 4
extern volatile __bit                   RJPU                @ (((unsigned) &PORTA)*8) + 7;
#define                                 RJPU_bit            BANKMASK(PORTA), 7
extern volatile __bit                   RSEN                @ (((unsigned) &SSPCON2)*8) + 1;
#define                                 RSEN_bit            BANKMASK(SSPCON2), 1
extern volatile __bit                   RW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 RW_bit              BANKMASK(SSPSTAT), 2
extern volatile __bit                   RX                  @ (((unsigned) &PORTB)*8) + 5;
#define                                 RX_bit              BANKMASK(PORTB), 5
extern volatile __bit                   RX9                 @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RX9_bit             BANKMASK(RCSTA), 6
extern volatile __bit                   RX9D                @ (((unsigned) &RCSTA)*8) + 0;
#define                                 RX9D_bit            BANKMASK(RCSTA), 0
extern volatile __bit                   RXCKP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 RXCKP_bit           BANKMASK(BAUDCON), 5
extern volatile __bit                   R_NOT_W             @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_NOT_W_bit         BANKMASK(SSPSTAT), 2
extern volatile __bit                   R_W                 @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_W_bit             BANKMASK(SSPSTAT), 2
extern volatile __bit                   R_nW                @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_nW_bit            BANKMASK(SSPSTAT), 2
extern volatile __bit                   SBOREN              @ (((unsigned) &RCON)*8) + 6;
#define                                 SBOREN_bit          BANKMASK(RCON), 6
extern volatile __bit                   SCK                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 SCK_bit             BANKMASK(PORTB), 6
extern volatile __bit                   SCKP                @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 SCKP_bit            BANKMASK(BAUDCON), 4
extern volatile __bit                   SCL                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 SCL_bit             BANKMASK(PORTB), 6
extern volatile __bit                   SCS                 @ (((unsigned) &OSCCON)*8) + 0;
#define                                 SCS_bit             BANKMASK(OSCCON), 0
extern volatile __bit                   SCS0                @ (((unsigned) &OSCCON)*8) + 0;
#define                                 SCS0_bit            BANKMASK(OSCCON), 0
extern volatile __bit                   SCS1                @ (((unsigned) &OSCCON)*8) + 1;
#define                                 SCS1_bit            BANKMASK(OSCCON), 1
extern volatile __bit                   SDA                 @ (((unsigned) &PORTB)*8) + 4;
#define                                 SDA_bit             BANKMASK(PORTB), 4
extern volatile __bit                   SDI                 @ (((unsigned) &PORTB)*8) + 4;
#define                                 SDI_bit             BANKMASK(PORTB), 4
extern volatile __bit                   SDO                 @ (((unsigned) &PORTC)*8) + 7;
#define                                 SDO_bit             BANKMASK(PORTC), 7
extern volatile __bit                   SE0                 @ (((unsigned) &UCON)*8) + 5;
#define                                 SE0_bit             BANKMASK(UCON), 5
extern volatile __bit                   SEN                 @ (((unsigned) &SSPCON2)*8) + 0;
#define                                 SEN_bit             BANKMASK(SSPCON2), 0
extern volatile __bit                   SENDB               @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB_bit           BANKMASK(TXSTA), 3
extern volatile __bit                   SENDB1              @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB1_bit          BANKMASK(TXSTA), 3
extern volatile __bit                   SLRA                @ (((unsigned) &SLRCON)*8) + 0;
#define                                 SLRA_bit            BANKMASK(SLRCON), 0
extern volatile __bit                   SLRB                @ (((unsigned) &SLRCON)*8) + 1;
#define                                 SLRB_bit            BANKMASK(SLRCON), 1
extern volatile __bit                   SLRC                @ (((unsigned) &SLRCON)*8) + 2;
#define                                 SLRC_bit            BANKMASK(SLRCON), 2
extern volatile __bit                   SMP                 @ (((unsigned) &SSPSTAT)*8) + 7;
#define                                 SMP_bit             BANKMASK(SSPSTAT), 7
extern volatile __bit                   SOFIE               @ (((unsigned) &UIE)*8) + 6;
#define                                 SOFIE_bit           BANKMASK(UIE), 6
extern volatile __bit                   SOFIF               @ (((unsigned) &UIR)*8) + 6;
#define                                 SOFIF_bit           BANKMASK(UIR), 6
extern volatile __bit                   SOSCEN              @ (((unsigned) &T1CON)*8) + 3;
#define                                 SOSCEN_bit          BANKMASK(T1CON), 3
extern volatile __bit                   SOSCEN3             @ (((unsigned) &T3CON)*8) + 3;
#define                                 SOSCEN3_bit         BANKMASK(T3CON), 3
extern volatile __bit                   SP0                 @ (((unsigned) &STKPTR)*8) + 0;
#define                                 SP0_bit             BANKMASK(STKPTR), 0
extern volatile __bit                   SP1                 @ (((unsigned) &STKPTR)*8) + 1;
#define                                 SP1_bit             BANKMASK(STKPTR), 1
extern volatile __bit                   SP2                 @ (((unsigned) &STKPTR)*8) + 2;
#define                                 SP2_bit             BANKMASK(STKPTR), 2
extern volatile __bit                   SP3                 @ (((unsigned) &STKPTR)*8) + 3;
#define                                 SP3_bit             BANKMASK(STKPTR), 3
extern volatile __bit                   SP4                 @ (((unsigned) &STKPTR)*8) + 4;
#define                                 SP4_bit             BANKMASK(STKPTR), 4
extern volatile __bit                   SPEN                @ (((unsigned) &RCSTA)*8) + 7;
#define                                 SPEN_bit            BANKMASK(RCSTA), 7
extern volatile __bit                   SPLLEN              @ (((unsigned) &OSCTUNE)*8) + 6;
#define                                 SPLLEN_bit          BANKMASK(OSCTUNE), 6
extern volatile __bit                   SRCLK0              @ (((unsigned) &SRCON0)*8) + 4;
#define                                 SRCLK0_bit          BANKMASK(SRCON0), 4
extern volatile __bit                   SRCLK1              @ (((unsigned) &SRCON0)*8) + 5;
#define                                 SRCLK1_bit          BANKMASK(SRCON0), 5
extern volatile __bit                   SRCLK2              @ (((unsigned) &SRCON0)*8) + 6;
#define                                 SRCLK2_bit          BANKMASK(SRCON0), 6
extern volatile __bit                   SREN                @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SREN_bit            BANKMASK(RCSTA), 5
extern volatile __bit                   SRENA               @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SRENA_bit           BANKMASK(RCSTA), 5
extern volatile __bit                   SRLEN               @ (((unsigned) &SRCON0)*8) + 7;
#define                                 SRLEN_bit           BANKMASK(SRCON0), 7
extern volatile __bit                   SRNQEN              @ (((unsigned) &SRCON0)*8) + 2;
#define                                 SRNQEN_bit          BANKMASK(SRCON0), 2
extern volatile __bit                   SRPR                @ (((unsigned) &SRCON0)*8) + 0;
#define                                 SRPR_bit            BANKMASK(SRCON0), 0
extern volatile __bit                   SRPS                @ (((unsigned) &SRCON0)*8) + 1;
#define                                 SRPS_bit            BANKMASK(SRCON0), 1
extern volatile __bit                   SRQ                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 SRQ_bit             BANKMASK(PORTC), 4
extern volatile __bit                   SRQEN               @ (((unsigned) &SRCON0)*8) + 3;
#define                                 SRQEN_bit           BANKMASK(SRCON0), 3
extern volatile __bit                   SRRC1E              @ (((unsigned) &SRCON1)*8) + 0;
#define                                 SRRC1E_bit          BANKMASK(SRCON1), 0
extern volatile __bit                   SRRC2E              @ (((unsigned) &SRCON1)*8) + 1;
#define                                 SRRC2E_bit          BANKMASK(SRCON1), 1
extern volatile __bit                   SRRCKE              @ (((unsigned) &SRCON1)*8) + 2;
#define                                 SRRCKE_bit          BANKMASK(SRCON1), 2
extern volatile __bit                   SRRPE               @ (((unsigned) &SRCON1)*8) + 3;
#define                                 SRRPE_bit           BANKMASK(SRCON1), 3
extern volatile __bit                   SRSC1E              @ (((unsigned) &SRCON1)*8) + 4;
#define                                 SRSC1E_bit          BANKMASK(SRCON1), 4
extern volatile __bit                   SRSC2E              @ (((unsigned) &SRCON1)*8) + 5;
#define                                 SRSC2E_bit          BANKMASK(SRCON1), 5
extern volatile __bit                   SRSCKE              @ (((unsigned) &SRCON1)*8) + 6;
#define                                 SRSCKE_bit          BANKMASK(SRCON1), 6
extern volatile __bit                   SRSPE               @ (((unsigned) &SRCON1)*8) + 7;
#define                                 SRSPE_bit           BANKMASK(SRCON1), 7
extern volatile __bit                   SS                  @ (((unsigned) &PORTC)*8) + 6;
#define                                 SS_bit              BANKMASK(PORTC), 6
extern volatile __bit                   SSPEN               @ (((unsigned) &SSPCON1)*8) + 5;
#define                                 SSPEN_bit           BANKMASK(SSPCON1), 5
extern volatile __bit                   SSPIE               @ (((unsigned) &PIE1)*8) + 3;
#define                                 SSPIE_bit           BANKMASK(PIE1), 3
extern volatile __bit                   SSPIF               @ (((unsigned) &PIR1)*8) + 3;
#define                                 SSPIF_bit           BANKMASK(PIR1), 3
extern volatile __bit                   SSPIP               @ (((unsigned) &IPR1)*8) + 3;
#define                                 SSPIP_bit           BANKMASK(IPR1), 3
extern volatile __bit                   SSPM0               @ (((unsigned) &SSPCON1)*8) + 0;
#define                                 SSPM0_bit           BANKMASK(SSPCON1), 0
extern volatile __bit                   SSPM1               @ (((unsigned) &SSPCON1)*8) + 1;
#define                                 SSPM1_bit           BANKMASK(SSPCON1), 1
extern volatile __bit                   SSPM2               @ (((unsigned) &SSPCON1)*8) + 2;
#define                                 SSPM2_bit           BANKMASK(SSPCON1), 2
extern volatile __bit                   SSPM3               @ (((unsigned) &SSPCON1)*8) + 3;
#define                                 SSPM3_bit           BANKMASK(SSPCON1), 3
extern volatile __bit                   SSPOV               @ (((unsigned) &SSPCON1)*8) + 6;
#define                                 SSPOV_bit           BANKMASK(SSPCON1), 6
extern volatile __bit                   STALLIE             @ (((unsigned) &UIE)*8) + 5;
#define                                 STALLIE_bit         BANKMASK(UIE), 5
extern volatile __bit                   STALLIF             @ (((unsigned) &UIR)*8) + 5;
#define                                 STALLIF_bit         BANKMASK(UIR), 5
extern volatile __bit                   START               @ (((unsigned) &SSPSTAT)*8) + 3;
#define                                 START_bit           BANKMASK(SSPSTAT), 3
extern volatile __bit                   STKFUL              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKFUL_bit          BANKMASK(STKPTR), 7
extern volatile __bit                   STKOVF              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKOVF_bit          BANKMASK(STKPTR), 7
extern volatile __bit                   STKUNF              @ (((unsigned) &STKPTR)*8) + 6;
#define                                 STKUNF_bit          BANKMASK(STKPTR), 6
extern volatile __bit                   STOP                @ (((unsigned) &SSPSTAT)*8) + 4;
#define                                 STOP_bit            BANKMASK(SSPSTAT), 4
extern volatile __bit                   STRA                @ (((unsigned) &PSTRCON)*8) + 0;
#define                                 STRA_bit            BANKMASK(PSTRCON), 0
extern volatile __bit                   STRB                @ (((unsigned) &PSTRCON)*8) + 1;
#define                                 STRB_bit            BANKMASK(PSTRCON), 1
extern volatile __bit                   STRC                @ (((unsigned) &PSTRCON)*8) + 2;
#define                                 STRC_bit            BANKMASK(PSTRCON), 2
extern volatile __bit                   STRD                @ (((unsigned) &PSTRCON)*8) + 3;
#define                                 STRD_bit            BANKMASK(PSTRCON), 3
extern volatile __bit                   STRSYNC             @ (((unsigned) &PSTRCON)*8) + 4;
#define                                 STRSYNC_bit         BANKMASK(PSTRCON), 4
extern volatile __bit                   SUSPND              @ (((unsigned) &UCON)*8) + 1;
#define                                 SUSPND_bit          BANKMASK(UCON), 1
extern volatile __bit                   SWDTE               @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTE_bit           BANKMASK(WDTCON), 0
extern volatile __bit                   SWDTEN              @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTEN_bit          BANKMASK(WDTCON), 0
extern volatile __bit                   SYNC                @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC_bit            BANKMASK(TXSTA), 4
extern volatile __bit                   SYNC1               @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC1_bit           BANKMASK(TXSTA), 4
extern volatile __bit                   T08BIT              @ (((unsigned) &T0CON)*8) + 6;
#define                                 T08BIT_bit          BANKMASK(T0CON), 6
extern volatile __bit                   T0CKI               @ (((unsigned) &PORTC)*8) + 5;
#define                                 T0CKI_bit           BANKMASK(PORTC), 5
extern volatile __bit                   T0CS                @ (((unsigned) &T0CON)*8) + 5;
#define                                 T0CS_bit            BANKMASK(T0CON), 5
extern volatile __bit                   T0IE                @ (((unsigned) &INTCON)*8) + 5;
#define                                 T0IE_bit            BANKMASK(INTCON), 5
extern volatile __bit                   T0IF                @ (((unsigned) &INTCON)*8) + 2;
#define                                 T0IF_bit            BANKMASK(INTCON), 2
extern volatile __bit                   T0PS0               @ (((unsigned) &T0CON)*8) + 0;
#define                                 T0PS0_bit           BANKMASK(T0CON), 0
extern volatile __bit                   T0PS1               @ (((unsigned) &T0CON)*8) + 1;
#define                                 T0PS1_bit           BANKMASK(T0CON), 1
extern volatile __bit                   T0PS2               @ (((unsigned) &T0CON)*8) + 2;
#define                                 T0PS2_bit           BANKMASK(T0CON), 2
extern volatile __bit                   T0SE                @ (((unsigned) &T0CON)*8) + 4;
#define                                 T0SE_bit            BANKMASK(T0CON), 4
extern volatile __bit                   T13CKI              @ (((unsigned) &PORTC)*8) + 6;
#define                                 T13CKI_bit          BANKMASK(PORTC), 6
extern volatile __bit                   T1CKPS0             @ (((unsigned) &T1CON)*8) + 4;
#define                                 T1CKPS0_bit         BANKMASK(T1CON), 4
extern volatile __bit                   T1CKPS1             @ (((unsigned) &T1CON)*8) + 5;
#define                                 T1CKPS1_bit         BANKMASK(T1CON), 5
extern volatile __bit                   T1OSCEN             @ (((unsigned) &T1CON)*8) + 3;
#define                                 T1OSCEN_bit         BANKMASK(T1CON), 3
extern volatile __bit                   T1OSCI              @ (((unsigned) &PORTC)*8) + 6;
#define                                 T1OSCI_bit          BANKMASK(PORTC), 6
extern volatile __bit                   T1OSCO              @ (((unsigned) &PORTC)*8) + 7;
#define                                 T1OSCO_bit          BANKMASK(PORTC), 7
extern volatile __bit                   T1RD16              @ (((unsigned) &T1CON)*8) + 7;
#define                                 T1RD16_bit          BANKMASK(T1CON), 7
extern volatile __bit                   T1RUN               @ (((unsigned) &T1CON)*8) + 6;
#define                                 T1RUN_bit           BANKMASK(T1CON), 6
extern volatile __bit                   T1SYNC              @ (((unsigned) &T1CON)*8) + 2;
#define                                 T1SYNC_bit          BANKMASK(T1CON), 2
extern volatile __bit                   T2CKPS0             @ (((unsigned) &T2CON)*8) + 0;
#define                                 T2CKPS0_bit         BANKMASK(T2CON), 0
extern volatile __bit                   T2CKPS1             @ (((unsigned) &T2CON)*8) + 1;
#define                                 T2CKPS1_bit         BANKMASK(T2CON), 1
extern volatile __bit                   T2OUTPS0            @ (((unsigned) &T2CON)*8) + 3;
#define                                 T2OUTPS0_bit        BANKMASK(T2CON), 3
extern volatile __bit                   T2OUTPS1            @ (((unsigned) &T2CON)*8) + 4;
#define                                 T2OUTPS1_bit        BANKMASK(T2CON), 4
extern volatile __bit                   T2OUTPS2            @ (((unsigned) &T2CON)*8) + 5;
#define                                 T2OUTPS2_bit        BANKMASK(T2CON), 5
extern volatile __bit                   T2OUTPS3            @ (((unsigned) &T2CON)*8) + 6;
#define                                 T2OUTPS3_bit        BANKMASK(T2CON), 6
extern volatile __bit                   T3CCP1              @ (((unsigned) &T3CON)*8) + 3;
#define                                 T3CCP1_bit          BANKMASK(T3CON), 3
extern volatile __bit                   T3CKPS0             @ (((unsigned) &T3CON)*8) + 4;
#define                                 T3CKPS0_bit         BANKMASK(T3CON), 4
extern volatile __bit                   T3CKPS1             @ (((unsigned) &T3CON)*8) + 5;
#define                                 T3CKPS1_bit         BANKMASK(T3CON), 5
extern volatile __bit                   T3RD16              @ (((unsigned) &T3CON)*8) + 7;
#define                                 T3RD16_bit          BANKMASK(T3CON), 7
extern volatile __bit                   T3SYNC              @ (((unsigned) &T3CON)*8) + 2;
#define                                 T3SYNC_bit          BANKMASK(T3CON), 2
extern volatile __bit                   TMR0IE              @ (((unsigned) &INTCON)*8) + 5;
#define                                 TMR0IE_bit          BANKMASK(INTCON), 5
extern volatile __bit                   TMR0IF              @ (((unsigned) &INTCON)*8) + 2;
#define                                 TMR0IF_bit          BANKMASK(INTCON), 2
extern volatile __bit                   TMR0IP              @ (((unsigned) &INTCON2)*8) + 2;
#define                                 TMR0IP_bit          BANKMASK(INTCON2), 2
extern volatile __bit                   TMR0ON              @ (((unsigned) &T0CON)*8) + 7;
#define                                 TMR0ON_bit          BANKMASK(T0CON), 7
extern volatile __bit                   TMR1CS              @ (((unsigned) &T1CON)*8) + 1;
#define                                 TMR1CS_bit          BANKMASK(T1CON), 1
extern volatile __bit                   TMR1IE              @ (((unsigned) &PIE1)*8) + 0;
#define                                 TMR1IE_bit          BANKMASK(PIE1), 0
extern volatile __bit                   TMR1IF              @ (((unsigned) &PIR1)*8) + 0;
#define                                 TMR1IF_bit          BANKMASK(PIR1), 0
extern volatile __bit                   TMR1IP              @ (((unsigned) &IPR1)*8) + 0;
#define                                 TMR1IP_bit          BANKMASK(IPR1), 0
extern volatile __bit                   TMR1ON              @ (((unsigned) &T1CON)*8) + 0;
#define                                 TMR1ON_bit          BANKMASK(T1CON), 0
extern volatile __bit                   TMR2IE              @ (((unsigned) &PIE1)*8) + 1;
#define                                 TMR2IE_bit          BANKMASK(PIE1), 1
extern volatile __bit                   TMR2IF              @ (((unsigned) &PIR1)*8) + 1;
#define                                 TMR2IF_bit          BANKMASK(PIR1), 1
extern volatile __bit                   TMR2IP              @ (((unsigned) &IPR1)*8) + 1;
#define                                 TMR2IP_bit          BANKMASK(IPR1), 1
extern volatile __bit                   TMR2ON              @ (((unsigned) &T2CON)*8) + 2;
#define                                 TMR2ON_bit          BANKMASK(T2CON), 2
extern volatile __bit                   TMR3CS              @ (((unsigned) &T3CON)*8) + 1;
#define                                 TMR3CS_bit          BANKMASK(T3CON), 1
extern volatile __bit                   TMR3IE              @ (((unsigned) &PIE2)*8) + 1;
#define                                 TMR3IE_bit          BANKMASK(PIE2), 1
extern volatile __bit                   TMR3IF              @ (((unsigned) &PIR2)*8) + 1;
#define                                 TMR3IF_bit          BANKMASK(PIR2), 1
extern volatile __bit                   TMR3IP              @ (((unsigned) &IPR2)*8) + 1;
#define                                 TMR3IP_bit          BANKMASK(IPR2), 1
extern volatile __bit                   TMR3ON              @ (((unsigned) &T3CON)*8) + 0;
#define                                 TMR3ON_bit          BANKMASK(T3CON), 0
extern volatile __bit                   TO                  @ (((unsigned) &RCON)*8) + 3;
#define                                 TO_bit              BANKMASK(RCON), 3
extern volatile __bit                   TRISA4              @ (((unsigned) &TRISA)*8) + 4;
#define                                 TRISA4_bit          BANKMASK(TRISA), 4
extern volatile __bit                   TRISA5              @ (((unsigned) &TRISA)*8) + 5;
#define                                 TRISA5_bit          BANKMASK(TRISA), 5
extern volatile __bit                   TRISB4              @ (((unsigned) &TRISB)*8) + 4;
#define                                 TRISB4_bit          BANKMASK(TRISB), 4
extern volatile __bit                   TRISB5              @ (((unsigned) &TRISB)*8) + 5;
#define                                 TRISB5_bit          BANKMASK(TRISB), 5
extern volatile __bit                   TRISB6              @ (((unsigned) &TRISB)*8) + 6;
#define                                 TRISB6_bit          BANKMASK(TRISB), 6
extern volatile __bit                   TRISB7              @ (((unsigned) &TRISB)*8) + 7;
#define                                 TRISB7_bit          BANKMASK(TRISB), 7
extern volatile __bit                   TRISC0              @ (((unsigned) &TRISC)*8) + 0;
#define                                 TRISC0_bit          BANKMASK(TRISC), 0
extern volatile __bit                   TRISC1              @ (((unsigned) &TRISC)*8) + 1;
#define                                 TRISC1_bit          BANKMASK(TRISC), 1
extern volatile __bit                   TRISC2              @ (((unsigned) &TRISC)*8) + 2;
#define                                 TRISC2_bit          BANKMASK(TRISC), 2
extern volatile __bit                   TRISC3              @ (((unsigned) &TRISC)*8) + 3;
#define                                 TRISC3_bit          BANKMASK(TRISC), 3
extern volatile __bit                   TRISC4              @ (((unsigned) &TRISC)*8) + 4;
#define                                 TRISC4_bit          BANKMASK(TRISC), 4
extern volatile __bit                   TRISC5              @ (((unsigned) &TRISC)*8) + 5;
#define                                 TRISC5_bit          BANKMASK(TRISC), 5
extern volatile __bit                   TRISC6              @ (((unsigned) &TRISC)*8) + 6;
#define                                 TRISC6_bit          BANKMASK(TRISC), 6
extern volatile __bit                   TRISC7              @ (((unsigned) &TRISC)*8) + 7;
#define                                 TRISC7_bit          BANKMASK(TRISC), 7
extern volatile __bit                   TRMT                @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT_bit            BANKMASK(TXSTA), 1
extern volatile __bit                   TRMT1               @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT1_bit           BANKMASK(TXSTA), 1
extern volatile __bit                   TRNIE               @ (((unsigned) &UIE)*8) + 3;
#define                                 TRNIE_bit           BANKMASK(UIE), 3
extern volatile __bit                   TRNIF               @ (((unsigned) &UIR)*8) + 3;
#define                                 TRNIF_bit           BANKMASK(UIR), 3
extern volatile __bit                   TUN0                @ (((unsigned) &OSCTUNE)*8) + 0;
#define                                 TUN0_bit            BANKMASK(OSCTUNE), 0
extern volatile __bit                   TUN1                @ (((unsigned) &OSCTUNE)*8) + 1;
#define                                 TUN1_bit            BANKMASK(OSCTUNE), 1
extern volatile __bit                   TUN2                @ (((unsigned) &OSCTUNE)*8) + 2;
#define                                 TUN2_bit            BANKMASK(OSCTUNE), 2
extern volatile __bit                   TUN3                @ (((unsigned) &OSCTUNE)*8) + 3;
#define                                 TUN3_bit            BANKMASK(OSCTUNE), 3
extern volatile __bit                   TUN4                @ (((unsigned) &OSCTUNE)*8) + 4;
#define                                 TUN4_bit            BANKMASK(OSCTUNE), 4
extern volatile __bit                   TUN5                @ (((unsigned) &OSCTUNE)*8) + 5;
#define                                 TUN5_bit            BANKMASK(OSCTUNE), 5
extern volatile __bit                   TX                  @ (((unsigned) &PORTB)*8) + 7;
#define                                 TX_bit              BANKMASK(PORTB), 7
extern volatile __bit                   TX1IE               @ (((unsigned) &PIE1)*8) + 4;
#define                                 TX1IE_bit           BANKMASK(PIE1), 4
extern volatile __bit                   TX1IF               @ (((unsigned) &PIR1)*8) + 4;
#define                                 TX1IF_bit           BANKMASK(PIR1), 4
extern volatile __bit                   TX1IP               @ (((unsigned) &IPR1)*8) + 4;
#define                                 TX1IP_bit           BANKMASK(IPR1), 4
extern volatile __bit                   TX8_9               @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX8_9_bit           BANKMASK(TXSTA), 6
extern volatile __bit                   TX9                 @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX9_bit             BANKMASK(TXSTA), 6
extern volatile __bit                   TX91                @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX91_bit            BANKMASK(TXSTA), 6
extern volatile __bit                   TX9D                @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D_bit            BANKMASK(TXSTA), 0
extern volatile __bit                   TX9D1               @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D1_bit           BANKMASK(TXSTA), 0
extern volatile __bit                   TXD8                @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TXD8_bit            BANKMASK(TXSTA), 0
extern volatile __bit                   TXEN                @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN_bit            BANKMASK(TXSTA), 5
extern volatile __bit                   TXEN1               @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN1_bit           BANKMASK(TXSTA), 5
extern volatile __bit                   TXIE                @ (((unsigned) &PIE1)*8) + 4;
#define                                 TXIE_bit            BANKMASK(PIE1), 4
extern volatile __bit                   TXIF                @ (((unsigned) &PIR1)*8) + 4;
#define                                 TXIF_bit            BANKMASK(PIR1), 4
extern volatile __bit                   TXIP                @ (((unsigned) &IPR1)*8) + 4;
#define                                 TXIP_bit            BANKMASK(IPR1), 4
extern volatile __bit                   UA                  @ (((unsigned) &SSPSTAT)*8) + 1;
#define                                 UA_bit              BANKMASK(SSPSTAT), 1
extern volatile __bit                   UERRIE              @ (((unsigned) &UIE)*8) + 1;
#define                                 UERRIE_bit          BANKMASK(UIE), 1
extern volatile __bit                   UERRIF              @ (((unsigned) &UIR)*8) + 1;
#define                                 UERRIF_bit          BANKMASK(UIR), 1
extern volatile __bit                   ULPWUIN             @ (((unsigned) &PORTA)*8) + 0;
#define                                 ULPWUIN_bit         BANKMASK(PORTA), 0
extern volatile __bit                   UPP0                @ (((unsigned) &UCFG)*8) + 0;
#define                                 UPP0_bit            BANKMASK(UCFG), 0
extern volatile __bit                   UPP1                @ (((unsigned) &UCFG)*8) + 1;
#define                                 UPP1_bit            BANKMASK(UCFG), 1
extern volatile __bit                   UPUEN               @ (((unsigned) &UCFG)*8) + 4;
#define                                 UPUEN_bit           BANKMASK(UCFG), 4
extern volatile __bit                   URSTIE              @ (((unsigned) &UIE)*8) + 0;
#define                                 URSTIE_bit          BANKMASK(UIE), 0
extern volatile __bit                   URSTIF              @ (((unsigned) &UIR)*8) + 0;
#define                                 URSTIF_bit          BANKMASK(UIR), 0
extern volatile __bit                   USBEN               @ (((unsigned) &UCON)*8) + 3;
#define                                 USBEN_bit           BANKMASK(UCON), 3
extern volatile __bit                   USBIE               @ (((unsigned) &PIE2)*8) + 2;
#define                                 USBIE_bit           BANKMASK(PIE2), 2
extern volatile __bit                   USBIF               @ (((unsigned) &PIR2)*8) + 2;
#define                                 USBIF_bit           BANKMASK(PIR2), 2
extern volatile __bit                   USBIP               @ (((unsigned) &IPR2)*8) + 2;
#define                                 USBIP_bit           BANKMASK(IPR2), 2
extern volatile __bit                   UTEYE               @ (((unsigned) &UCFG)*8) + 7;
#define                                 UTEYE_bit           BANKMASK(UCFG), 7
extern volatile __bit                   VREFM               @ (((unsigned) &PORTC)*8) + 1;
#define                                 VREFM_bit           BANKMASK(PORTC), 1
extern volatile __bit                   VREFP               @ (((unsigned) &PORTC)*8) + 0;
#define                                 VREFP_bit           BANKMASK(PORTC), 0
extern volatile __bit                   W4E                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 W4E_bit             BANKMASK(BAUDCON), 1
extern volatile __bit                   WAIT0               @ (((unsigned) &PR2)*8) + 4;
#define                                 WAIT0_bit           BANKMASK(PR2), 4
extern volatile __bit                   WAIT1               @ (((unsigned) &PR2)*8) + 5;
#define                                 WAIT1_bit           BANKMASK(PR2), 5
extern volatile __bit                   WCOL                @ (((unsigned) &SSPCON1)*8) + 7;
#define                                 WCOL_bit            BANKMASK(SSPCON1), 7
extern volatile __bit                   WM0                 @ (((unsigned) &PR2)*8) + 0;
#define                                 WM0_bit             BANKMASK(PR2), 0
extern volatile __bit                   WM1                 @ (((unsigned) &PR2)*8) + 1;
#define                                 WM1_bit             BANKMASK(PR2), 1
extern volatile __bit                   WPUA3               @ (((unsigned) &WPUA)*8) + 3;
#define                                 WPUA3_bit           BANKMASK(WPUA), 3
extern volatile __bit                   WPUA4               @ (((unsigned) &WPUA)*8) + 4;
#define                                 WPUA4_bit           BANKMASK(WPUA), 4
extern volatile __bit                   WPUA5               @ (((unsigned) &WPUA)*8) + 5;
#define                                 WPUA5_bit           BANKMASK(WPUA), 5
extern volatile __bit                   WPUB4               @ (((unsigned) &WPUB)*8) + 4;
#define                                 WPUB4_bit           BANKMASK(WPUB), 4
extern volatile __bit                   WPUB5               @ (((unsigned) &WPUB)*8) + 5;
#define                                 WPUB5_bit           BANKMASK(WPUB), 5
extern volatile __bit                   WPUB6               @ (((unsigned) &WPUB)*8) + 6;
#define                                 WPUB6_bit           BANKMASK(WPUB), 6
extern volatile __bit                   WPUB7               @ (((unsigned) &WPUB)*8) + 7;
#define                                 WPUB7_bit           BANKMASK(WPUB), 7
extern volatile __bit                   WR                  @ (((unsigned) &EECON1)*8) + 1;
#define                                 WR_bit              BANKMASK(EECON1), 1
extern volatile __bit                   WREN                @ (((unsigned) &EECON1)*8) + 2;
#define                                 WREN_bit            BANKMASK(EECON1), 2
extern volatile __bit                   WRERR               @ (((unsigned) &EECON1)*8) + 3;
#define                                 WRERR_bit           BANKMASK(EECON1), 3
extern volatile __bit                   WUE                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 WUE_bit             BANKMASK(BAUDCON), 1
extern volatile __bit                   ZERO                @ (((unsigned) &STATUS)*8) + 2;
#define                                 ZERO_bit            BANKMASK(STATUS), 2
extern volatile __bit                   nA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nA_bit              BANKMASK(SSPSTAT), 5
extern volatile __bit                   nADDRESS            @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nADDRESS_bit        BANKMASK(SSPSTAT), 5
extern volatile __bit                   nBOR                @ (((unsigned) &RCON)*8) + 0;
#define                                 nBOR_bit            BANKMASK(RCON), 0
extern volatile __bit                   nDONE               @ (((unsigned) &ADCON0)*8) + 1;
#define                                 nDONE_bit           BANKMASK(ADCON0), 1
extern volatile __bit                   nPD                 @ (((unsigned) &RCON)*8) + 2;
#define                                 nPD_bit             BANKMASK(RCON), 2
extern volatile __bit                   nPOR                @ (((unsigned) &RCON)*8) + 1;
#define                                 nPOR_bit            BANKMASK(RCON), 1
extern volatile __bit                   nRABPU              @ (((unsigned) &INTCON2)*8) + 7;
#define                                 nRABPU_bit          BANKMASK(INTCON2), 7
extern volatile __bit                   nRI                 @ (((unsigned) &RCON)*8) + 4;
#define                                 nRI_bit             BANKMASK(RCON), 4
extern volatile __bit                   nSS                 @ (((unsigned) &PORTC)*8) + 6;
#define                                 nSS_bit             BANKMASK(PORTC), 6
extern volatile __bit                   nT1SYNC             @ (((unsigned) &T1CON)*8) + 2;
#define                                 nT1SYNC_bit         BANKMASK(T1CON), 2
extern volatile __bit                   nT3SYNC             @ (((unsigned) &T3CON)*8) + 2;
#define                                 nT3SYNC_bit         BANKMASK(T3CON), 2
extern volatile __bit                   nTO                 @ (((unsigned) &RCON)*8) + 3;
#define                                 nTO_bit             BANKMASK(RCON), 3
extern volatile __bit                   nW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nW_bit              BANKMASK(SSPSTAT), 2
extern volatile __bit                   nWRITE              @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nWRITE_bit          BANKMASK(SSPSTAT), 2

#endif // _PIC18F14K50_H_
