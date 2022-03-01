/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:50:29 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:42:26 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_fin(t_map *map)
{
	if (map->item == 0)
	{
		mlx_clear_window(map->mlx, map->mlx_win);
		mlx_destroy_window(map->mlx, map->mlx_win);
		map->count_move++;
		ft_printf("%d\n", map->count_move);
		ft_printf("you win\n");
		exit(0);
	}
}
