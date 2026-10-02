#include <stdlib.h>

#ifndef LIBFT_H

#define LIBFT_H

#define TRUE 1
#define FALSE 0

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strchr(const char *str, int c);
void *ft_memset(void *ptr , int value , size_t bytes);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1 , const char *s2 , size_t n);
void ft_bzero(void *s , size_t n);




#endif 
