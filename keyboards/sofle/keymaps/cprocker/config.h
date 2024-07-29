#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define MASTER_LEFT

#define TAPPING_TERM_PER_KEY

#ifdef ENCODER_RESOLUTION
#    undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 2

#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 150

#undef MANUFACTURER
#define MANUFACTURER "CPRocker"