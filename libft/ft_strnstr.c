/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:55:23 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/13 03:09:18 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lie, unsigned int len)
{
	unsigned int	i;

	i = ft_strlen(lie);
	if (*lie == '\0' )
		return ((char *) big);
	while (*big != '\0' && len-- >= i)
	{
		if ((*big == *lie) && ft_memcmp(big, lie, i) == 0)
		{
			return ((char *)big);
		}
		big++;
	}
	return (0);
}