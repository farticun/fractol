/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:18:27 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:18:29 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(double num, int pow)
{
	double	res;
	int		n;

	res = 1;
	if (!pow || pow == 0)
		return (1);
	if (pow < 0)
	{
		n = -1;
		pow *= -1;
	}
	else
		n = 1;
	while (pow != 0)
	{
		res *= num;
		pow--;
	}
	if (n < 0)
		return (1 / res);
	else
		return (res);
}
