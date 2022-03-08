/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:40:43 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/08 10:22:45 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H




void	*ft_memset(void *str, int c, int n);
void ft_bzero(void *dst, int n);
int	ft_isalnum(int argument);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int	x);
int ft_isprint(int arg);
unsigned int	ft_strlcpy(char *dest, const char *src, int size);
int	ft_strlen(const char *str);
char *ft_strrchr(char *str, int c);
int	ft_tolower(int ch);
int	ft_toupper(int ch);
int	ft_atoi(const char *str);





#endif