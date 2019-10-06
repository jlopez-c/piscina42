/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:46:59 by jlozano-          #+#    #+#             */
/*   Updated: 2019/10/06 15:21:19 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char caracter);

int		rush(int x, int y)
{
	int cx;
	int cy;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{
			if ((cx == 1 || cx == x) && (cy == 1 || cy == y))
				ft_putchar('o');
			if ((cx > 1 && cx < x) && (cy == 1 || cy == y))
				ft_putchar('-');
			if ((cx == x || cx == 1) && cy > 1 && cy < y)
				ft_putchar('|');
			if (cx == x)
				ft_putchar('\n');
			if (cx > 1 && cx < x && cy > 1 && cy < y)
				ft_putchar(' ');
			cx++;
		}
		cx = 0;
		cy++;
	}
	return (0);
}
