/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:50:12 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/26 16:07:17 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_join(char *s1, char *s2)
{
	char	*s;
	size_t	k;
	size_t	l;

	k = 0;
	l = 0;
	if (!s1 || !s2)
		return (NULL);
	s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		s[k] = s2[l];
		l++;
		k++;
	}
	s[k] = '\0';
	return (s);
}