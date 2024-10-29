/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:51:01 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/27 19:50:34 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_signed_number(int value)
{
	char	arr[11];
	int		written_len;
	size_t	number;

	if (0 == value)
		written_len = ft_print_char('0');
	else
	{
		written_len = 0;
		if (0 > value)
		{
			written_len = ft_print_char('-');
			if (0 > written_len)
				return (written_len);
			number = (size_t)(-(long int)value);
		}
		else
			number = (size_t)value;
		ft_nbr_to_str(number, arr, 10U, '\0');
		written_len += ft_print_string(arr);
		if (0 == written_len)
			return (-1);
	}
	return (written_len);
}
