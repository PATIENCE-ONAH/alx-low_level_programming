C - MALLOC, FREE

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).
