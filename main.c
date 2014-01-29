#include "RTv1.h"

t_img			*init_img(void)
{
	t_win	*win;
	t_img	*img;

	win = init_env();
	img = (t_img*)malloc(sizeof(t_img));
	img->img = mlx_new_image(win->mlx, WIN_WID, WIN_HEI);
	img->data = mlx_get_data_addr(img->img, &img->bbp,
									&img->size_line, &img->endian);
	return (img);
}

void			img_del(t_img *img)
{
	if (img)
	{
		free(img->img);
		free(img->data);
		img->data = NULL;
		free(img);
	}
}

t_win			*init_env(void)
{
	static t_win		*window = NULL;

	if (window == NULL)
	{
		if (!(window = (t_win*)malloc(sizeof(t_win))))
			ft_error("Insuffisant memory.");
		window->mlx = mlx_init();
		window->win = mlx_new_window(window->mlx, WIN_HEI, WIN_WID, "RT_v1");
		window->img = init_img();
	}
	return (window);
}

void			env_del(void)
{
	t_win	*win;

	win = init_env();
	if (win)
	{
		free(win->mlx);
		free(win->win);
		img_del(win->img);
		free(win);
	}
}

int				main(int argc, char const *argv[])
{
	t_win	*win;

	win = init_env();
	return (0);
}