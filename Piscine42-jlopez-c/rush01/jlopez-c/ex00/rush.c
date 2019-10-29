/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:07:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/13 21:26:44 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_arr(int array[4][4][2])
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			c = array[i][j][0] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}

}

int			errors(int argc, char *argv[1])
{
	int i;
	int error;

	i = 0;
	error = 0;
	if (argc != 2)
		error = 1;
	while (argv[1][i])
	{
		if (i % 2 != 0 && argv[1][i] != ' ')
			error = 1;
		else if (i % 2 == 0 && !(argv[1][i] >= '1' && argv[1][i] <= '4'))
			error = 1;
		i++;
	}
	if (i != 31)
		error = 1;
	return (error);
}

void		msg(int error)
{
	char msg[5] = "Error";
	int i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(1, &msg[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int			main(int argc, char *argv[])
{
	int map[4][4][2];
	int i;
	int error;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	/* error = errors(argc, *argv[1]); */
	if (error == 1)
	{
		msg(error);
		return (0);
	}
	while (i < 4)
	{
		while (j < 4)
		{
			if (k % 2 == 0)
			{
				map[i][j][0] = argv[1][k] - '0';
				j++;
			}
			k++;
		}
		j = 0;
		i++;
	}
	print_arr(map);
	return (0);
}
