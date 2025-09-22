#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>  // para size_t
# include <stdlib.h>  // para malloc, free
# include <unistd.h>  // para write

/* Parte 1 - Funções da libc reimplementadas */

// 1
int	ft_isalpha(int c);

// 2
int	ft_isdigit(int c);

// 3
int	ft_isalnum(int c);

// 4
int	ft_isascii(int c);

// 5
int	ft_isprint(int c);

// 6
int	ft_toupper(int c);

// 7
int	ft_tolower(int c);

// 8
size_t	ft_strlen(const char *s);

// 9
void	*ft_memset(void *s, int c, size_t n);

// 10
void	ft_bzero(void *s, size_t n);

// 11
void	*ft_memcpy(void *dest, const void *src, size_t n);

// 12
void	*ft_memmove(void *dest, const void *src, size_t n);

// 13
void	*ft_memchr(const void *s, int c, size_t n);

// 14
int	ft_memcmp(const void *s1, const void *s2, size_t n);

// 15
char	*ft_strchr(const char *s, int c);

// 16
char	*ft_strrchr(const char *s, int c);

// 17
int	ft_strncmp(const char *s1, const char *s2, size_t n);

// 18
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// 19
// size_t	ft_strlcat(char *dst, const char *src, size_t size);

// 20
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// 21
// int	ft_atoi(const char *nptr);

// 22
// void	*ft_calloc(size_t nmemb, size_t size);

// 23
// char	*ft_strdup(const char *s);

/* Parte 2 - Funções adicionais */

// 24
// char	*ft_substr(char const *s, unsigned int start, size_t len);

// 25
// char	*ft_strjoin(char const *s1, char const *s2);

// 26
// char	*ft_strtrim(char const *s1, char const *set);

// 27
// char	**ft_split(char const *s, char c);

// 28
// char	*ft_itoa(int n);

// 29
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// 30
// void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// 31
// void	ft_putchar_fd(char c, int fd);

// 32
// void	ft_putstr_fd(char *s, int fd);

// 33
// void	ft_putendl_fd(char *s, int fd);

// 34
// void	ft_putnbr_fd(int n, int fd);

#endif
