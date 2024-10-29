/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:20:24 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/29 13:13:52 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(char type, va_list args)
{
	int	written_len;

	if ('c' == type)
		written_len = ft_print_char((char) va_arg(args, int));
	else if ('s' == type)
		written_len = ft_print_string(va_arg(args, const char *));
	else if ('p' == type)
		written_len = ft_print_ptr(va_arg(args, size_t));
	else if (('d' == type) || ('i' == type))
		written_len = ft_print_signed_number(va_arg(args, int));
	else if ('u' == type)
		written_len = ft_print_unsigned_number(va_arg(args, unsigned int));
	else if (('x' == type) || ('X' == type))
		written_len = ft_print_hex(va_arg(args, unsigned int), type);
	else if ('%' == type)
		written_len = ft_print_char('%');
	else
		written_len = 0;
	return (written_len);
}

int	ft_printf(const char *format,...)
{
	int		n;
	va_list	args;
	int		written_len;

	written_len = 0;
	va_start(args, format);
	while (('\0' != *format) && (0 <= written_len))
	{
		if ('%' == *format)
		{
			format++;
			n = ft_type(*format, args);
		}
		else
			n = ft_print_char(*format);
		format++;
		written_len += n;
		if (-1 == n)
		{
			written_len = -1;
		}
	}
	va_end(args);
	return (written_len);
}
