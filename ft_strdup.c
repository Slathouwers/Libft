/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:12:16 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/01 16:52:47 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}
