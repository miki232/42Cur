/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaviles- <gaviles-@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:57:15 by gaviles-          #+#    #+#             */
/*   Updated: 2022/02/21 14:58:30 by gaviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (i < size)
		return (0);
	while (src[c] != '\0' && c < size)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i] = '\0';
	return (i + (c <= size) * size + (size > c) * c);
}
