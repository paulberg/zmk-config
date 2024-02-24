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
// You should have received a copy of the GNU Affero General Public License// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include "extra_keys.h"
#include "timing.h"

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

// Includes needing layers defined
#include "combos.h"

//////////////////////////////
// Global behavior defalts

// mods deactivate caps-word, requires PR #1451
&caps_word {  
  /delete-property/ ignore-modifiers;
};

// mod-tap confg
&mt { 
    flavor = "tap-preferred";
    tapping-term-ms = <TAPPING_TERM>;
    quick-tap-ms = <TAPPING_TERM>;
    hold-trigger-key-positions = <0>;
};

// layer-tap config
&lt {
    flavor = "balanced";
    tapping-term-ms = <TAPPING_TERM>;
    quick-tap-ms = <QUICK_TAP_TERM>;
};

// sticky-key config
&sk {
    release-after-ms = <STICKY_TERM>;

    // no double capitalization when rolling keys
    quick-release;             
};

// sticky-layer config
&sl {
    // allow chording sticky mods & layers
    ignore-modifiers;
};

// Macro to create behaviors for home row mods by reducing cross hand false negatives
#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS) \
  ZMK_BEHAVIOR(NAME, hold_tap, \
    flavor = "balanced"; \
    tapping-term-ms = <TAPPING_TERM>; \
    quick-tap-ms = <QUICK_TAP_TERM>; \
    require-prior-idle-ms = <REQUIRE_PRIOR_IDLE_TERM>; \
    bindings = <HOLD>, <TAP>; \
    hold-trigger-key-positions = <TRIGGER_POS>; \
    hold-trigger-on-release; \
  )

// Left and right hand home row mods
//MAKE_HRM(hml, &kp, &kp, KEYS_R THUMBS)
//MAKE_HRM(hmr, &kp, &kp, KEYS_L THUMBS)

// Used for HRM combos
//MAKE_HRM(hml_repeat, &kp, &key_repeat, KEYS_R THUMBS)
//MAKE_HRM(hmr_lpar_lt, &kp, &lpar_lt, KEYS_L THUMBS)
//MAKE_HRM(hmr_rpar_gt, &kp, &rpar_gt, KEYS_L THUMBS)

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
