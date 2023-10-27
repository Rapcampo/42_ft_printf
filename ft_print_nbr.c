/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:58:12 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/27 12:58:21 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base(int fd, size_t n, const char *base)
{
	auto int len = 0;
	auto size_t base_len = 0;
	if (base[0] == '-' && (ssize_t)n < 0)
	{
		n = (size_t)(-(ssize_t)n < 0);
		len += write(fd, "-", 1);
		base++;
	}
	else if (base[0] == '-')
		base++;
	while (base[base_len])
		base_len++;
	if (n >= base_len)
		len += ft_print_base(fd, n / base_len, base);
	len += write(fd, &base[n % base_len], 1);
	return (len);
}

/*void	ft_print_nbr(int nbr, int *length)
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
}*/

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

/*void	ft_hexadecimal(unsigned int x, int *length, char which_x)
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
}*/
