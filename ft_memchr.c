/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:40:15 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/02 16:03:44 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;

	ptr = (const unsigned char *) s;
	chr = (unsigned char) c;
	while (n-- > 0)
		if (*ptr++ == chr)
			return ((void *) (ptr - 1));
	return (NULL);
}
