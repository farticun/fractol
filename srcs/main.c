/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:46:00 by farticun          #+#    #+#             */
/*   Updated: 2020/09/11 15:46:03 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	t_data	d;

	if (ac == 2)
	{
		d.type = av[1];
		init_mlx(&d);
		draw(&d);
		mlx_hook(d.mlx.win, 3, 0, keys, &d);
		mlx_hook(d.mlx.win, 17, 0, cls, 0);
		mlx_hook(d.mlx.win, 4, 0, mouse_press, &d);
		mlx_hook(d.mlx.win, 6, 0, mouse_move, &d);
		mlx_loop(d.mlx.mlx);
	}
	else
		usage();
	return (0);
}
