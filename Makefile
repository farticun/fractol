# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: farticun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/14 18:56:06 by farticun          #+#    #+#              #
#    Updated: 2020/09/14 18:56:17 by farticun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fractol

SOURSE_DIRS		:=	srcs

SRC				:=	srcs/control.c \
                  	srcs/draw.c \
                  	srcs/init_fr_params.c \
                  	srcs/init_mlx.c \
                  	srcs/main.c \
                  	srcs/mandelbrot.c \
                  	srcs/usage.c

FLAGS			=	-Wall -Werror -Wextra -O2

framework		=	-L minilibx_macos -lmlx -framework OpenGL -framework AppKit -L libft -lft -O2

OBJECTS			=	$(notdir $(patsubst %.c,%.o, $(wildcard $(SRC))))

LIB_DIR			=	./libft/

LIB_OBJS		=	$(addprefix $(LIB_DIR), $(LIB_OBJ))

LIB_OBJ			=	*.o

RT_INC			=	include/fractol.h

LIB_INC			=	include/libft.h

LIB_MLX_FILE	=	minilibx_macos/libmlx.a

all: $(NAME)

$(NAME): $(LIB_OBJS) $(LIB_MLX_FILE) $(OBJECTS)
	gcc $(OBJECTS) -o $@ $(framework)

VPATH := $(SOURSE_DIRS)

$(LIB_MLX_FILE):
	make -C minilibx_macos

$(LIB_DIR)%.o: $(LIB_DIR)%.c $(LIB_INC) libft/Makefile
	make -C $(LIB_DIR)

%.o: %.c $(RT_INC) Makefile
	gcc $(FLAGS) -c $< -I include/

clean:
	make clean -C $(LIB_DIR)
	make clean -C minilibx_macos
	rm -rf *.o

fclean: clean
	make fclean -C $(LIB_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
