/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:13:57 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:14:00 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ret;
	size_t			i;

	i = 0;
	str = (unsigned char *)arr;
	ret = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ret)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
