/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:06:56 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/08 11:17:58 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str);

char *ft_strrchr(char *str, int c)
{
	int x;

	x = ft_strlen(str);
	
	while (*str)
	{
		if (str[x] == c)
			return (&str[x]);
		x--;
	}
	return (0);
}