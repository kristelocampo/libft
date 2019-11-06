/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:05:37 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/05 19:10:08 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 1);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10 , fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n <= 9)
		ft_putchar_fd(n + 48, fd);
}

int main()
{
	ft_putnbr_fd(56, 1);
}
