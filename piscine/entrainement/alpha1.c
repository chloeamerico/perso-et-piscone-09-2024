/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:26:58 by camerico          #+#    #+#             */
/*   Updated: 2024/10/04 14:50:59 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	roten(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Y')
			|| (str[i] >= 'a' && str[i] <= 'y'))
			str[i] += 1;
		if (str[i] == 'Z')
			str[i] = 'A';
		if (str[i] == 'z')
			str[i] = 'a';
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	roten(argv[1]);
	return (0);
}
