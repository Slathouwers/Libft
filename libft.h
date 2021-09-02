/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:23:47 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 14:30:53 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);												//TODO:TEST
int 	ft_isdigit(int c);												//TODO:TEST
int 	ft_isalnum(int c);												//TODO:TEST
int		ft_isascii(int c);												//TODO:TEST
int 	ft_isprint(int c);												//TODO:TEST
size_t	ft_strlen(const char *s);									//TODO:TEST
int		ft_toupper(int c);												//TODO:TEST
int		ft_tolower(int c);												//TODO:TEST
char	*strchr(const char *s, int c);								//TODO:TEST
char	*strrchr(const char *s, int c);								//TODO:TEST
int		ft_strncmp(const char *s1, const char *s2, size_t n);		//TODO:TEST
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//TODO:TEST
int		ft_atoi(const char *str);									//TODO:TEST
void	*ft_memset(void *b, int c, size_t len);						//TODO:TEST
void	ft_bzero(void *s, size_t n);								//TODO:TEST
void	*ft_calloc(size_t count, size_t size);						//TODO:TEST
char	*ft_strdup(const char *s1);									//TODO:TEST
void	*ft_memcpy(void *dst, const void *src, size_t n);			//TODO:TEST
void	*ft_memmove(void *dst, const void *src, size_t len);		//TODO :TEST
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); 	//TODO :TEST
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); 	//TODO :TEST
void	*ft_memchr(const void *s, int c, size_t n); 				//TODO: TEST
int		ft_memcmp(const void *s1, const void *s2, size_t n); 		//TODO: TEST

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
