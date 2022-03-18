/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:36:46 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/18 01:07:34 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	hwimt(const char *str, char spec)
{
	char	ultimate;
	int		y;

	ultimate = spec;
	y = 0;
	while (*str)
	{
		if (ultimate == spec && *str != spec)
		{
			y++;
		}
		ultimate = *str;
		str++;
	}
	return (y);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		y;
	int		z;
	char	*small;
	char	**big;

	if (!s || !c)
		return (NULL);
	i = 0;
	y = 0;
	big = (char **)malloc((hwimt(s, c) + 1) * sizeof(*big));
	if (!big)
		return (NULL);
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			break;
		k = 0;
		while (s[i + k] != 0 && s[i + k] != c)
			k++;
		small = (char *)malloc((k + 1) * sizeof(char));
		if (!small)
			return (NULL);
		z = 0;
		while (z < k)
			small[z++] = s[i++];      
		small[k] = 0;
		big[y] = small;
		y++;
	}
	big[y] = 0;
	return (big);
}
