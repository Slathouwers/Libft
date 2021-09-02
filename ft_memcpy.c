/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:32:07 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 14:29:48 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t m)
{
	const char	*src_ptr;
	char		*dst_ptr;

	if (!dst || !src)
		return (dst);
	src_ptr = src;
	dst_ptr = dst;	
	while (m--)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}
