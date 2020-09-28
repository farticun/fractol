/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:31:31 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:31:32 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(str1);
	j = 0;
	while (str2[j] && j < n)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}
