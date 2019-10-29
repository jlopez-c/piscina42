/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zeros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:52:01 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:05:54 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

char	*zeros(int len)
{
	char	*buf;
	int		i;

	buf = malloc(sizeof(char) * (len + 2));
	if (buf == NULL)
		return (NULL);
	buf[0] = '1';
	i = 1;
	while (i < len + 1)
	{
		buf[i] = '0';
		i++;
	}
	buf[i] = 0;
	return (buf);
}
