all: printy

printy: ft_memset.o ft_bzero.o ft_memcpy.o main.o
	gcc -Wextra -Werror -Wall main.o ft_memset.o ft_bzero.o ft_memcpy.o -o prog

ft_memset.o: ft_memset.c
	gcc -Wextra -Werror -Wall -c ft_memset.c -o ft_memset.o

ft_bzero.o: ft_bzero.c
	gcc -Wextra -Werror -Wall -c ft_bzero.c -o ft_bzero.o

ft_memcpy.o: ft_memcpy.c
	gcc -Wextra -Werror -Wall -c ft_memcpy.c -o ft_memcpy.o

main.o: main.c libft.h
	gcc -Wextra -Werror -Wall -c main.c -o main.o

clean:
	rm -rf *.o *~ printy