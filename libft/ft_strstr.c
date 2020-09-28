/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:21:52 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 21:21:55 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)str1;
	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1)
	{
		while (str2[i] == str1[i])
		{
			i++;
			if (str2[i] == '\0')
			{
				ret = (char *)str1;
				return (ret);
			}
		}
		str1++;
		i = 0;
	}
	return (NULL);
}
