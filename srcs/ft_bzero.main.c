#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main()
{
	char	s[5] = "abcd\0";

	ft_bzero(&s[2], 2);
	printf("%s", s);
}
