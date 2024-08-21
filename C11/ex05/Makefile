CC = cc
FLAGS = -Wall -Wextra -Werror 

CFILES = srcs/do_op.c srcs/ft_atoi.c srcs/ft_putnb.c srcs/main.c srcs/operation.c
OBJECTS = $(CFILES:.c=.o)

NAME = do-op

all:
	${CC} ${CFLAGS}  ${CFILES} -o ${NAME}

clean:
	$(RM)  $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
