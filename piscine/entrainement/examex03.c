/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:19:33 by camerico          #+#    #+#             */
/*   Updated: 2024/10/04 12:33:19 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		write(1, "   ", 3);
		i++;
	}
	write(1, "\n", 1);
	return (0);	
}
