SRCS = src/main.cpp
OBJS = ${SRCS:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror
API = -framework OpenGL -framework AppKit
NAME = Statisticator

all: ${NAME}

${NAME}: ${OBJS}
		make -C mlx
		c++ -c ${CFLAGS} ${SRCS}
		c++ ${CFLAGS} -o  ${NAME} -lmlx -Lmlx ${API} ${OBJS}

clean:
		rm -f src/*.o *.o

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
