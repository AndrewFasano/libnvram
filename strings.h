#ifndef INCLUDE_STRINGS_H
#define INCLUDE_STRINGS_H

#include "hypercall.h"
#include <stddef.h>

#define TARGET_VALUE "DYNVALDYNVALDYNVAL"
extern char **environ;

size_t minimal_strlen(const char *s);
int minimal_strncmp(short do_log, size_t n, const char *s1, const char *s2);
int minimal_strcmp(const char *s1, const char *s2, short do_log);
char *minimal_getenv(const char *name);
char *getenv(const char *name);

#endif
