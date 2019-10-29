/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:49:19 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:02:43 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

char	*file_to_chars(char *filename, int *n)
{
	int		num;
	int		error;
	char	*table;
	int		fd;
	char	c;

	num = count_lines(filename, n);
	if (num == -1)
		return (NULL);
	table = malloc(sizeof(char) * (num + 1));
	fd = open(filename, O_RDONLY);
	if (fd == -1 || table == NULL)
		return (NULL);
	num = 0;
	while ((error = read(fd, &c, 1)) > 0)
	{
		table[num] = c;
		num++;
	}
	table[num] = 0;
	close(fd);
	if (error == -1)
		return (NULL);
	return (table);
}
