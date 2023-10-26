/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:23:19 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/24 17:11:15 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_base_check(char c, va_list *args, int *len, int *i)
{
	if (c == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_string(va_arg(*args, char *), len);
	else if (c == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (c == 'd' || c == 'i')
		ft_print_nbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (c == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	auto int length = 0;
	auto int i = 0; 
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%')
			ft_base_check(format[++i], &args, &length, &i);
		else
			ft_putchar_len((char)format[i], &length);
		i++;
	}
	va_end (args);
	return (length);
}
