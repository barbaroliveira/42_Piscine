/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:07:30 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/30 12:14:04 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
	{
		return (2);
	}
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			nb++;
			div = 1;
		}
		div++;
	}
	return (nb);
}
