/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:28:18 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/08 11:25:57 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}
