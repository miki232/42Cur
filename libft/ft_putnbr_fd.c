/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:18:34 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/18 00:17:10 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print(char c, int fs)
{
	write (fs, &c, 1);
}

void	ft_put(int nb, int fs)
{
	if (nb == -2147483648)
	{
		print('-', fs);
		print('2', fs);
		nb = 147483648;
	}
	if (nb < 0)
	{
		print('-', fs);
		nb *= -1;
	}
	if (nb < 10)
	{
		print(nb + 48, fs);
		return ;
	}
	else
		ft_put(nb / 10, fs);
	ft_put(nb % 10, fs);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_put(n, fd);
}
