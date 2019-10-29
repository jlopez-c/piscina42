/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:19:29 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 15:26:18 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int sawp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (*(tab + i) < *(tab + j))
			{
				swap = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = swap;
			}
			j++;
		}
		i++;
	}
}
