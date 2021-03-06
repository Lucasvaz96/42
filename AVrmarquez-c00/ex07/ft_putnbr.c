#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive_putnbr(long int nb)
{
	char	nb_char;

	if (nb > 9)
	{
		recursive_putnbr(nb / 10);
	}
	nb_char = nb % 10 + '0';
	ft_putchar(nb_char);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	recursive_putnbr(n);
}
