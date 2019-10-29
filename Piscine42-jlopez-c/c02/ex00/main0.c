/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:01:53 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/21 20:15:29 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char a[] = "";
	char b[] = "w";

	ft_strcpy(b, a);
	printf("%s\n", b);

	return (0);
}
