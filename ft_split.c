/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:36:15 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/07 19:49:00 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		separator(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	if (!(split = malloc(sizeof(char *) * (ft_strlen(str) + 1))))
		return (NULL);
	while (separator(&str[i], c) == 1)
		i++;
	j = 0;
	while (str[i])
	{
		k = 0;
		if (!(split[j] = malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] && separator(&str[i], c) == 0)
			split[j][k++] = str[i++];
		while (str[i] && separator(&str[i], c) == 1)
			i++;
		split[j][k] = '\0';
		j = j + 1;
	}
	split[j] = NULL;
	return (split);

}
/*
int main()
{
	char** res;
	for (res = ft_split("asdf qwerty zxcv", ' '); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	for (res = ft_split("s1_s2___++++___s3", '_'); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
}*/
