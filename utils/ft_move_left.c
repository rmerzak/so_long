/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:46:20 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:43:28 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_left(t_map *vars)
{
	ft_find_player(vars);
	if (vars->map_tab[vars->i][vars->j + 1] == '0')
	{
		vars->map_tab[vars->i][vars->j + 1] = 'P';
		vars->map_tab[vars->i][vars->j] = '0';
		vars->count_move++;
		ft_printf("%d\n", vars->count_move);
	}
	else if (vars->map_tab[vars->i][vars->j + 1] == 'C')
	{
		vars->map_tab[vars->i][vars->j + 1] = 'P';
		vars->map_tab[vars->i][vars->j] = '0';
		vars->item--;
		vars->count_move++;
		ft_printf("%d\n", vars->count_move);
	}
	else if (vars->map_tab[vars->i][vars->j + 1] == 'E')
		ft_check_fin(vars);
	else if (vars->map_tab[vars->i][vars->j + 1] == '1')
		return ;
	mlx_clear_window(vars->mlx, vars->mlx_win);
	ft_print_full(vars);
}
