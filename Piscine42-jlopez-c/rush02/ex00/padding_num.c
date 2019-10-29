/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:02:23 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:07:09 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

char	*padding_num(char *num, int len)
{
	int		i;
	int		j;
	char	*buf_padding;

	if (len % 3 == 1)
		j = 2;
	else if (len % 3 == 2)
		j = 1;
	else
		j = 0;
	buf_padding = malloc(sizeof(char) * (len + j + 1));
	if (buf_padding == NULL)
		return (NULL);
	buf_padding[0] = '0';
	buf_padding[1] = '0';
	buf_padding[2] = '0';
	i = 0;
	while (i < len)
	{
		buf_padding[j] = num[i];
		i++;
		j++;
	}
	buf_padding[j] = 0;
	return (buf_padding);
}
