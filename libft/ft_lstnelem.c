/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:10:59 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:11:01 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstnelem(t_list *lst, size_t s)
{
	size_t r;

	r = 0;
	while (s > (r - 1))
	{
		if (lst->next)
			return (NULL);
		lst = lst->next;
		r++;
	}
	return (lst);
}
