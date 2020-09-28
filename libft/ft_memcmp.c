/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:16:04 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:16:06 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if ((!arr1 && !arr2) || !n)
		return (0);
	i = 0;
	s1 = (unsigned char *)arr1;
	s2 = (unsigned char *)arr2;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return (s1[i] - s2[i]);
}
