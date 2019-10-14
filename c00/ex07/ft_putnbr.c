/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:11:15 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/14 18:09:51 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int bb;

	if (nb < 0)
	{
		ft_putchar('-');
		bb = nb * -1;
	}
	else
		bb = nb;
	if (bb > 10)
	{
		ft_putnbr(bb / 10);
	}
	ft_putchar((bb % 10) + 48);
}
