// Defines the base keymap from which to derive keyboard specific maps.
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

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

#ifdef CONFIG_WIRELESS
    #include <dt-bindings/zmk/bt.h>
    #define _BT_SEL_KEYS_ &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_CLR
#else
    #define _BT_SEL_KEYS_ &trans &trans &trans &trans &trans
#endif

#include "zmk_helper.h"

#define DEF 0
#define FUN 1
#define NUM 2
#define NAV 3
#define SYS 4

// tap: comma | shift + tap: semicolon
SIMPLE_MORPH(comma_morph, SFT, &kp COMMA, &kp SEMICOLON)

// tap: dot | shift + tap: colon
SIMPLE_MORPH(dot_morph, SFT, &kp DOT, &kp COLON)

// tap: qmark | shift + tap: excl
SIMPLE_MORPH(qexcl, SFT, &kp QMARK, &kp EXCL)

#define XXX &none
#define ___ &trans

ZMK_LAYER(base,
//╭──────╮ ╭─────────────┬─────────────┬─────────────┬─────────────┬─────────────╮ ╭──────╮ ╭─────────────┬─────────────┬─────────────┬─────────────┬─────────────╮ ╭──────╮
    X_LT     &kp SQT       &comma_morph  &dot_morph    &kp P         &kp Y           X_MT     &kp F         &kp G         &kp C         &kp R         &kp L           X_RT
//├──────┤ ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤ ├──────┤ ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤ ├──────┤
    X_LM     &kp A         &kp O         &kp E         &kp U         &kp I           X_MM     &kp D         &kp H         &kp T         &kp N         &kp S           X_RM
//├──────┤ ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤ ├──────┤ ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤ ├──────┤
    X_LB     &qexcl        &kp Q         &kp J         &kp K         &kp X           X_MB     &kp B         &kp M         &kp W         &kp V         &kp Z           X_RB
//├──────┤ ╰─────────────┼─────────────┴─────────────┼─────────────┼─────────────┤ ├──────┤ ├─────────────┼─────────────┼─────────────┴───────────────────────────╯ ├──────┤
    X_LH                                               &kp BSPC      &kp DEL         X_MH     &kp RET       &kp SPACE                                                 X_RH
//╰──────╯                                           ╰─────────────┴─────────────╯ ╰──────╯ ╰─────────────┴─────────────╯                                           ╰──────╯
)
