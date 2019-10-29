/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:56:37 by ahernand          #+#    #+#             */
/*   Updated: 2019/10/23 21:00:02 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *ft_columns_first(char **map);
{
	int *first_o;
	int i;
	int j;

	i = 0;
	j = 0;
	while (j =! '\0')
	{
		while (i != '\0')
		{
			if (map[i][j] == 'o')
			{
				first_o[0] = i;
				first_o[1] = j;
				return (*first_o);
			}
		}
		i++;
	}
	j++;
	return (0);
}


int *ft_columns_finish(char **map, char *second_o);
{
	char *last_o;
	int *first_o;
	i = first_o[0] + 1;
	j = first_o[1] + 1; 

	while (j =! '\0')
	{
		while (i != '\0')
		{
			if (map[i][j] == 'o')
			{
				second_o[0] = i;
				second_o[1] = j;
				return (*second_o);
			}
		}
		i++;
	}
	j++;
	return (0);
}
int *ft_gravity(char **map, char *first_o);
{
	char *second_o;
	int *first_o;
	int i;
	int j;
	int i2;
	int j2;

	i = first_o[0] + 1;
	j = first_o[1] + 1; 
	i2 = second_o[0] - 1; 
	j2 = second_o[1] - 1; 
	while (j =! j2)
	{
		while (i != i2)
		{
			if (map[i][j] == 'o')
			{
				third_o[0] = i;
				third_o[1] = j;
				return (*third_o);
			}
		}
		i++;
	}
	j++;
	return (0);
}

void  terminer(char **map, char *first_o, char *second_o, char *third_o);
{
	int i;
	int j;
	int i2;
	int j2;
	int z1;
	int z2;

	it = first_o[0] + 1;
	jt = first_o[1] + 1; 
	i2 = second_o[0] - 1; 
	j2 = second_o[1] - 1;
	j3 = third_o[1] - 1;
	while ((jt =! j2) && (it < j3))
	{
		while (it != i2)
		{
			map[i][j] = 'x';
		}
		i++;
	}
	j++;
}

int ft_solver(char **map,int x, int y)
{
	ft_columns_first(map);
	ft_gravity(map, first_o,);
	ft_columns_finish(map, first_o);
	ft_terminer(map, first_o, second_o, third_o);
}


int		block(char **map)
{
	if (map == true)	
		ft_solver(map);
	return(0);
}
