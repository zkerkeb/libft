#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_tolower(int c);
int ft_toupper(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_atoi(const char *nptr);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
char *ft_strdup(const char *s);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strcpy(char *dest, const char *src);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlen(const char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_putstr(char const *s);
void ft_putnbr(int n);
void ft_putchar(char c);
void ft_bzero(void *s, size_t n);

#endif 