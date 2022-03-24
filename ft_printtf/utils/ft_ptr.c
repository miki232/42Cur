/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:03:54 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/24 09:17:35 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_hexptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_ptr_hex(uintptr_t num)
{
	if (num >= 16)
	{
		ft_ptr_hex(num / 16);
		ft_ptr_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (num <= 9)
				ft_putchar_fd((num + '0'), 1);
			else
				ft_putchar_fd((num - 10 + 'a'), 1);
		}
	}
}

int	ft_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_ptr_hex(ptr);
		print_length += ft_hexptrlen(ptr);
	}
	return (print_length);
}