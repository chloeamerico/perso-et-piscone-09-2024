/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:06:53 by camerico          #+#    #+#             */
/*   Updated: 2024/09/26 20:00:51 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != 0 && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main (void)
{
	char	dest[20] = "Salut les ";
	char	src[] = "gars comment ca va";
	char	dest1[20] = "Salut les ";
	char	src1[] = "gars comment ca va";

	printf("%s\n", strncat(dest, src, 15));
	printf("%s\n", ft_strncat(dest1, src1, 15));
	return (0);
}*/
