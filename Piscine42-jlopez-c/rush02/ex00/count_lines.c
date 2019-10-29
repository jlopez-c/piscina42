/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:10:41 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:02:20 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		count_lines(char *filename, int *n)
{
	int		num;
	int		fd;
	char	c;
	int		error;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	num = 0;
	while ((error = read(fd, &c, 1)) > 0)
	{
		if (c == '\n')
			*n += 1;
		num++;
	}
	close(fd);
	return (error == -1 ? -1 : num);
}
