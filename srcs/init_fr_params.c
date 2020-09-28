/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fr_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:45:50 by farticun          #+#    #+#             */
/*   Updated: 2020/09/12 16:45:52 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_params_mb(t_data *d)
{
	d->params.zoom = 250;
	d->params.shift_x = 2.2;
	d->params.shift_y = 1.5;
	d->params.iter = MAX_ITER;
}

void	init_params_bs(t_data *d)
{
	d->params.zoom = 250;
	d->params.shift_x = 2.2;
	d->params.shift_y = 2.0;
	d->params.iter = MAX_ITER;
}

void	init_params_jl(t_data *d)
{
	d->params.zoom = 250;
	d->params.shift_x = 0.7;
	d->params.shift_y = 1.5;
	d->params.iter = MAX_ITER;
	d->params.c_x = -0.4;
	d->params.c_y = 0.6;
	d->params.is_locked = 1;
}
