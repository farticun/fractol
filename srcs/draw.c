/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:42:16 by farticun          #+#    #+#             */
/*   Updated: 2020/09/12 16:42:18 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_mb(t_data *d)
{
	int	x;
	int	y;

	y = -1;
	while (++y < WIN_SIZE_Y)
	{
		x = -1;
		while (++x < WIN_SIZE_X)
			mandelbrot(x, y, &d->img.data_addr[x + WIN_SIZE_X * y], d->params);
	}
	mlx_put_image_to_window(d->mlx.mlx, d->mlx.win, d->img.img, 0, 0);
}

void	draw_bs(t_data *d)
{
	int	x;
	int	y;

	y = -1;
	while (++y < WIN_SIZE_Y)
	{
		x = -1;
		while (++x < WIN_SIZE_X)
			burningship(x, y, &d->img.data_addr[x + WIN_SIZE_X * y], d->params);
	}
	mlx_put_image_to_window(d->mlx.mlx, d->mlx.win, d->img.img, 0, 0);
}

void	draw_jl(t_data *d)
{
	int	x;
	int	y;

	y = -1;
	while (++y < WIN_SIZE_Y)
	{
		x = -1;
		while (++x < WIN_SIZE_X)
			julia(x, y, &d->img.data_addr[x + WIN_SIZE_X * y], d->params);
	}
	mlx_put_image_to_window(d->mlx.mlx, d->mlx.win, d->img.img, 0, 0);
}

void	draw(t_data *d)
{
	if (ft_strcmp(d->type, "mandelbrot") == 0)
		draw_mb(d);
	else if (ft_strcmp(d->type, "burningship") == 0)
		draw_bs(d);
	else if (ft_strcmp(d->type, "julia") == 0)
		draw_jl(d);
}
