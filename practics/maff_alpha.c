/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:52:51 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/17 13:00:04 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		if (c % 2 == 0)
			ft_putchar(c);
		else
			ft_putchar(c - 32);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
