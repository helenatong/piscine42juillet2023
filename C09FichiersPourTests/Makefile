SOURCES = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
HEADERS = includes
NAME = libft.a

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RANLIB = ranlib
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(NAME) $^
	$(RANLIB) $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I ${HEADERS} -o $@ -c $<

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re