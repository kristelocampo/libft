/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:44:37 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/11 22:39:17 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nb_size(unsigned int nb)
{
	unsigned int size;

	size = 0;
	while (nb >= 10)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*calc(int n, int sign)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * nb_size(n))))
		return (NULL);
	while (n)
	{
		dest[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if (sign == -1)
	{
		dest[i] = '-';
		i++;
	}
	dest[i] = '\0';
	ft_strrev(dest);
	return (dest);
}

char	*ft_itoa(int n)
{
	int	sign;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	return (calc(n, sign));
}
