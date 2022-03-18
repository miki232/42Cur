/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:36:46 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/18 04:57:00 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	hwimt(const char *str, char spec)
{
	int		y;

	y = 0;
	while (*str)
	{
		if (*str != spec)
		{
			y++;
			while (*str && *str != spec)
				str++;
		}
		else
			str++;
	}
	return (y);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**big;

	if (!s)
		return (NULL);
	i = 0;
	big = (char **)malloc((hwimt(s, c) + 1) * sizeof(char *));
	if (!big)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			big[i++] = 
			(s - len, 0, len);
		}
		else
			++s;
	}
	big[i] = 0;
	return (big);
}

// #include <stdio.h>
// int	main()
// {
// 	ft_split("ciao come stai c c c c", ' ');

// }