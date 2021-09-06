/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:03:03 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/05 09:03:03 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    size_t  i;

    if(!s)
        return (NULL);
    if((size_t) start > ft_strlen(s))
        return (ft_strdup(""));
    subs = malloc(sizeof(char) * (len + 1));
    if (!subs)
        return (0);
    i = -1;
    while (++i < len)
        subs[i] = s[start + i];
    subs[i] = '\0';
    return (subs);
}