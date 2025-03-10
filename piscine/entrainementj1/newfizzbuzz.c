/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newfizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:43:35 by camerico          #+#    #+#             */
/*   Updated: 2024/10/07 12:51:46 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			ft_putchar((nb / 10) + '0');
			ft_putchar((nb % 10) + '0');
		}
		write(1, "\n", 1);
		nb++;
	}
}
