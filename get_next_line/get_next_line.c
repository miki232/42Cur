/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:28:00 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/23 18:32:42 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char str;
	char *buff;
	int	temp;
	
	temp = 1;
	buff = malloc((100) * sizeof(char *));
	if (!buff)
		return(NULL);
	temp = read(fd, buff, 95);
	if (!ft_strchr(buff, '\n') &&)
	return (buff);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int		main()
{
	int fd = open("suca.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
}