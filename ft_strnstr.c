/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:54:20 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/06 20:33:47 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
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
/*
int main()
{
   const char *haystack = "MZIRIBMZIRIBMZE123";  
   const char *needle = "MZIRIBMZE";
   size_t	max = 10;
   char *ret;

   ret = strnstr(haystack, needle, max);
   printf("The substring is: %s\n", ret);
   ret = ft_strnstr(haystack, needle, max);
   printf("The substring is: %s\n", ret);

}*/
