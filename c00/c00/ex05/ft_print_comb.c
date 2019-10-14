/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:38:05 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/13 19:47:12 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int number[3];

	number[0] = '0';
	while (number[0] <= '9')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '9')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				ft_putchar(number[0]);
				ft_putchar(number[1]);
				ft_putchar(number[2]);
				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
