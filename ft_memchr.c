/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:40:15 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/06 15:55:14 by slathouw         ###   ########.fr       */
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
			return ((void *)(ptr - 1));
	return (NULL);
}
