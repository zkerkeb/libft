#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_atoi(const char *nptr);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strcpy(char *dest, const char *src);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlen(const char *s);
void ft_putnbr(int n);
void ft_putchar(char c);

#endif 