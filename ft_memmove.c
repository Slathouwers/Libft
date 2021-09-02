/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:00:13 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 11:16:06 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_ptr;
	char		*dst_ptr;

	if (dst < src)
	{
		src_ptr = (const char *) src;
		dst_ptr = (char *) dst;
		while (len--)
			*src_ptr++ = dst_ptr++;
	}
	else
	{
		src_ptr = (const char *) src + len - 1;
		dst_ptr = (char *) dst + len - 1;
		while (len--)
			*src_ptr-- = dst_ptr--;
	}
	return (dst);
}
