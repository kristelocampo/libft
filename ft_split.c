/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:36:15 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/11 23:27:42 by krisocam         ###   ########.fr       */
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
	int		in;
	char	**split;

	if (!str)
		return (NULL);
	if (!(split = malloc(sizeof(char *) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	in = 0;
	while (str[i])
	{
		while (separator(&str[i], c))
			i++;
		k = 0;
		while (!separator(&str[i], c) && str[i + k])
			k++;
		in = 0;
		if (!(split[in] = malloc(sizeof(char) * (k + 1))))
			return (NULL);
		j = 0;
		while (!separator(&str[i], c) && str[i])
			split[in][j++] = str[i++];
	   split[in][j] = '\0';
	}
	split[in] = NULL;
	return (split);
}
/**
int main()
{
	char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;
    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }
}**/
