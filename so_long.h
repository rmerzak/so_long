/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:33:31 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:52:21 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include<stdio.h>
# include<fcntl.h>
# include<unistd.h>
# include<stdlib.h>
# include<mlx.h>
# include<stdarg.h>

typedef struct m_map
{
	int		height;
	int		width;
	int		x;
	int		y;
	void	*m_player;
	void	*m_item;
	void	*m_exit;
	void	*m_wall;
	void	*m_empty;
	void	*mlx_win;
	char	**map_tab;
	int		font_w;
	int		font_h;
	void	*mlx;
	int		item;
	int		exit;
	int		start_p;
	int		count_move;
	int		i;
	int		j;
	int		fin;
}		t_map;
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
void	ft_print_erreur(int i, t_map *map);
void	ft_is_good_map(char **av, t_map *map);
void	ft_init(t_map *map);
char	*ft_join(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_print_full(t_map *map);
void	ft_move_up(t_map *vars);
void	ft_move_down(t_map *vars);
void	ft_move_left(t_map *vars);
void	ft_move_right(t_map *vars);
int		ft_find_player(t_map *vars);
void	ft_check_fin(t_map *map);
int		ft_printf(const char *str, ...);
void	ft_exit(t_map *vars);
void	ft_freetab(t_map *map);
int		ft_check_walls(t_map *map);

#endif
