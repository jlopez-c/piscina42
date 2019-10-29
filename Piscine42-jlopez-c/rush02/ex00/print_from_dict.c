/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_from_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:13:12 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:33:27 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

static void	print_line_dict(char *dict, int *vars, int *space, int *i)
{
	check_int_spaces(dict, i);
	*i += count_chars_colon_space(dict, i);
	if (*space && vars[2])
		write(1, " ", 1);
	while (dict[*i] != '\n')
	{
		if (vars[2])
			write(1, dict + *i, 1);
		*i += 1;
	}
	if (vars[2])
		*space = 1;
}

int			print_from_dict(char *str, char *dict, int *vars)
{
	int			i;
	int			n;
	static int	space = 0;

	i = 0;
	n = 0;
	while (n < vars[1])
	{
		if (dict[i] == '\n')
		{
			i++;
			n++;
			continue;
		}
		if (0 == ft_strncmp(str, dict + i, vars[0]) &&
			(dict[i + vars[0]] == ':' || dict[i + vars[0]] == ' '))
		{
			print_line_dict(dict, vars, &space, &i);
			return (0);
		}
		check_int_spaces(dict, &i);
		check_str(dict, &i);
		n++;
	}
	return (-1);
}
