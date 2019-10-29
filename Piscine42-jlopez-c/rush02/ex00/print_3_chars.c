/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_3_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:55:49 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:04:43 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

static int	print_first(char *chars, char *dict, int *args)
{
	args[0] = 1;
	if (-1 == print_from_dict(chars, dict, args))
		return (-1);
	args[0] = 3;
	if (print_from_dict("100", dict, args) == -1)
		return (-1);
	return (0);
}

int			print_3_chars(char *chars, char *dict, int len, int print)
{
	char	two_chars[2];
	int		args[3];

	args[1] = len;
	args[2] = print;
	if (chars[0] != '0')
	{
		if (print_first(chars, dict, args) == -1)
			return (-1);
	}
	if (chars[1] != '0')
	{
		args[0] = 2;
		two_chars[0] = chars[1];
		two_chars[1] = chars[1] != '1' ? '0' : chars[2];
		if (print_from_dict(two_chars, dict, args) == -1)
			return (-1);
	}
	if (chars[2] != '0' && chars[1] != '1')
	{
		args[0] = 1;
		if (print_from_dict(chars + 2, dict, args) == -1)
			return (-1);
	}
	return (0);
}
