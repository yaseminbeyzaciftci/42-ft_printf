/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:40:24 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/28 13:41:26 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char ch)
{
	ssize_t	n;

	n = write(1, &ch, 1U);
	if (0 > n)
		return (-1);
	return (n);
}

int	ft_print_string(const char *str)
{
	int	n;
	int	written_len;

	if (NULL == str)
	{
		return (ft_print_string("(null)"));
	}
	written_len = 0;
	while ('\0' != *str)
	{
		n = ft_print_char(*str);
		if (0 > n)
			return (-1);
		str++;
		written_len += n;
	}
	return (written_len);
}
