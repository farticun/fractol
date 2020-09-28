/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:13:05 by farticun          #+#    #+#             */
/*   Updated: 2020/09/12 16:13:08 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	cls(int key)
{
	exit(key);
}

int	mouse_move(int x, int y, t_data *p)
{
	if (!(p->params.x) && !(p->params.y))
	{
		p->params.x = x;
		p->params.y = y;
	}
	if (p->params.is_locked)
	{
		p->params.c_x += (x - p->params.x) / p->params.zoom;
		p->params.c_y += (y - p->params.y) / p->params.zoom;
		p->params.x = x;
		p->params.y = y;
		draw(p);
	}
	return (0);
}

int	mouse_press(int kay, int x, int y, t_data *p)
{
	double a[2];
	double a1;
	double b1;

	a[0] = x / p->params.zoom + p->params.shift_x;
	a[1] = y / p->params.zoom + p->params.shift_y;
	if (kay == 4)
	{
		a1 = x / (p->params.zoom * 1.1) + p->params.shift_x;
		b1 = y / (p->params.zoom * 1.1) + p->params.shift_y;
		p->params.shift_x += a1 - a[0];
		p->params.shift_y += b1 - a[1];
		p->params.zoom *= 1.10;
		p->params.iter += 7;
	}
	if (kay == 5)
	{
		a1 = x / (p->params.zoom / 1.1) + p->params.shift_x;
		b1 = y / (p->params.zoom / 1.1) + p->params.shift_y;
		p->params.shift_x += a1 - a[0];
		p->params.shift_y += b1 - a[1];
		p->params.zoom /= 1.10;
	}
	draw(p);
	return (0);
}

int	keys(int key, t_data *d)
{
	if (key == 53)
		exit(0);
	if (key == 125)
		d->params.shift_y -= 10 / d->params.zoom;
	if (key == 126)
		d->params.shift_y += 10 / d->params.zoom;
	if (key == 124)
		d->params.shift_x -= 10 / d->params.zoom;
	if (key == 123)
		d->params.shift_x += 10 / d->params.zoom;
	if (key == 37)
	{
		(d->params.is_locked == 1) ? (d->params.is_locked = 0) :
		(d->params.is_locked = 1);
	}
	draw(d);
	return (key);
}
