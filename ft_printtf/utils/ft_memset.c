/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:43:50 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/24 09:48:18 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

void	*ft_memset(void *str, int c, int n)
{
	int				x;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	x = 0;
	while (x < n)
	{
		ptr[x++] = (unsigned char)c;
	}
	return (str);
}
