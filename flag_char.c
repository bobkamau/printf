#include "main.h"

unsigned int _memcpy(buffer_t *output, const char *src, unsigned int n);
void free_buffer(buffer_t *output);
buffer_t *init_buffer(void);


/**
 * _memcpy - Copies n bytes from memory area src to
 *            the buffer contained in a buffer_t struct.
 *@output: A buffer_t struct.
 *@src: A pointer to the memory area to copy.

