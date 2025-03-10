/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:30:39 by camerico          #+#    #+#             */
/*   Updated: 2024/09/29 15:38:54 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



/*int     rush(int x, int y)
{
	int     i_x;
	int     i_y;

        i_x = 2;
        i_y = 2;
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
}*/





int	main(void)
{
	rush(4, 4);
	return (0);
}
