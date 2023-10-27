/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:36:51 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/24 13:36:55 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//libraries to be used

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>

//define bases

# define SDECIMAL "-0123456789"
# define UDECIMAL "0123456789"
# define HEX_LO "0123456789abcedf"
# define HEX_UP "0123456789ABCDEF"

// functions used

void	ft_putchar_len(char c, int *length);
void	ft_string(char *args, int *length);

int		ft_print_base(int fd, size_t n, const char *base);
void	ft_print_nbr(int nbr, int *length);
void	ft_pointer(size_t pointer, int *length);
void	ft_hexadecimal(unsigned int x, int *length, char which_x);
void	ft_unsigned_int(unsigned int u, int *length);

int		ft_printf(const char *format, ...);

#endif
