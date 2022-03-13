/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:19:10 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/11 15:19:18 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int num)
{
	unsigned int	x;
	unsigned char	*str;

	str = (unsigned char *)s;
	x = 0;
	while (x < num)
	{
		if (str[x] == (unsigned char)c)
			return (&str[x]);
		x++;
	}
	return (0);
}
