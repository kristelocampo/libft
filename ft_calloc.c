/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:19:00 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/07 18:42:09 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (!(result = malloc(count * size)))
		return (NULL);
	if ((char *)result == 0)
		return (NULL);
	while (i <= count)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}
