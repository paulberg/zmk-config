//                              34 KEY MATRIX / LAYOUT MAPPING
// Copyright Paul W. Berg

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

//  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
//  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
//  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
//  │ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
//  ╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
//              ╰────────┴────────╯                         ╰─────────┴─────────╯

#pragma once

// left-top row
#define LT0  4
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

// right-top row
#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

// left-middle row
#define LM0 14
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

// right-middle row
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

// left-bottom row
#define LB0 24
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20

// right-bottom row
#define RB0 25
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

// left thumb keys
#define LH0 31
#define LH1 30

// right thumb keys
#define RH0 32
#define RH1 33

// left hand
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4

// right hand
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4

// thumbs
#define THUMBS LH1 LH0 RH0 RH1