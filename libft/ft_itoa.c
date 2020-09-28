/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:07:57 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:07:59 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	size_t			i;
	char			*str;
	unsigned int	ncp;
	int				c;

	i = 1;
	c = n;
	while (c /= 10)
		i++;
	ncp = n;
	if (n < 0)
	{
		ncp = -n;
		i++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	str[--i] = ncp % 10 + '0';
	while (ncp /= 10)
		str[--i] = ncp % 10 + '0';
	if (n < 0)
		*(str) = '-';
	return (str);
}
