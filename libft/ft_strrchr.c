/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:21:03 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 21:21:06 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char	*new;
	char	k;

	k = (char)ch;
	new = ft_strchr(str, 0);
	if (k == '\0')
		return (new);
	while (new != str)
	{
		new--;
		if (*new == k)
			return (new);
	}
	return (NULL);
}
