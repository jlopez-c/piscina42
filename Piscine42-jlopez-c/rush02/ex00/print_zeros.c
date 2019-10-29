/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:01:21 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:19:00 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		print_zeros(int num, char *dict, int d_len, int print)
{
	char	*buf;
	int		args[4];
	int		ret;

	args[0] = num;
	args[1] = d_len;
	args[2] = print;
	buf = zeros(num);
	ret = print_from_dict(buf, dict, args);
	free(buf);
	return (ret);
}
