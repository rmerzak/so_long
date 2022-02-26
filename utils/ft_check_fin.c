/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:50:29 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 22:21:01 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_fin(m_map *map)
{
	if (map->item == 0)
	{
		mlx_clear_window(map->mlx, map->mlx_win);
		mlx_string_put(map->mlx, map->mlx_win, map->width * 75, map->height * 75, 0x00FF0000, "you win");
		mlx_destroy_window(map->mlx, map->mlx_win);
		ft_printf("you win\n");
		exit(0);
	}
}