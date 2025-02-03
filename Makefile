# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 18:13:23 by lbaumeis          #+#    #+#              #
#    Updated: 2025/02/03 14:36:49 by lbaumeis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c
CFILES += src/ft_strlen.c src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memmove.c
CFILES += src/ft_strlcpy.c src/ft_strlcat.c src/ft_toupper.c src/ft_tolower.c src/ft_strchr.c
CFILES += src/ft_strrchr.c src/ft_strncmp.c src/ft_memchr.c src/ft_memcmp.c src/ft_strnstr.c
CFILES += src/ft_atoi.c src/ft_calloc.c src/ft_strdup.c src/ft_substr.c src/ft_strjoin.c
CFILES += src/ft_strtrim.c src/ft_striteri.c src/ft_putchar_fd.c src/ft_putstr_fd.c
CFILES += src/ft_putendl_fd.c src/ft_putnbr_fd.c src/ft_split.c src/ft_itoa.c src/ft_strmapi.c
CFILES += src/ft_printf.c src/ft_printchar.c src/ft_printstr.c src/ft_printnbr.c src/ft_printptr.c
CFILES += src/ft_decideformat.c src/ft_strcmp.c src/ft_white.c src/ft_atof.c src/ft_str_upper.c
CFILES += src/ft_isalpha_extend.c src/ft_isprint_extend.c src/ft_isascii_extend.c
CFILES += get_next_line.c get_next_line_utils.c src/ft_strjoin_free_both.c src/ft_strjoin_free_one.c
CFILES += src/ft_str_lower.c src/ft_arrlen.c src/ft_free_double.c src/ft_print_array.c
CFILES += src/ft_strcmp_bool.c src/ft_strnstr_bool.c src/ft_atoi_long.c src/ft_itoa_long.c
CFILES += src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstsize.c src/ft_lstlast.c src/ft_strcpy.c
CFILES += src/ft_lstadd_back.c src/ft_lstdelone.c src/ft_lstclear.c src/ft_lstiter.c src/ft_lstmap.c
CFILES += src/ft_strcat.c src/ft_strlen_2d.c src/ft_realloc_2d.c src/ft_free_2d.c src/ft_strncpy.c
CFILES += src/ft_print_array_fd.c src/ft_strspn.c src/ft_strappend.c src/ft_realloc.c src/ft_only_white.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

#NUMTH = $(shell nproc)
#MAKEFLAGS += --jobs=$(NUMTH)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES) 
	ranlib $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean
	$(MAKE) all
	
.PHONY: all clean fclean re