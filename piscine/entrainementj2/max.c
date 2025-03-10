/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:50 by camerico          #+#    #+#             */
/*   Updated: 2024/10/08 16:35:33 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	if (tab[0] == '\0')
		return (0);
	while (i != len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
