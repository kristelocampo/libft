/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:44:37 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/07 19:27:26 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	int		count;
	char	swap;

	i = 0;
	size = 0;
	count = 0;
	while (str[size])
		size++;
	while (i < size - 1)
	{
		swap = str[i];
		str[i] = str[size - 1];
		str[size - 1] = swap;
		i++;
		size--;
		count++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	int		sign;
	char	*dest;

	i = 0;
	sign = 1;
	if (!(dest = malloc(sizeof(char) * 20)))
		return (NULL);
	nb = n;
	if (nb == 0)
	{
		dest = "0";
		return (dest);
	}
	if (nb == -2147483648)
	{
		dest = "-2147483648";
		return (dest);
	}
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	while (nb)
	{
		dest[i] = nb % 10 + 48;
		nb = nb / 10;
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
