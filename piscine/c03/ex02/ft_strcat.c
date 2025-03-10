/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:27:00 by camerico          #+#    #+#             */
/*   Updated: 2024/09/26 19:59:17 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[20] = "Salut les ";
	char	src[] = "amis!";
	char	dest1 [20] = "Salut les ";
	char	src1[] = "amis!";

	printf ("%s\n", ft_strcat(dest, src));
	printf ("%s\n", strcat(dest1, src1));
}*/
