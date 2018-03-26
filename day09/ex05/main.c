#include <unistd.h>

int ft_antidote(int i, int j, int k);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int isneg;

	isneg = 1;
	if (nb < 0)
		isneg = -1;
	if (nb == nb % 10)
	{
		if (isneg == -1)
			ft_putchar('-');
		ft_putchar('0' + nb * isneg);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10) * isneg);
	}
}

int		main(void)
{
	ft_putnbr(ft_antidote(100, 2, 10));
}
