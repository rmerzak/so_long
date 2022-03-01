/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:09:12 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:42:52 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_freetab(t_map *map)
{
	int	i;

	i = 0;
	if (!map->map_tab)
		return ;
	while (map->map_tab[i++])
		free(map->map_tab[i]);
	free(map->map_tab[i]);
}
