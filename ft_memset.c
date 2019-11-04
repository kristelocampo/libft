/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:24:38 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/04 16:39:07 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *start;

	if (b == NULL)
		return (NULL);
	start = b;
	while (len)
	{
		*start = c;
		start++;
		len--;
	}
	return (b);
}
