/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:49:13 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/24 05:07:51 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_percent()
{
	write(1, "%", 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	ret_prit;

	ret_prit = 0;
	if (format == 'c')
		ret_prit += ft_putchar(va_arg(args, int));
	else if (format == 's')
		ret_prit += ft_putstr(va_arg(args, char*));
	else if (format == 'p')
		write(1, "no", 2);
	else if (format == 'd')
		ret_prit += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		ret_prit += ft_print_unsigned(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		ret_prit += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		ret_prit += ft_percent();	
	return (ret_prit);

}

int ft_printf(const char *str, ...)
 {
	int	flg;
	int	ret_prit;

	flg = 0;
	ret_prit = 0;
	va_list arg;
	va_start (arg, str);
	while (str[flg])
	{
		if (str[flg] == '%')
		{
			ret_prit += ft_format(arg, str[flg + 1]);
			flg++;
		}
		else
			ret_prit += ft_putchar(str[flg]);
		flg++;
	}
	 va_end(arg);
	 return (ret_prit);
 }
