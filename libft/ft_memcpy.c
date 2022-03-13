/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:54:48 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/11 15:38:23 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, unsigned int num)
{
	unsigned int	x;

	if (dest == NULL && source == NULL)
		return (NULL);
	x = 0;
	while (x < num)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)source)[x];
		x++;
	}
	return (dest);
}
