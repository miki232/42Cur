/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:57:15 by gaviles-          #+#    #+#             */
/*   Updated: 2022/03/12 10:56:18 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	char			*temp;
	char			*ll;
	unsigned int	len;

	temp = (char *)ft_memchr(dest, '\0', size);
	if (temp == NULL)
		return (size + ft_strlen(src));
	ll = (char *)src;
	len = (unsigned int)(temp - dest) + ft_strlen(ll);
	while ((unsigned int)(temp - dest) < size - 1 && *ll != '\0')
	{
		*temp = *ll;
		temp++;
		ll++;
	}
	*temp = '\0';
	return (len);
}