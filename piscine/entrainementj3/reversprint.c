/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:12:37 by camerico          #+#    #+#             */
/*   Updated: 2024/10/10 16:19:38 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = ft_strlen(argv[1]);
	if (argc == 2)
	{
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}		
	}
	write(1, "\n", 1);
}


/*int   main(int argc, char **argv)
{
        int     i;
        int     j;
        char    temp;

        i = 0;
        j = ft_strlen(argv[1]);
        if (argc == 2)
        {
                while(i < j)
                {
                        temp = argv[1][i];
                        argv[1][i] = argv[1][j];
                        argv[1][j] = temp;
                        i++;
                        j--;
                }
                write(1, &argv[1], 1);
        }
        write(1, "\n", 1);
        return (0);
}*/


