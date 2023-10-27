/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:58:31 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/27 12:58:34 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_len(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_string(char *args, int *length)
{
	auto size_t i = 0;
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
