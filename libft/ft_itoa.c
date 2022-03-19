/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:25:33 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/19 10:34:04 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	halo(long nb)
{
	int	len;
	int	mod;

	len = 1;
	mod = 1;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb / mod > 9)
	{
		mod *= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char	*master;
	long	n;
	int		chief;

	n = num;
	chief = halo(n);
	master = ft_calloc(chief + 1, sizeof(char));
	if (!master)
		return (NULL);
	master[chief--] = '\0';
	if (n == 0)
		master[0] = 48;
	if (n < 0)
	{
		master[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		master[chief] = 48 + (n % 10);
		n = n / 10;
		chief--;
	}
	return (master);
}
