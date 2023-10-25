#include "ft_printf.h"

void	ft_putchar_len(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_string(char *args, int *length)
{
	auto size_t i;
	if (!args)
	{
		write (1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i])
	{
		ft_putchar_len(args[i], length);
		i++;
	}
}
