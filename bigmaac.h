#define DEFAULT_MIN_BIGMAAC_SIZE (1024*1024*300) //300MB
#define DEFAULT_MIN_FRY_SIZE 0 // disabled
#define DEFAULT_TEMPLATE "/tmp/bigmaax.XXXXXXXX"
#define DEFAULT_MAX_BIGMAAC (1024L*1024*1024*512) //512GB
#define DEFAULT_MAX_FRIES (1024L*1024*1024*512) //512GB
#define DEFAULT_FRY_SIZE_MULTIPLE 256
void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void * ptr, size_t size);
void *reallocarray(void * ptr, size_t size,size_t count);
void free(void* ptr);

