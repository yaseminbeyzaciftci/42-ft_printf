/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:20:24 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/28 13:41:01 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(char ch);

int	ft_print_string(const char *str);

int	ft_print_ptr(size_t value);

int	ft_print_signed_number(int value);

int	ft_print_unsigned_number(unsigned int value);

int	ft_print_hex(unsigned int value, char type);

int	ft_printf(const char *format, ...);

int	ft_nbr_to_str(size_t value, char *res, unsigned int base, char type);

#endif
