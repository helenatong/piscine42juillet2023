SOURCES = atoi.c file.c
NAME = do-op

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ $(CC) -o $(NAME) $(OBJECTS)

%.o : %.c
	@ $(CC) $(CFLAGS) -o $@ -c $<

clean :
	@ $(RM) $(OBJECTS)

fclean : clean
	@ $(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re
