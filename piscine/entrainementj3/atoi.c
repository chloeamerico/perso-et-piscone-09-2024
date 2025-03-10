/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:51:18 by camerico          #+#    #+#             */
/*   Updated: 2024/10/10 18:26:45 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign)
}*/

int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     nb;

        i = 0;
        sign = 1;
        nb = 0;

        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
                i++;
        if (str[i] == '+')
		i++;
	if (str[i] == '-')
		sign = -1;
        while (str[i] >= '0' && str[i] <= '9')
        {
                nb = nb * 10 + (str[i] - 48);
                i++;
        }
        return (nb * sign);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_atoi(argv[1]));
	return (0);
}





















