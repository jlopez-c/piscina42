/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:09:44 by jlopez-c          #+#    #+#             */
/*   Updated: 2019/10/24 13:22:30 by jlopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	pos;
	int				i;
	int				j;

	i = 0;
	size_dest = 0;
	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	while (dest[size_dest] != '\0')
		size_dest++;
	if (size < size_dest)
		return (size + size_src);
	i = 0;
	j = size_dest;
	pos = size - size_dest;
	while (src[i] != '\0' && pos-- > 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (size_dest + size_src);
}
