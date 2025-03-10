/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:27:42 by camerico          #+#    #+#             */
/*   Updated: 2024/10/03 16:50:17 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	if (n >= 0)
		write(1, "P", 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_is_negative(atoi(argv[1]));
	return (0);
}




/*int	main (void)
{
	ft_is_negative(5);
	return (0);
}*/
