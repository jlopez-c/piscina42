/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:55:19 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:39:21 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

static int	print_group(char *buf_padding, char *dict, int *args)
{
	int i;
	int d_len;
	int print;
	int n_groups;

	i = args[0];
	d_len = args[1];
	print = args[2];
	n_groups = args[3];
	if (-1 == print_3_chars(buf_padding + i * 3, dict, d_len, print))
		return (-1);
	if (n_groups - i - 1 > 0 && (buf_padding[i * 3] != '0' ||
				buf_padding[i * 3 + 1] != '0' ||
				buf_padding[i * 3 + 2] != '0'))
	{
		if (-1 == print_zeros((n_groups - i - 1) * 3 + 1, dict,
					d_len, print))
			return (-1);
	}
	return (0);
}

int			print_number(char *num, char *dict, int d_len, int print)
{
	int		len;
	int		n_groups;
	int		i;
	char	*buf_padding;
	int		args[4];

	if (ft_strncmp(num, "0", 1) == 0 && num[1] == 0)
		return (print_zero(num, dict, d_len, print));
	len = ft_strlen(num);
	buf_padding = padding_num(num, len);
	len = ft_strlen(buf_padding);
	if (buf_padding == NULL)
		return (-1);
	n_groups = (len - 1) / 3 + 1;
	i = 0;
	while (i < n_groups)
	{
		args[0] = i;
		args[1] = d_len;
		args[2] = print;
		args[3] = n_groups;
		if ((i += 1) && -1 == print_group(buf_padding, dict, args))
			return (-1);
	}
	return (0);
}
