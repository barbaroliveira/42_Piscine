/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:00:32 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/26 14:11:28 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb != INT_MIN)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = '0' + (nb % 10);
	write(1, &c, 1);
}

/*int main(void)
{
	ft_putnbr(100);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(8);
	write(1, "\n", 1);
	ft_putnbr(-100);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}*/
