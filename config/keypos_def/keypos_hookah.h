/* This file is copied and then modified from https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h
 * LICENSE for that repo is inlined below.

 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * Edited by Bharat G
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*                              42 + Encoder KEY MATRIX / LAYOUT MAPPING

   0  1  2  3  4  5 |  6  7  8  9 10 11    LT5 LT4 LT3 LT2 LT1 LT0 | RT0 RT1 RT2 RT3 RT4 RT5
  12 13 14 15 16 17 | 18 19 20 21 22 23    LM5 LM4 LM3 LM2 LM1 LM0 | RM0 RM1 RM2 RM3 RM4 RM5
  24 25 26 27 28 29 | 30 31 32 33 34 35    LB5 LB4 LB3 LB2 LB1 LB0 | RB0 RB1 RB2 RB3 RB4 RB5
        36 37 38 39 | 40 41 42 43                  LH3 LH2 LH1 LH0 | RH0 RH1 RH2 RH3
*/

#pragma once

#define LT5 0
#define LT4 1
#define LT3 2
#define LT2 3
#define LT1 4
#define LT0 5

#define RT0 6
#define RT1 7
#define RT2 8
#define RT3 9
#define RT4 10
#define RT5 11

#define LM5 12
#define LM4 13
#define LM3 14
#define LM2 15
#define LM1 16
#define LM0 17

#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB5 24
#define LB4 25
#define LB3 26
#define LB2 27
#define LB1 28
#define LB0 29

#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH3 36 // encoder left
#define LH2 37
#define LH1 38
#define LH0 39

#define RH0 40
#define RH1 41
#define RH2 42
#define RH3 43 // encoder right

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB1 LB2 LB3 LB4 LB5 // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB1 RB2 RB3 RB4 RB5 // right-hand keys
#define THUMBS LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3                                     // thumb keys
