#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#ifndef NULL
#define NULL ((void *)0)
#endif /*NULL*/

#include <stddef.h>

int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);
int int_index(int *array, int size, int (*cmp)(int));
void print_elem(int elem);
void print_elem_hex(int elem);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));
int _printf(const char *format, ...);
int _putchar(char c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int i);
int print_last_digit(int c);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
int multiple(int m, int n);
int _strlen(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int is_prime_helper(int n, int i);
int is_palindrome(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char **strtow(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif

