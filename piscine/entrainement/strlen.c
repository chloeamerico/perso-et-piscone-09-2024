/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:00:14 by camerico          #+#    #+#             */
/*   Updated: 2024/10/04 14:23:19 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	return (g);
}

int	main(void)
{
	char	str[] = "chloe est la plus belle";
	printf("%d", ft_strlen (str));
	return (0);
}
