/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:19:00 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/05 15:59:27 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	i = 0;
	result = malloc(count * size);
	while (i <= count)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}
