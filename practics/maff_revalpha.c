/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:55:44 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/16 18:01:01 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 122;
	while (i >=  97)
	{
		if (i % 2 == 0)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
	i--;
	}
	ft_putchar('\n');
	return (0);
}
