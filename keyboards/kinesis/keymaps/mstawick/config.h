#ifndef CONFIG_USER_H
#define CONFIG_USER_H


#include "../../config.h"

// place overrides here
#undef IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD
#undef TAPPING_FORCE_HOLD
#undef HOLD_ON_OTHER_KEY_PRESS

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD  // make tap-then-hold _not_ do key auto repeat
// #define HOLD_ON_OTHER_KEY_PRESS

#define FORCE_NKRO

// #define TAPPING_TOGGLE 2


#endif
