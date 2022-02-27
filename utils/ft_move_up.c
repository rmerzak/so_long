/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:18:03 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/27 01:57:54 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_up(m_map *vars)
{
	ft_find_player(vars);
	if (vars->map_tab[vars->i - 1][vars->j] == '0')
	{
		vars->map_tab[vars->i - 1][vars->j] = 'P';
		vars->map_tab[vars->i][vars->j] = '0';
		vars->count_move++;
		ft_printf("%d\n",vars->count_move);
	}
	else if (vars->map_tab[vars->i - 1][vars->j] == 'C')
	{
		vars->map_tab[vars->i - 1][vars->j] = 'P';
		vars->map_tab[vars->i][vars->j] = '0';
		vars->item--;
		vars->count_move++;
		ft_printf("%d\n",vars->count_move);
	}
	else if (vars->map_tab[vars->i - 1][vars->j] == 'E')
		ft_check_fin(vars);
	else	if (vars->map_tab[vars->i][vars->j] == '1')
		return ;
	
	mlx_clear_window(vars->mlx, vars->mlx_win);
	ft_print_full(vars);
}
