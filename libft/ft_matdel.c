/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:12:27 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:12:29 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matdel(void **as, int i)
{
	if (!as || !*as)
		return ;
	while (i)
	{
		ft_memdel(&as[i]);
		as[i] = NULL;
		i--;
	}
	ft_memdel(as);
	as = NULL;
}
