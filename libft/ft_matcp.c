/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matcp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:11:59 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:12:00 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_matcp(void **dest, const void **source, size_t n1, size_t n2)
{
	unsigned char	**str1;
	unsigned char	**str2;
	size_t			i;
	size_t			j;

	str1 = (unsigned char **)dest;
	str2 = (unsigned char **)source;
	if (!source && !dest)
		return (NULL);
	i = 0;
	j = 0;
	if (n1 <= 0 || n2 <= 0)
		return (dest);
	while (i < n1)
	{
		while (j < n2)
		{
			str1[i][j] = str2[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (dest);
}
