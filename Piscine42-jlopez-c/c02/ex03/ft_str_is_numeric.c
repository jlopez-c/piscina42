/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:14:07 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/23 17:01:28 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			x = 0;
		i++;
	}
	return (x);
}
