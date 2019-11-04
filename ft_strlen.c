/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:06:23 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/04 14:03:18 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);

   return(0);
}
