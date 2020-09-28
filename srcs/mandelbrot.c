/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:46:27 by farticun          #+#    #+#             */
/*   Updated: 2020/09/11 16:46:30 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		color(double hx, double hy, double hz)
{
	int		red;
	int		green;
	int		blue;

	red = (unsigned int)((double)hx * 255);
	green = (unsigned int)((double)hy * 255);
	blue = (unsigned int)((double)hz * 255);
	return ((red << 16) | (green << 8) | blue);
}

void	mandelbrot(double x0, double y0, int *pix, t_params p)
{
	double	tmp;
	int		iteration;
	double	x;
	double	y;
	t_h		h;

	x = 0;
	y = 0;
	y0 = y0 / p.zoom - p.shift_y;
	x0 = x0 / p.zoom - p.shift_x;
	iteration = -1;
	while ((x * x + y * y) <= 200.0 && ++iteration < p.iter)
	{
		tmp = x * x - y * y + x0;
		y = 2 * x * y + y0;
		x = tmp;
	}
	tmp = (double)iteration - log2(log2((x * x) + (y * y))) + 9.0;
	h.x = 0.5 + 0.5 * cos(0.5 * tmp + (3.0 * 0.2));
	h.y = 0.5 + 0.5 * cos(0.5 * tmp + (15.6 * 0.2 / 2));
	h.z = 0.5 + 0.5 * cos(0.5 * tmp + (5.6 * (-0.2)));
	if (iteration == p.iter)
		*pix = 0;
	else
		*pix = color(h.x, h.y, h.z);
}

void	burningship(double x0, double y0, int *pix, t_params p)
{
	double	tmp;
	int		iteration;
	double	x;
	double	y;
	t_h		h;

	x = 0;
	y = 0;
	y0 = y0 / p.zoom - p.shift_y;
	x0 = x0 / p.zoom - p.shift_x;
	iteration = -1;
	while ((x * x + y * y) <= 200.0 && ++iteration < p.iter)
	{
		tmp = x * x - y * y + x0;
		y = 2 * fabs(x * y) + y0;
		x = tmp;
	}
	tmp = (double)iteration - log2(log2((x * x) + (y * y))) + 9.0;
	h.x = 0.5 + 0.5 * cos(0.5 * tmp + (3.0 * 0.2));
	h.y = 0.5 + 0.5 * cos(0.5 * tmp + (15.6 * 0.2 / 2));
	h.z = 0.5 + 0.5 * cos(0.5 * tmp + (5.6 * (-0.2)));
	if (iteration == p.iter)
		*pix = 0;
	else
		*pix = color(h.x, h.y, h.z);
}

void	julia(double x0, double y0, int *pix, t_params p)
{
	double	tmp;
	int		iteration;
	double	x;
	double	y;
	t_h		h;

	y = y0 / p.zoom - p.shift_y;
	x = x0 / p.zoom - 3.0 / 2 - p.shift_x;
	iteration = -1;
	while ((x * x + y * y) <= 200.0 && ++iteration < p.iter)
	{
		tmp = x * x - y * y;
		y = 2 * x * y + p.c_y;
		x = tmp + p.c_x;
	}
	tmp = (double)iteration - log2(log2((x * x) + (y * y))) + 9.0;
	h.x = 0.5 + 0.5 * cos(0.5 * tmp + (3.0 * 0.2));
	h.y = 0.5 + 0.5 * cos(0.5 * tmp + (15.6 * 0.2 / 2));
	h.z = 0.5 + 0.5 * cos(0.5 * tmp + (5.6 * (-0.2)));
	if (iteration == p.iter)
		*pix = 0;
	else
		*pix = color(h.x, h.y, h.z);
}
