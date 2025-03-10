/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:29:29 by camerico          #+#    #+#             */
/*   Updated: 2024/10/06 18:35:48 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	final;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		final = nb;
		i = 1;
		while (i < power)
		{
			final = final * nb;
			i++;
		}
	}	
	return (final);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
	return (0);
}*/
