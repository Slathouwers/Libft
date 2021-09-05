/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:24:04 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/05 09:24:04 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_len(long int nbr)
{
	int		len;

    len = 0;
	if (nbr <= 0)
        len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

    sign = 0;
    if(n < 0)
    {
        sign = -1;
        n = -n;
    }
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len--] = '0' + (n % 10);
		n /= 10;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}