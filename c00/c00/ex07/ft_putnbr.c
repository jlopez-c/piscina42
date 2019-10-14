#include <unistd.h>

void	putchar(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar(-3);
		putchar(2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		putchar(-3);
	}
	if (nb >= 10)
	{
		ft_putnbr((nb - (nb % 10)) / 10);
	}
	putchar(nb % 10);
}