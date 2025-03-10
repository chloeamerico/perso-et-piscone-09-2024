/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:05:54 by camerico          #+#    #+#             */
/*   Updated: 2024/10/06 15:10:39 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	final;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
	{
		final = nb;
		i = 1;
		while (i < nb)
		{
			final = final * i;
			i++;
		}
		return (final);
	}
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
