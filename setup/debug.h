#ifdef MEMDLEAK
#undef MEMDLEAK
#endif

#ifdef __APPLE__
#define MEMDLEAK 0
#else
#define MEMDLEAK 0
#endif
#define PREFER_MALLOC 0
#define BOUNDS_CHECK 0

//#define OBJ_TYP_CTR 1
//#define OBJ_REF_DBG 1
#define OBJ_TYP_CTR 0
#define OBJ_REF_DBG 0



