/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:23:34 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/13 03:37:18 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void			*ptr;
	unsigned int	ix;

	ix = count * size;
	if(!(ptr = (char *)malloc(ix)))
		return (0);
	ft_bzero(ptr, count);
	return (ptr);
}
