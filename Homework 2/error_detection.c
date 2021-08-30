// What is wrong with the C code below?

int *ptr = malloc(4 * sizeof(int));
if (extra_large)
   ptr = malloc(10 * sizeof(int));
return ptr;

// Memory leak if extra_large is true