/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:17:51 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:17:53 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int nb, size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)str;
	while (i < size)
	{
		new[i] = nb;
		i++;
	}
	return (str);
}
