#include <stdlib.h>
#include <unistd.h>
char *ft_rot42(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *str;
	char *bob;
	int i;

	str = (char*)malloc(sizeof(*str) * (26 + 1));
	bob = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	ft_strcpy(str, bob);
	ft_rot42(str);
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
