/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:03:20 by ccolaiac          #+#    #+#             */
/*   Updated: 2022/04/01 17:32:04 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = c;
	i = 0;
	while (s[i] != b && s[i] != '\0')
		i++;
	if (s[i] == b)
		return ((char *) s + i);
	return (NULL);
}

static char	*ft_read(int fd, char *string)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	while (!ft_strchr(string, '\n'))
	{
		i = read(fd, temp, BUFFER_SIZE);
		if (i == -1 || i == 0)
			break ;
		temp[i] = '\0';
		string = ft_strjoin(string, temp);
	}
	free(temp);
	if (ft_strlen(string) == 0)
	{
		free(string);
		return (NULL);
	}
	return (string);
}

char *get_next_line(int fd)
{
	static char	*save[257];
	char 		*ret;

	if (fd < 0 || fd > 256 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!save[fd])
		save[fd] = ft_strdup("");
	save[fd] = ft_read(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	ret = ft_substr(save[fd], 0, ft_search(save[fd], '\n') + 1, 0);
	save[fd] = ft_substr(save[fd], ft_search(save[fd], '\n') + 1, ft_strlen(save[fd]), 1);
	return (ret);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int		main()
{
	int cc = open("suca.txt", O_RDONLY);
	//int fd = open("42test-gnl-station-2022/test/brouette.txt", O_RDONLY);
	printf("%s\n", get_next_line(cc));
//  	printf("%s\n", get_next_line(cc));
//  	printf("%s\n", get_next_line(cc)); 
// 	printf("%s\n", get_next_line(fd));
// 	printf("%s\n", get_next_line(cc));
// 	printf("%s\n", get_next_line(fd));	
}
