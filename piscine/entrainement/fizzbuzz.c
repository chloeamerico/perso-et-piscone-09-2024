/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:25:06 by camerico          #+#    #+#             */
/*   Updated: 2024/10/05 18:05:43 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(int number)
{
	if (number > 9)
		printnum(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main (void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 5 == 0 && number % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			printnum(number);
		write(1, "\n", 1);
		number++;
	}

}
