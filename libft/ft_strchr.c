/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:23:59 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 19:24:01 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *str, int ch)
{
	unsigned char	k;
	char			*new;

	k = (unsigned char)ch;
	new = (char *)str;
	while (*new)
	{
		if (*new == ch)
			return (new);
		else
			new++;
	}
	if (k == '\0')
		return (new);
	else
		return (NULL);
}
