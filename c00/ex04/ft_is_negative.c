/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 17:59:02 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/06 18:08:04 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int x)
{
	if (x <= 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int		main(void)
{
	ft_is_negative(-5);
	return (0);
}
