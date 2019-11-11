/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:52:26 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/11 22:28:32 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] == *set && s1[start])
		start++;
	len = ft_strlen(s1) - 1;
	while (s1[len] == *set && s1[len] && len > start)
		len--;
	if (!(str = malloc(sizeof(char) * (len - start + 1))))
		return (NULL);
	i = 0;
	if (!(start > len))
	{
		while (s1[start + i] && i < len)
		{
			str[i] = s1[start + i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
/*
#include <libc.h>
int main()
{
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	//	char	*s2 = "Hello \t  Please\n Trim me !";

	printf("%s\n",ft_strtrim(s1, "\n\t"));
	//	printf("%d\n",strtrim(s1, "\t\n"));
	//	printf("%s\n",ft_strtrim(s2, "\n"));
	//	printf("%d\n",strtrim(s2, "\n"));
}*/
