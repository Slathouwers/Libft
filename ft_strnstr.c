/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:28:05 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 14:47:59 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;
	
	len = ft_strlen(s);
	if (len < maxlen)
		return (len);
	return (maxlen);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	
	needle_len = ft_strnlen(needle, len);
	if (!needle_len)
		return ((char *) haystack);
	while (0 < (len--) - needle_len)
	{
		if(*haystack == *needle && !ft_strncmp(haystack, needle, needle_len))
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
