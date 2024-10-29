/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:01:44 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/27 19:11:14 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(size_t value)
{
	int		written_len;
	char	arr[17];
	int		n;

	written_len = ft_print_string("0x");
	if (0 > written_len)
		return (-1);
	else if (0U == value)
	{
		written_len += ft_print_string("0");
		if (2 > written_len)
		{
			return (-1);
		}
	}
	else
	{
		ft_nbr_to_str(value, arr, 16U, 'x');
		n = ft_print_string(arr);
		if (0 > n)
			return (-1);
		written_len += n;
	}
	return (written_len);
}
