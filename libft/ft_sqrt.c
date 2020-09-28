/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:23:11 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:23:13 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_sqrt(double num)
{
	double	r;
	double	q;
	int		i;

	q = 0;
	r = 1;
	i = 0;
	if (!num)
		return (0);
	while (i < 15)
	{
		q = 1 / ft_pow(10, i);
		while (((r + q) * (r + q)) < num)
			r += q;
		i++;
	}
	return (r);
}
