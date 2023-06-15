#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL ((void *)0)
#endif /*NULL*/

char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_digit(char c);
int multiply(char *num1, char *num2);

#endif

