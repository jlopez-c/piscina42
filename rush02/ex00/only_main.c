/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:54:38 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:44:52 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		check_argv(char *str)
{
	int	i;

	if (str[0] == 0)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		num;

	if (!(num = 0) && argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	str = file_to_chars("numbers.dict", &num);
	if (-1 == check_file_format(str, num))
	{
		write(1, "Dict Error\n", 11);
		free(str);
		return (0);
	}
	if (-1 == check_argv(argv[1]) || -1 == print_number(argv[1], str, num, 0))
	{
		write(1, "Error\n", 6);
		free(str);
		return (0);
	}
	print_number(argv[1], str, num, 1);
	write(1, "\n", 1);
	free(str);
	return (0);
}
