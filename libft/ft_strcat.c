/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:23:35 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:23:36 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}
