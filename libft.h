/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:23:47 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/05 11:11:41 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

          /////////////////
         //   Part - 1  //
        /////////////////

int		ft_isalpha(int c);												//TODO:TEST
int 	ft_isdigit(int c);												//TODO:TEST
int 	ft_isalnum(int c);												//TODO:TEST
int		ft_isascii(int c);												//TODO:TEST
int 	ft_isprint(int c);												//TODO:TEST
size_t	ft_strlen(const char *s);									    //TODO:TEST
int		ft_toupper(int c);												//TODO:TEST
int		ft_tolower(int c);												//TODO:TEST
char	*ft_strchr(const char *s, int c);								//TODO:TEST
char	*ft_strrchr(const char *s, int c);								//TODO:TEST
int		ft_strncmp(const char *s1, const char *s2, size_t n);		    //TODO:TEST
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//TODO:TEST
int		ft_atoi(const char *str);									//TODO:TEST
void	*ft_memset(void *b, int c, size_t len);						//TODO:TEST
void	ft_bzero(void *s, size_t n);								//TODO:TEST
void	*ft_calloc(size_t count, size_t size);						//TODO:TEST
char	*ft_strdup(const char *s1);									//TODO:TEST
void	*ft_memcpy(void *dst, const void *src, size_t n);			//TODO:TEST
void	*ft_memmove(void *dst, const void *src, size_t len);		//TODO:TEST
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); 	//TODO:TEST
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); 	//TODO:TEST
void	*ft_memchr(const void *s, int c, size_t n); 				//TODO: TEST
int		ft_memcmp(const void *s1, const void *s2, size_t n); 		//TODO: TEST

          /////////////////
         //   Part - 2  //
        /////////////////

char	*ft_substr(char const *s, unsigned int start, size_t len);  //TODO: TEST
char *ft_strjoin(char const *s1, char const *s2);                   //TODO: TEST
char *ft_strtrim(char const *s1, char const *set);                  //TODO: TEST
char **ft_split(char const *s, char c);                             //TODO: TEST
char 	*ft_itoa(int n);                                            //TODO: TEST
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));     //TODO: TEST
void ft_striteri(char *s, void (*f)(unsigned int, char*));          //TODO: TEST

          /////////////////
         //   Bonus     //
        /////////////////

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del) (void *));
void    ft_lstiter(t_list,void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));



#endif
