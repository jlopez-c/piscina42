/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:58:30 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:32:07 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		check_file_format(char *str, int num)
{
	int	temp;
	int n;
	int i;

	i = 0;
	n = 0;
	while (n < num)
	{
		if (str[i] == '\n')
		{
			i++;
			n++;
			continue;
		}
		temp = check_int_spaces(str, &i);
		if (-1 == temp)
			break ;
		temp = check_str(str, &i);
		if (-1 == temp)
			break ;
		n++;
	}
	return (temp >= 0 ? 0 : -1);
}
