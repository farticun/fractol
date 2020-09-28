/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:18:23 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 21:18:25 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		return (str1);
	while (i != n)
	{
		if (str2[i] == '\0')
		{
			while (i != n)
			{
				str1[i] = '\0';
				i++;
			}
			return (str1);
		}
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
