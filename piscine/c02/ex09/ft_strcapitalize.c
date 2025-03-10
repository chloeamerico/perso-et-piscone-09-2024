/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:57:32 by camerico          #+#    #+#             */
/*   Updated: 2024/09/24 16:21:34 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57)
			&& !(str[i] >= 65 && str[i] <= 90)
			&& !(str[i] >= 97 && str[i] <= 122))
		{
			space = 1;
		}
		else
		{	
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			space = 0;
		}
		i++;
	}
	return (str);
}

/*int	main (void)
{
	char	str[] = "coucou je -suis 4ruyr Tyu %erte";
	printf("%s\n", ft_strcapitalize(str));
}*/
