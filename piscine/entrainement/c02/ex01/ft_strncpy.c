/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:57:38 by camerico          #+#    #+#             */
/*   Updated: 2024/10/03 20:29:41 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int     i;

        i = 0;
        while (src[i] && i < n)
        {
                dest[i] = src[i];
                i++;
        }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
        return (dest);
}

int     main(int argc, char **argv)
{
        (void) argc;
        printf("%s", ft_strncpy(argv[1], argv[2], atoi(argv[3])));
        return (0);
}

/*int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "chloe";
	
	printf("%s", ft_strncpy(dest, src, 1));
	return (0);
}*/
