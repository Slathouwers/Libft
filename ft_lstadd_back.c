/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 11:47:25 by slathouw          #+#    #+#             */
/*   Updated: 2021/09/05 12:00:43 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (lst)
    {
        if(*lst)
        {
             tmp = ft_lstlast(*lst);
             if (tmp)
                tmp->next = new;
            else
                *lst = new;
        }
    }
}