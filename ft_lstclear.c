/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:08:53 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/18 20:14:09 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next;
	t_list	*dest;

	if (!list || !del)
		return ;
	if (!(*list))
		return ;
	dest = *list;
	while (dest)
	{
		next = dest->next;
		ft_lstdelone(dest, del);
		dest = next;
	}
	*list = NULL;
}
