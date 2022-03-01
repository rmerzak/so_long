/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:26:28 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:42:37 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_assing(char **dst, char *src, char *fre)
{
	(*dst) = src;
	free(fre);
}

int	ft_return(t_map *map)
{
	int	i;
	int	r;
	int	j;

	i = 0;
	r = 1;
	while (i < map->height)
	{
		j = 0;
		if (map->map_tab[i][0] != '1' || \
				map->map_tab[i][ft_strlen(map->map_tab[i]) - 1] != '1')
			r = 0;
		while (map->map_tab[i][j] != '\0')
		{
			if (map->map_tab[0][j] != '1' || \
				map->map_tab[map->height - 1][j] != '1')
				r = 0;
			j++;
		}
		i++;
	}
	return (r);
}

int	ft_check_walls(t_map *map)
{
	int	i;
	int	r;

	i = 0;
	while (i < map->height - 1)
	{
		ft_assing(&map->map_tab[i], ft_substr(map->map_tab[i], 0, \
					ft_strlen(map->map_tab[i]) - 1), map->map_tab[i]);
		i++;
	}
	i = 0;
	r = ft_return(map);
	return (r);
}
