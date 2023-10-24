#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _putchar(char c);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *rot13(char *);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
#endif /* MAIN_H */