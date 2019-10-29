/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_spaces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:00:16 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:20:34 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		check_int_spaces(char *str, int *i)
{
	long	num;

	num = count_chars(str, i);
	*i += num;
	if (num == 0)
		return (-1);
	while (str[*i] == ' ')
		*i += 1;
	if (str[*i] != ':')
		return (-1);
	return (0);
}
