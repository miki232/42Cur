/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:43:50 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/07 17:04:00 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int n)
{
	int x;
	unsigned char * ptr;

	ptr = (unsigned char *)str;
	x = 0;
	while (x < n)
	{
		ptr[x++] = (unsigned char)c;
	}
	return (str);
}
