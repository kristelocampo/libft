/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:54:20 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/05 13:17:01 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (len == 0)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	j = 0;
	while (str[i] && i < len - 1)
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
