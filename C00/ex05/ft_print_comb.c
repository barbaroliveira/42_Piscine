/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:10:19 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/17 13:07:55 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int p, int s, int t)
{
	write(1, &p, 1);
	write(1, &s, 1);
	write(1, &t, 1);
}

void	ft_print_comb(void)
{
	int	p;
	int	s;
	int	t;

	p = 48;
	while (p <= 55)
	{
		s = p + 1;
		while (s <= 56)
		{
			t = s +1;
			while (t <= 57)
			{
				ft_write (p, s, t);
				if (p != 55 || s != 56 || t != 57)
				{
					write(1, ", ", 2);
				}
				t++;
			}
			s++;
		}
		p++;
	}
}
/*int	main(void)
{
	ft_print_comb();
}*/
