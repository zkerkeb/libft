#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>

int ft_strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);
char *strcpy(char *dest, const char *src);
size_t ft_strlen(const char *s);
void ft_putnbr(int n);
void ft_putchar(char c);

#endif 