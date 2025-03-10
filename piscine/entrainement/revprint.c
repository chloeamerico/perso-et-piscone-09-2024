/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:35:43 by camerico          #+#    #+#             */
/*   Updated: 2024/10/04 12:47:33 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	strlen1(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_rev_print (char *str)
{
	int	i;

	i = strlen1(str);
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hello";
	ft_rev_print(str);
	return (0);
}
