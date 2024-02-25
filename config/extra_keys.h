// Fills in keys beyond the base 34 key layout.
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

/////////////////////////////////////////////////
// The default layout has 34 keys. Additional keys can be added by pre-setting any of
// the macros defined in this file to one or more keys before sourcing this file.

// top row, left
#if !defined X_LT  
  #define X_LT
#endif

// middle row, left
#if !defined X_LM  
  #define X_LM
#endif

// bottom row, left
#if !defined X_LB  
  #define X_LB
#endif

// thumb row, left
#if !defined X_LH  
  #define X_LH
#endif

// top row, middle
#if !defined X_MT  
  #define X_MT
#endif

// middle row, middle
#if !defined X_MM  
  #define X_MM
#endif

// bottom row, middle
#if !defined X_MB  
  #define X_MB
#endif

// thumb row, middle
#if !defined X_MH  
  #define X_MH
#endif

// top row, right
#if !defined X_RT  
  #define X_RT
#endif

// middle row, right
#if !defined X_RM  
  #define X_RM
#endif

// bottom row, right
#if !defined X_RB  
  #define X_RB
#endif

// thumb row, right
#if !defined X_RH  
  #define X_RH
#endif
