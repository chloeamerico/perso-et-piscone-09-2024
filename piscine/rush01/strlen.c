/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:19 by camerico          #+#    #+#             */
/*   Updated: 2024/09/28 19:02:51 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while ((tab[i] && tab[i] >= '1' && tab[i] <= '4') || tab[i] == ' ')
	{
		if(tab[0] >= '1' && tab[0] <= '4')
			i++;
		else if((tab[i] >= '1' && tab[i] <= '4' && tab[i+1] == ' ') || tab[i] == ' ');
			i++;
		else
			break;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main (void)
{
	rush01(4, 4);
	return (0);
}

void	ft putchar(char c);
{
	write(1, &c, 1);
}

