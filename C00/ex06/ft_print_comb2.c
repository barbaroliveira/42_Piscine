/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:49:06 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:44 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	s = 0;
	while (p <= 99)
	{
	s = p + 1;
		while (s <= 99)
		{	
			ft_putchar(p / 10 + '0');
			ft_putchar(p % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if (p != 98 || s != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		p++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
