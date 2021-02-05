NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c main.c

OBJS = $(SRCS:.c=.o)
FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc $(FLAGS) -c $(SRCS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all