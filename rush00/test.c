/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 11:31:19 by jlozano-          #+#    #+#             */
/*   Updated: 2019/10/06 14:23:02 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void	rush(int c, int l)
{
	int cc;
	int cl;

	cc = 0;
	cl = 0;
	while (cl <= l)
	{
		while (cc <= c)
		{
			if ((cc == 0 || cc == c) && (cl == 0 || cl == l))
				ft_putchar('o');
			if ((cc > 1 && cc < c) && (cl == 0 || cl == l))
				ft_putchar('-');
			if ((cc == c || cc == 0) && cl > 1 && cl < l)
				ft_putchar('|');
			if (cc == c)
				ft_putchar('\n');
			if (cc > 1 && cc < c && cl > 1 && cl < l)
				ft_putchar(' ');
			cc++;
		}
		cc = 0;
		cl++;
	}
}

int		main(void)
{
	rush(10, 6);
	return (0);
}
