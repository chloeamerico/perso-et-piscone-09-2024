/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:20:57 by camerico          #+#    #+#             */
/*   Updated: 2024/10/08 18:40:14 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				argv[1][i] += 13;
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
                                argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
}
