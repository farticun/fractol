/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:58:49 by farticun          #+#    #+#             */
/*   Updated: 2020/09/11 15:58:51 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	error(void)
{
	ft_putstr("memory error");
	exit(0);
}

void	usage(void)
{
	ft_putstr("bad fractal name\n use <./fractol [name]>");
	ft_putstr("fractal name: mandelbrot, julia, burning_ship");
	exit(0);
}
