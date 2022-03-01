/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:32:48 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:42:42 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exit(t_map *map)
{
	mlx_destroy_window(map->mlx, map->mlx_win);
	ft_printf("out of the game\n");
	exit(0);
}
