/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:15:50 by camerico          #+#    #+#             */
/*   Updated: 2024/10/07 20:55:43 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	tab_mult(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 238609294)
	{
		while (i < 10)
		{
			ft_putnbr(nb);
			write(1, "*", 1);
			ft_putnbr(i);
			write(1, "=", 1);
			ft_putnbr(nb * i);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	unsigned int	nb = 0;
	tab_mult(nb);
	return(0);
}


/*int	main(int argc, char ** argv)
{
	(void) argc;
	tab_mult(atoi(argv[1]));
	return (0);
}*/











/*int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 0;
	nb = argc[2];
	(void) argv;
	while(nb < 2)
	{
		while (i <= 9)
		{
			ft_putnbr(nb);
			write(1, "*", 1);
			ft_putnbr(i);
			write(1, "=", 1);
			ft_putnbr(nb * i);
			i++;
			write(1, &i, 1);
		}
	}
	write(1, "\n", 1);
}*/
