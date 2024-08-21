
CC = cc
FLAGS = -Wall -Wextra -Werror -I includes

CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = $(CFILES:.c=.o)
HFILE = includes/ft.h

NAME = libft.a


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM)  $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean