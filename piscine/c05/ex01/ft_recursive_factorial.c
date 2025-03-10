/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:55:56 by camerico          #+#    #+#             */
/*   Updated: 2024/10/06 15:52:07 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
