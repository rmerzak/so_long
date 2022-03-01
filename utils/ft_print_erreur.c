/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_erreur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:13:11 by rmerzak           #+#    #+#             */
/*   Updated: 2022/03/01 22:43:41 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print_erreur(int i, t_map *map)
{
	if (i == 0)
		write(2, "Error\n carte non valide\n", 24);
	if (i == 1)
		write(2, "Error\nextention carte non valide\n", 33);
	ft_freetab(map);
	exit(0);
}
