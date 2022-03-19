# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 17:59:02 by mabdelba          #+#    #+#              #
#    Updated: 2022/03/19 00:58:30 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c check_double.c check_maxmin.c collect_data.c ft_atoi_l.c \
		ft_atoi.c ft_isdigit.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_putstr.c ft_strncmp.c \
		push.c reverse_rotate.c rotate.c swap.c ft_strjoin.c implement_stack.c \
		ft_split.c ft_substr.c long_list.c push_to_b.c \
		protection.c  final_sort.c is_sorted.c three_numbers.c \
		compt_move.c  push_toa.c sort_five.c push_toa_utils.c

OBJS = $(SRCS:.c=.o)

SRCS_BNS = checker_bonus.c  check_double_bonus.c check_maxmin_bonus.c \
			collect_data_bonus.c ft_atoi_l_bonus.c ft_atoi_bonus.c \
			ft_isdigit_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
			ft_lstnew_bonus.c ft_lstsize_bonus.c ft_putstr_bonus.c \
			ft_strncmp_bonus.c push_bonus.c reverse_rotate_bonus.c \
			rotate_bonus.c swap_bonus.c ft_strjoin_bonus.c \
			implement_stack_bonus.c ft_split_bonus.c ft_substr_bonus.c \
			protection_bonus.c  is_sorted_bonus.c get_next_line_bonus.c \
			get_next_line_utils_bonus.c st_utils_bonus.c
	

OBJS_BNS = $(SRCS_BNS:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_2 = checker

%.o : %.c push_swap_bonus.h push_swap.h
	$(CC) $(FLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)	
	$(CC) $(FLAGS)  $(OBJS) -o $(NAME)

bonus : $(NAME_2)

$(NAME_2) : $(OBJS_BNS)
	$(CC) $(FLAGS)  $(OBJS_BNS) -o $(NAME_2)

clean :
	rm -f $(OBJS) $(OBJS_BNS)

fclean : clean
	rm -f $(NAME) $(NAME_2)

re : fclean all 