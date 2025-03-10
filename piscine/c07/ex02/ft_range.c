/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:26:24 by camerico          #+#    #+#             */
/*   Updated: 2024/10/09 12:59:42 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min > max)
		return(0);
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (ptr == 0)
		return (0);
	while(ptr[i] < max)
	{
		ptr[i] = min + i;
		write(1, &ptr[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
    int i;
    int min;
    int max;

    if (argc != 3)
    {
        printf("%s\n", argv[0]);
        return (1);
    }

    min = atoi(argv[1]);
    max = atoi(argv[2]);

    //(ft_range(min, max) == NULL)
    //{
    //    printf("nope\n");
    //    return (1);
    //}

    i = 0;
    while (i < (max - min))
    {
        printf("%d\n", ft_range(min, max)[i]);
        i++;
    }

    free(ft_range(min, max));

    return (0);
}
