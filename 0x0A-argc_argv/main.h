#ifndef MAIN_H
#define MAIN_H

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
int sum(int num);
float _pow(float base, int index);
int _atoi(char *s);
char *rot_cipher(char *s);
char *_strcat(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
char *leet(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn( char *str, char *charset);
int factorial(int n);
int _pow_recursion(int x, int y);
int is_prime_number(int n);
int wildcmp(char *s1, char *s2);

#endif
