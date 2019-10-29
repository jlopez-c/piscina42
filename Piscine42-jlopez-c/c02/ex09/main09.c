/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:20:05 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/23 17:21:50 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcapitalize(char *str);

int		main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quaRanTe-deuX; cinquante+et+un";
    printf("%s",(ft_strcapitalize(str)));
    return (0);
}
