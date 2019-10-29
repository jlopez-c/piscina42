/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:52:51 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/18 13:11:11 by jlopez-c         ###   ########.fr       */
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

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
			ft_putchar(c - 32);
		else
			ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
