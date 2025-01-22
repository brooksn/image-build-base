#include <stdio.h>
FILE *fopen64(const char *path, const char *mode) { return fopen(path, mode); }
