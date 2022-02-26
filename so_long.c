/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:05:15 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 22:39:41 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	ft_move(int keycode, m_map *vars)
{
	if (keycode == 13)
		ft_move_up(vars);
	else if (keycode == 1)
		ft_move_down(vars);
	else if (keycode == 2)
		ft_move_left(vars);
	else if (keycode == 0)
		ft_move_right(vars);
	else if (keycode == 53)
		ft_exit(vars);
	ft_printf("%d\n",vars->count_move);
	return (0);
}

int	main(int argc, char **av)
{
	m_map	map;
	int		h;
	int		w;

	if(argc < 2)
		ft_print_erreur(0);

	ft_init(&map);
	ft_is_good_map(av, &map);
	h = map.width * 75;
	w = map.height * 75;
	map.mlx = mlx_init();
	if (map.mlx == NULL)
		ft_print_erreur(0);
	map.mlx_win = mlx_new_window(map.mlx, h , w, "Game!");
	ft_print_full(&map);
	mlx_key_hook(map.mlx_win, ft_move, &map);
	mlx_loop(map.mlx);
}
