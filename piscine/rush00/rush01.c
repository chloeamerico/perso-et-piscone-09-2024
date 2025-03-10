/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:42:49 by camerico          #+#    #+#             */
/*   Updated: 2024/09/21 15:30:22 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	rush(int lo,int la)
{
	int i_lo;
	int i_la;

	i_lo = 1;
	i_la = 1;

	while (i_la <= la)
	{
		while (i_lo <= lo)
		{
			if ((i_la == 1 && i_lo == 1) || (i_lo == lo && i_la == la))
				ft_putchar('/');
			else if ((i_la == 1 && i_lo == lo) || (i_la == la && i_lo == 1))
				ft_putchar('\\');
			else if (i_la == 1)
                        	ft_putchar('*');
			else if (i_lo == 1)
				ft_putchar('*');
			else if (i_la == la)
                        	ft_putchar('*');
			else if (i_lo == lo)
                        	ft_putchar('*');
			else
				ft_putchar(' ');
			if (i_lo == lo) 
				ft_putchar('\n');
			i_lo++;
		}
		i_la++;
		i_lo = 1;
	}
}


int	main(void)
{
	rush(3,5);
	return (0);
}
