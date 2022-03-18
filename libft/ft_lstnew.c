/*  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:53:17 by mtoia             #+#    #+#             */
/*   Updated: 2022/03/18 02:11:12 by mtoia            ###   ########.fr       */
/*                                                                            */
/*  */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list *neww;

    neww = malloc(sizeof(t_list));
    if (!neww)
        return (NULL);
    neww->content = content;
    neww->next = NULL;
    return (neww);
}
