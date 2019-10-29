/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrete <acarrete@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:00:17 by acarrete          #+#    #+#             */
/*   Updated: 2019/10/20 20:19:16 by acarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int		check_file_format(char *str, int num);
int		count_lines(char *filename, int *n);
char	*file_to_chars(char *filename, int *n);
int		check_str(char *str, int *i);
int		count_chars(char *str, int *i);
int		count_chars_colon_space(char *str, int *i);
int		check_int_spaces(char *str, int *i);
int		check_file_format(char *str, int num);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		print_from_dict(char *str, char *dict, int *vars);
int		print_3_chars(char *chars, char *dict, int len, int print);
char	*zeros(int len);
int		ft_strlen(char *str);
char	*padding_num(char *num, int len);
int		print_zeros(int num, char *dict, int d_len, int print);
int		print_zero(char *num, char *dict, int d_len, int print);
int		print_number(char *num, char *dict, int d_len, int print);
int		main(int argc, char **argv);

#endif
