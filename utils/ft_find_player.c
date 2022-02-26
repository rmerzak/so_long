/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:12:56 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 19:38:27 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_find_player(m_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (map->map_tab[i][j] != '\0')
		{
			if (map->map_tab[i][j] == 'P')
			{
				map->j = j;
				map->i = i;
				return (1);
			}
			else
				j++;
		}
		i++;
	}
	printf("i == %d\n", i);
	printf("j == %d", j);
	return (1);
}