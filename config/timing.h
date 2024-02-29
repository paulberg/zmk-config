// Timing config for keystrokes
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

/////////////////
// All times are in ms

// When typing a combo, all keys must be pressed within the term.
// Fast and slow varients
#define COMBO_TERM_FAST 20
#define COMBO_TERM_SLOW 30

// If you press a tapped hold-tap again within the term of the first press,
// it will always trigger the tap behavior. This is useful for things like a
// backspace, where a quick tap+hold holds backspace pressed.
// Set this to a negative value to disable.
#define QUICK_TAP_TERM 175

// Similar to QUICK_TAP_TERM, however it will apply for any non-modifier key
// pressed before it. This effectively disables the hold-tap when typing quickly,
// which can be quite useful for homerow mods. It can also have the effect of
// removing the input delay when typing quickly.
#define REQUIRE_PRIOR_IDLE_TERM 150

// How long a sticky key stays active before releasing if no other key pressed.
#define STICKY_TERM 1000

// Defines how long a key must be pressed to trigger Hold behavior.
#define TAPPING_TERM 220
