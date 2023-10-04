SRC = srcs/ft_putchar.c	srcs/ft_putstr.c	srcs/ft_strcmp.c	srcs/ft_strlen.c	srcs/ft_swap.c
CC = gcc -Wall -Wextra -Werror
LIB = libft.a

%.o :  %.c
	$(CC) -c $< -o $@ -I includes

all : $(LIB)

$(LIB) : ${SRC:.c=.o }
	ar crs $(LIB) ${SRC:.c=.o}

clean :
	rm -f ${SRC:.c=.o}

fclean : clean
	rm -f $(LIB)

re : fclean all
