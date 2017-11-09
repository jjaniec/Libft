#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

int	 main()
{
	char	s[6] = "abcde\0";

	ft_memset(&s[0], 'z', 2);
	printf("%s", s);
}
