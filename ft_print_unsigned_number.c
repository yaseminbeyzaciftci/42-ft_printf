/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:50:24 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/27 20:10:23 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_number(unsigned int value)
{
	int		written_len;
	char	arr[11];

	if (0U == value)
		written_len = ft_print_char('0');
	else
	{
		ft_nbr_to_str((size_t)value, arr, 10U, '\0');
		written_len = ft_print_string(arr);
	}
	return (written_len);
}
