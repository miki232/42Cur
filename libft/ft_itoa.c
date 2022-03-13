/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:25:33 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/13 02:01:05 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int halo(long nb)
{
    int len;
    
    len = 0;
    if (nb < 0)
    {
        nb = nb * - 1;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);   
}

char *ft_itoa(int num)
{
    char *master;
    long n;
    int chief;

    n = num;
    chief = halo(n);
    if (!(master = ((char *)malloc(sizeof(char) * (chief + 1)))))
        return (0);
    master[chief--] = '\0';
    if (n == 0)
    {
        master[0] = 48;
    }
    if (n < 0)
    {
        master[0] = '-';
        n = n * - 1;      
    }
    while (n > 0)
    {
        master[chief] = 48 + (n % 10);
        n = n / 10;
        chief--;
    }
    return (master);
}