/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:16:17 by farticun          #+#    #+#             */
/*   Updated: 2020/09/11 16:16:19 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_fractol_params(t_data *d)
{
	if (ft_strcmp(d->type, "mandelbrot") == 0)
		init_params_mb(d);
	else if (ft_strcmp(d->type, "burningship") == 0)
		init_params_bs(d);
	else if (ft_strcmp(d->type, "julia") == 0)
		init_params_jl(d);
	else
		usage();
}

void	new_img(t_img *img, t_data *d)
{
	if (!(img->img = mlx_new_image(d->mlx.mlx, WIN_SIZE_X, WIN_SIZE_Y)))
		error();
	if (!(img->data_addr = (int *)mlx_get_data_addr(img->img, &img->bpp,
													&img->sl, &img->el)))
		error();
}

void	init_mlx(t_data *d)
{
	init_fractol_params(d);
	if (!(d->mlx.mlx = mlx_init()))
		error();
	if (!(d->mlx.win = mlx_new_window(d->mlx.mlx, WIN_SIZE_X, WIN_SIZE_Y,
													"fractol")))
		error();
	new_img(&d->img, d);
}
