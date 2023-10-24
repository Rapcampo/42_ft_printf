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

// functions used

int	ft_printf(const char *format, ...);

#endif
