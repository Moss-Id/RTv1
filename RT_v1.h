#ifndef RT_V1_H
# define RT_V1_H

# include <mlx.h>

/*
** Getnexline
*/
# define BUFF_SIZE	32

/*
** Env
*/
# define WIN_HEI	1100
# define WIN_WID	2080

/*
** Couleur
*/
# define RED		0x010000
# define BLUE		0x000100
# define GREEN		0x000001

/*
** Camera
*/
# define FOV		(M_PI / 3)

typedef struct			s_win
{
	void			*mlx;
	void			*win;
	t_img			*img;
}						t_win;

#endif /* !RT_V1_H */