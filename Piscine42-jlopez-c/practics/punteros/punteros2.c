/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punteros2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:22:24 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/15 15:32:50 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int a;
	int *ptr;

	a = 56;
	ptr = &a;
	printf("%d\n", *ptr);

	*ptr = 42;
	printf("%d\n", *ptr);

	printf("%d\n", a);
	return (0);
}
