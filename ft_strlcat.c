/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:03:12 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 13:30:36 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	n_bytes;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	n_bytes = dstsize;
	while (*dst)
	{
		dst++;
		if (n_bytes > 0)
			n_bytes--;
	}
	while (*src && n_bytes > 1)
	{
		*dst++ = src++;
		n_bytes--;
	}
	*dst = '\0';
	if (size > dst_len)
		return (dlen + slen);
	return (size +slen);
}
