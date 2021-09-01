/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:23:47 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/01 15:10:05 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//TODO: TEST -> isalpha 
int	ft_isalpha(int c);
//TODO:	TEST -> isdigit
int ft_isdigit(int c);
//TODO: TEST -> isalnum
int ft_isalnum(int c);
//TODO: TEST -> isascii checks if 0 >= c <= 127
int	ft_isascii(int c);
//TODO: iTEST ->isprint checks if 32 >= c < 127
int ft_isprint(int c);
//TODO: TEST - > strlen
size_t	ft_strlen(const char *s);

//TODO:TEST -> toupper 
int	ft_toupper(int c);
//TODO:TEST ->  tolower
int	ft_tolower(int c);
//TODO:TEST -> strchr
char	*strchr(const char *s, int c);
//TODO:TEST ->  strrchr
char	*strrchr(const char *s, int c);
//TODO:TEST ->  strncmp
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//TODO: strnstr
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//TODO: atoi
int		ft_atoi(const char *str);
//TODO: calloc

//TODO: strdup


//TODO: memset The memset() function writes len bytes of value c (converted to an unsigned char) to the string b and return string b.
void	*ft_memset(void *b, int c, size_t len);
//TODO: bzero The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n);
//TODO: memcpy The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src  might overlap should use memmove(3) instead.
void	*ft_memcpy(void *dst, const void *src, size_t n);
//TODO: memmove
void	*ft_memmove(void *dst, const void *src, size_t len);
//TODO: strlcpy
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//TODO: strlcat


//TODO: memchr
//TODO: memcmp

// ----------------PART 2

//TODO: ft_substr
char	*ft_substr(char const *s, unsigned int start, size_t len);
//TODO: ft_strjoin
char *ft_strjoin(char const *s1, char const *s2);
//TODO: ft_strtrim
char *ft_strtrim(char const *s1, char const *set);
//TODO: ft_split
char **ft_split(char const *s, char c);
//TODO: ft_itoa
char 	*ft_itoa(int n);
//TODO: ft_strmapi
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
//TODO: ft_striteri
void ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
