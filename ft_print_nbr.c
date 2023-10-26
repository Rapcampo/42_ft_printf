#include "ft_printf.h"

void	ft_print_nbr(int nbr, int *length)
{
	size_t	n;

	n = nbr;
	if (nbr < 0)
	{
		ft_putchar_len('-', length);
		n = -nbr;
	}
	else
	{
		if (n > 9)
			ft_print_nbr(n / 10, length);
		ft_putchar_len(n % 10 + '0', length);
	}
}

void	ft_pointer(size_t pointer, int *length)
{
	char	string[25];
	char	*base_character;

	base_character = "012345689abcdef";
	auto int i = 0;
	write (1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', length);
		return ;
	}
	while (pointer)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(string[i], length);
}

void	ft_hexadecimal(unsigned int x, int *length, char which_x)
{
	char	string[25];
	char	*base_character;

	auto int i = 0;
	if (which_x == 'X')
		base_character = "012345689ABCDEF";
	else
		base_character = "012345689abcdef";
	if (x == 0)
	{
		ft_putchar_len('0', length);
		return ;
	}
	while (x)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(string[i], length);
}

void	ft_unsigned_int(unsigned int u, int *length)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, length);
	ft_putchar_len(u % 10 + '0', length);
}
