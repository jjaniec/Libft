#include <strings.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main()
{
	char	tab[10] = "abcdefghij";

	printf("%s", (char *)ft_memchr(tab, 'g', 8));
}
