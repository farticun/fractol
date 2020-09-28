/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:20:16 by farticun          #+#    #+#             */
/*   Updated: 2020/09/14 21:20:18 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;

	if ((size + 1) < size)
		return (NULL);
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
