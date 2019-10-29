# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarrete <acarrete@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 18:49:47 by acarrete          #+#    #+#              #
#    Updated: 2019/10/20 20:29:13 by acarrete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = check_file_format.c check_int_spaces.c check_str.c count_chars.c \
	   count_chars_colon_space.c count_lines.c file_to_chars.c ft_strlen.c \
	   ft_strncmp.c only_main.c padding_num.c print_3_chars.c \
	   print_from_dict.c print_number.c print_zeros.c zeros.c print_zero.c

OBJS = check_file_format.o check_int_spaces.o check_str.o count_chars.o \
	   count_chars_colon_space.o count_lines.o file_to_chars.o ft_strlen.o \
	   ft_strncmp.o only_main.o padding_num.o print_3_chars.o \
	   print_from_dict.o print_number.o print_zeros.o zeros.o print_zero.o

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $^

clean:
	/bin/rm -f $(OBJS)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
