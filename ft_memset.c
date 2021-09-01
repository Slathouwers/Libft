/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:45:25 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/01 15:51:09 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;
	unsigned char val;

	dst = (unsigned char *) b;
	val = (unsigned char) c;

	while (len-- > 0)
		*dst++ = val;
	return (dst);
}
