/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farticun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:44:18 by farticun          #+#    #+#             */
/*   Updated: 2020/09/11 15:44:19 by farticun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H

# define FRACTOL_H

# include "mlx.h"
# include "libft.h"
# include <math.h>

# define WIN_SIZE_X	1024
# define WIN_SIZE_Y	720
# define MAX_ITER	100

typedef struct		s_h
{
	float			x;
	float			y;
	float			z;
}					t_h;

typedef struct		s_params
{
	double			zoom;
	double			shift_x;
	double			shift_y;
	int				iter;
	double			c_x;
	double			c_y;
	int				x;
	int				y;
	int				is_locked;
}					t_params;

typedef struct		s_img
{
	void			*img;
	int				*data_addr;
	int				bpp;
	int				sl;
	int				el;
}					t_img;

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
}					t_mlx;

typedef struct		s_data
{
	t_mlx			mlx;
	t_img			img;
	t_params		params;
	char			*type;
}					t_data;

void				usage();
void				init_mlx(t_data *d);
void				mandelbrot(double x0, double y0, int *pix, t_params p);
void				burningship(double x0, double y0, int *pix, t_params p);
int					cls(int key);
int					keys(int key, t_data *d);
void				draw(t_data *d);
void				init_params_mb(t_data *d);
void				init_params_bs(t_data *d);
void				draw_mb(t_data *d);
void				draw_bs(t_data *d);
int					mouse_press(int kay, int x, int y, t_data *p);
void				julia(double x0, double y0, int *pix, t_params p);
void				init_params_jl(t_data *d);
int					mouse_move(int x, int y, t_data *p);
void				error();

#endif
