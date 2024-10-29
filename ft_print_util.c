/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:20:27 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/28 13:41:47 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	reverse_string(char *result, char *last_index)
{
	char	*start;
	char	*end;
	char	temp;

	start = result;
	end = last_index - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int	ft_nbr_to_str(size_t value, char *res, unsigned int base, char type)
{
	char	*iter;
	size_t	digit;

	if (0U == value)
	{
		*res = '0';
		return (0);
	}
	iter = res;
	while (0U < value)
	{
		digit = value % base;
		if (10U > digit)
			*iter = (char)('0' + digit);
		else if ('x' == type)
			*iter = (char)('a' + (digit - 10U));
		else if ('X' == type)
			*iter = (char)('A' + (digit - 10U));
		iter++;
		value /= base;
	}
	*iter = '\0';
	reverse_string(res, iter);
	return (1);
}
