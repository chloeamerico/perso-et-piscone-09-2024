/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:13:30 by camerico          #+#    #+#             */
/*   Updated: 2024/09/26 20:02:50 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find [j +1] == 0)
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int	main (void)
{
	char	str[40] = "Salut les amis ca va ?";
	char	to_find[] = "les";
	char    str1[40] = "Salut les amis ca va ?";
        char    to_find1[] = "les";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr (str1, to_find1));
}*/
