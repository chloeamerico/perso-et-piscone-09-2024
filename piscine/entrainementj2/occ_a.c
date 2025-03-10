/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:36:05 by camerico          #+#    #+#             */
/*   Updated: 2024/10/08 16:50:07 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	occ_a(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			a += 1;
		i++;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", occ_a(argv[1]));
	return (0);
}
