/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:01:21 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/20 20:28:09 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		print_zero(char *num, char *dict, int d_len, int print)
{
	int		args[4];

	args[0] = 1;
	args[1] = d_len;
	args[2] = print;
	return (print_from_dict(num, dict, args));
}
