/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:49:13 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/27 11:07:10 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_percent()
{
	write(1, "%", 1);
	return (1);
}

int	ft_type(va_list args, const char type)
{
	int	ret_prit;

	ret_prit = 0;
	if (type == 'c')
		ret_prit += ft_putchar(va_arg(args, int));
	else if (type == 's')
		ret_prit += ft_putstr(va_arg(args, char*));
	else if (type == 'p')
		ret_prit += ft_ptr(va_arg(args, unsigned long long)) ;
	else if (type == 'd')
		ret_prit += ft_printnbr(va_arg(args, int));
	else if (type == 'i')
		ret_prit += ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		ret_prit += ft_print_unsigned(va_arg(args, int));
	else if (type == 'x' || type == 'X')
		ret_prit += ft_print_hex(va_arg(args, unsigned int), type);
	else if (type == '%')
		ret_prit += ft_percent();	
	return (ret_prit);

}
// int		check_width(char *str, int width)
// {
// 	int ret_print;
// 	char *temp;
	//////////////////////////////////////////////// BONUS OPROSDSapopjj
// 	temp = str;
// 	ret_print = 0;
// 	ft_memcpy(temp, str, width);
// 	return (1);
// }
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
			if (str[flg + 1] == '#')                ////
			{                                       //////
				flg++;                                ////////// Bonus
				if (str[2] == 'X')                 ///////Quando si verifica ft_printf("%#x", ...)
					ret_prit += write(1, "0X", 2);    ////deve restiture 0x....
				if (str[2] == 'x')                 ///
					ret_prit += write(1, "0x", 2);  //
			}			                           //
			//////check_width(va_arg(arg, char*), str[flg + 1]); ///////////// BONUS SUCA DIOPORCO
			ret_prit += ft_type(arg, str[flg + 1]);
			flg++;
		}
		else
			ret_prit += ft_putchar(str[flg]);
		flg++;
	}
	 va_end(arg);
	 return (ret_prit);
 }
 
// int	main()
// {
// 	char *null = NULL;
// 	ft_printf("%d", ft_printf("%s", null));
// 	printf("\n");
// 	printf("%d", printf("%s", null));
// 	//ft_printf("%s\nsuca%s", "Mpare", "ciao");
// }