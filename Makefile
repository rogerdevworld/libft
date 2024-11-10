# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile-r                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 12:58:52 by rmarrero          #+#    #+#              #
#    Updated: 2024/11/10 23:55:39 by rmarrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Mandatory functions
SRC = ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strtrim.c ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c \
ft_strlen.c ft_calloc.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_substr.c\
ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalpha.c \
ft_memcmp.c ft_putnbr_fd.c   ft_strjoin.c ft_strnstr.c ft_split.c ft_itoa.c
OBJS = $(SRC:.c=.o)

# Bonus functions
BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BOBJS = $(BSRC:.c=.o)

NAME = libft.a
HEADER = libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rsc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $?

bonus: $(OBJS) $(BOBJS)
	$(AR) $(NAME) $?

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY : all clean fclean re
