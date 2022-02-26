/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_erreur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:13:11 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/22 23:28:44 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print_erreur(int i)
{
	if (i == 0)
		write(2,"Error\n carte non valide\n",24);
	if (i == 1)
		write(2,"Error\nextention carte non valide\n",33);


	exit(0);
}
