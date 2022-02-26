/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_full.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:37:53 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/25 15:36:38 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_xml_xmp_to_img(m_map	*map)
{
	char	*player;
	char	*item;
	char	*exit;
	char	*wall;
	char	*empty;

	player = "./xpm/player.xpm";
	item = "./xpm/items.xpm";
	exit = "./xpm/door.xpm";
	wall = "./xpm/wall.xpm";
	empty = "./xpm/square.xpm";


	map->m_player = mlx_xpm_file_to_image(map->mlx, player,&map->font_w,&map->font_h);
	map->m_item = mlx_xpm_file_to_image(map->mlx, item,&map->font_w,&map->font_h);
	map->m_exit = mlx_xpm_file_to_image(map->mlx, exit,&map->font_w,&map->font_h);
	map->m_wall = mlx_xpm_file_to_image(map->mlx, wall,&map->font_w,&map->font_h);
	map->m_empty = mlx_xpm_file_to_image(map->mlx, empty,&map->font_w,&map->font_h);
}


static void	ft_put_image_window(m_map *map,void *img_ptr,int i,int j)
{
	mlx_put_image_to_window(map->mlx, map->mlx_win,img_ptr, j*75, i*75);
}

void ft_print_full(m_map *map)
{
	int	i;
	int	j;
	
	i = 0;
	ft_xml_xmp_to_img(map);
	i = 0;
	while(i < map->height)
	{
		j = 0;
		while (map->map_tab[i][j])
		{
			ft_put_image_window(map,map->m_empty,i,j);
			if (map->map_tab[i][j] == '1')
				ft_put_image_window(map,map->m_wall,i,j);
			if (map->map_tab[i][j] == 'E')
				ft_put_image_window(map,map->m_exit,i,j);
			if (map->map_tab[i][j] == 'C')
				ft_put_image_window(map,map->m_item,i,j);
			if (map->map_tab[i][j] == 'P')
				ft_put_image_window(map,map->m_player,i,j);
			j++;
		}
		i++;
	}
	
}