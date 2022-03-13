/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:40:43 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/13 01:47:04 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char			*ft_strchr(const char *str, int c);
void			*ft_memset(void *str, int c, int n);
void			ft_bzero(void *dst, int n);
int				ft_isalnum(int argument);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int x);
int				ft_isprint(int arg);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int				ft_strlen(const char *str);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
int				ft_atoi(const char *str);
void			*ft_calloc(unsigned int count, unsigned int size);
void			*ft_memchr(const void *s, int c, unsigned int num);
int				ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num);
void			*ft_memcpy(void *dest, const void *source, unsigned int num);
void			*ft_memmove(void *desti, const void *source, unsigned int num);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
int				ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *lie, unsigned int len);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
char            *ft_substr(char const *s, unsigned int start, unsigned int len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);
char            **ft_split(char const *s, char c);
char            *ft_itoa(int num);



#endif
