/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:57:33 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/23 17:00:33 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_alpha(char *str);

int		main(void)
{
	char b[] = "as56";

	printf("%d\n", ft_str_is_alpha(b));

	return (0);
}
