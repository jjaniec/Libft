#include <stdlib.h>
#include <stdio.h>

int main()
{
	char	tab[5] = "LOLOL";
	char	tab2[5] = "ZEHEF";

	ft_memcpy(tab, tab2, 5);
	printf("%s", tab);
}
