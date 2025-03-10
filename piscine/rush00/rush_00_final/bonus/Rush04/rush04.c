/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaegaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:00:43 by awaegaer          #+#    #+#             */
/*   Updated: 2024/09/21 18:36:24 by awaegaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_inter(int x, int y, int i_x, int i_y)
{
	if (i_x == 1 && i_y == 1)
		ft_putchar('A');
	else if ((y != 1 && x != 1) && (i_x == x && i_y == y))
		ft_putchar('A');
	else if (i_x == x && i_y == 1)
		ft_putchar('C');
	else if (i_x == 1 && i_y == y)
		ft_putchar('C');
	else if (i_x == 1 || i_x == x)
		ft_putchar('B');
	else if (i_y == 1 || i_y == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
	if (i_x == x)
		ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	i_x;
	int	i_y;

	if (x < 0 || y < 0)
		return (0);
	i_x = 1;
	i_y = 1;
	while (i_y <= y)
	{
		while (i_x <= x)
		{
			rush_inter(x, y, i_x, i_y);
			i_x++;
		}
		i_y++;
		i_x = 1;
	}
	return (0);
}
