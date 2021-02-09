#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int count;

	count = 0;
	while (count != n)
	{
		((unsigned char *)str)[count] = '\0';
		count++;
	}
}
