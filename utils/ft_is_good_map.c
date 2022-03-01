/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_good_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:22:19 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:43:08 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_extention_map(char *av)
{
	char	*ptr;

	ptr = ft_strchr(av, '.');
	if (ft_strncmp(ptr, ".ber", 5))
		ft_print_erreur(1, NULL);
}

int	ft_check_rectancle(t_map *map)
{
	size_t	len;
	int		i;
	int		r;

	i = 0;
	r = 1;
	len = ft_strlen(map->map_tab[0]);
	while (i < map->height - 1)
	{
		if (len != ft_strlen(map->map_tab[i]))
			r = 0;
		len = ft_strlen(map->map_tab[i + 1]);
		i++;
	}
	return (r);
}

void	ft_fill_map_tab(t_map *map, char *nmap)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open(nmap, O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		map->map_tab[i++] = line;
	}
	map->map_tab[i++] = NULL;
	close(fd);
	if (!ft_check_walls(map) || !ft_check_rectancle(map))
		ft_print_erreur(0, map);
}

void	ft_collect_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (map->map_tab[i][j])
		{
			if (map->map_tab[i][j] == 'E')
				map->exit += 1;
			if (map->map_tab[i][j] == 'C')
				map->item += 1;
			if (map->map_tab[i][j] == 'P')
				map->start_p += 1;
			j++;
		}
		i++;
	}
	if (map->item < 1 || map->exit < 1 || map->start_p < 1)
		ft_print_erreur(1, map);
}

void	ft_is_good_map(char **av, t_map *map)
{
	char	*line;
	char	*nmap;
	int		fd;

	ft_extention_map(av[1]);
	nmap = ft_join("./map/", av[1]);
	fd = open(nmap, O_RDONLY);
	if (fd < 0)
		ft_print_erreur(0, NULL);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		map->height += 1;
		free(line);
	}
	close(fd);
	map->map_tab = (char **)malloc(sizeof(char *) * (map->height + 1));
	ft_fill_map_tab(map, nmap);
	ft_collect_map(map);
	map->width = ft_strlen(map->map_tab[0]);
	free(nmap);
}
