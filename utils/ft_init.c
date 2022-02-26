/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:21:42 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 19:33:39 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init(m_map *map)
{
	map->height = 0;
	map->width = 0;
	//map->map_tab = NULL;
	map->item = 0;
	map->exit = 0;
	map->start_p = 0;
	map->count_move = 0;
}
