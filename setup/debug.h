﻿#ifdef MEMDLEAK
#undef MEMDLEAK
#endif

#ifdef __APPLE__
#define MEMDLEAK 0
#else
#define MEMDLEAK 0
#endif
#define PREFER_MALLOC 0
#define BOUNDS_CHECK 0

//#define OBJECT_TYPE_COUNTER 1
#define OBJECT_REFERENCE_COUNT_DEBUG 0
#define OBJECT_TYPE_COUNTER 0
//#define OBJECT_REFERENCE_COUNT_DEBUG 0


#ifdef DEBUG
#define WITH_UNIT_TEST
#endif




