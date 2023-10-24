/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:23:19 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/24 13:55:53 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...);



int ft_printf(const char *format, ...)
{
    auto int i;
    va_list args; 
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            base_check(format, args);
        }
        else
        {
            print_str(format, args);
        }
        i++;
    va_end(args);
    return (format);
}
