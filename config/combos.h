// Defines combo keys
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

///////////////////////////////////////////////////
//                KEY POSITIONS
//  ╭─────────────────────╮ ╭─────────────────────╮
//  │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
//  │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
//  │ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │
//  ╰───────╮ LH2 LH1 LH0 │ │ RH0 RH1 RH2 ╭───────╯
//          ╰─────────────╯ ╰─────────────╯

// use require-prior-idle-ms for combos
#undef COMBO_HOOK
#define COMBO_HOOK require-prior-idle-ms = <REQUIRE_PRIOR_IDLE_TERM>;

// make homerow combos tap-only (so HRMs can be chorded instantaneously)
//#define HRC_TAB    &hml         LA(LCTRL) TAB
//#define HRC_REPEAT &hml_repeat  LS(LCTRL) 0
//#define HRC_LPAR   &hmr_lpar_lt RS(LCTRL) 0
//#define HRC_RPAR   &hmr_rpar_gt LA(LCTRL) 0

// Cross-hand combos
ZMK_COMBO(caps_word,&caps_word, LM1 RM1,     DEF NAV NUM, COMBO_TERM_SLOW)

// Horizontal combos - left hand
ZMK_COMBO(esc,   &kp ESC,       LT3 LT2,     DEF NAV NUM, COMBO_TERM_FAST)
//ZMK_COMBO(tab,   HRC_TAB,       LM3 LM2,     DEF NAV NUM, COMBO_TERM_FAST)
//ZMK_COMBO(repeat,HRC_REPEAT,    LM2 LM1,     DEF NAV NUM, COMBO_TERM_FAST)

// Horizontal combos - right hand
//ZMK_COMBO(lpar,  HRC_LPAR,      RM1 RM2,     DEF     NUM, COMBO_TERM_FAST)
//ZMK_COMBO(rpar,  HRC_RPAR,      RM2 RM3,     DEF     NUM, COMBO_TERM_FAST)
ZMK_COMBO(lbkt,  &kp LBKT,      RB1 RB2,     DEF     NUM, COMBO_TERM_FAST)
ZMK_COMBO(rbkt,  &kp RBKT,      RB2 RB3,     DEF     NUM, COMBO_TERM_FAST)

// Vertical combos - left hand
ZMK_COMBO(at,    &kp AT,        LT3 LM3,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(hash,  &kp HASH,      LT2 LM2,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(dllr,  &kp DLLR,      LT1 LM1,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(prcnt, &kp PRCNT,     LT0 LM0,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(grave, &kp GRAVE,     LM3 LB3,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(bslh,  &kp BSLH,      LM2 LB2,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(equal, &kp EQUAL,     LM1 LB1,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(tilde, &kp TILDE,     LM0 LB0,     DEF NAV NUM, COMBO_TERM_SLOW)

// Vertical combos - right hand
ZMK_COMBO(caret, &kp CARET,     RT0 RM0,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(plus,  &kp PLUS,      RT1 RM1,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(star,  &kp STAR,      RT2 RM2,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(amps,  &kp AMPS,      RT3 RM3,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(under, &kp UNDER,     RM0 RB0,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(minus, &kp MINUS,     RM1 RB1,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(fslh,  &kp FSLH,      RM2 RB2,     DEF NAV NUM, COMBO_TERM_SLOW)
ZMK_COMBO(pipe,  &kp PIPE,      RM3 RB3,     DEF NAV NUM, COMBO_TERM_SLOW)