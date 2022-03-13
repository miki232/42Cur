/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:29:00 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/13 02:45:30 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int    ix;
    unsigned int    ls1;
    unsigned int    ls2;
    char *          str;
    
    ix = 0;
    ls1 = ft_strlen(s1);
    ls2 = ft_strlen(s2);
    if (!(str = (char *)malloc(sizeof(s1) * ls1 + ls2)))
        return (0);
    ft_memcpy(str, s1, ls1);
    while (*s2)
    {
        str[ls1] = *s2;
        s2++;
        ls1++;
    }
    str[ls1] = 0;
    return (str);
}