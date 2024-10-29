/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:20:24 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/27 18:34:22 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int value, char type)
{
	int		written_len;
	char	arr[9];

	if (0U == value)
		written_len = ft_print_char('0');
	else
	{
		ft_nbr_to_str(value, arr, 16U, type);
		written_len = ft_print_string(arr);
	}
	return (written_len);
}
