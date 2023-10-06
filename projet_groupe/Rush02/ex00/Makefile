SRCS := array.c aziz.c dictionary.c main.c numbers.c numbers2.c print.c strs.c

OBJS := ${SRCS:.c=.o}

HEADERS := ${wildcard *.h}

CC := cc

CFLAGS := -Wall -Wextra -Werror

TARGET := rush-02

.PHONY: all

all : ${TARGET}

${TARGET} : ${OBJS}
	${CC} ${CFLAGS} -o $@ $^

%.o : %.c ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

.PHONY : clean fclean re

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${TARGET}

re : fclean all
