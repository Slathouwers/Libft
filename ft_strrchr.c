/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:39:22 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/01 13:45:14 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end)
		end++;
	if (c == '\0')
		return ((char *) end);
	while (--end >= s)
		if (c == *end)
			return ((char*) end);
	return (NULL);
}
