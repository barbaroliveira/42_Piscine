/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:28:27 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/09 16:33:29 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	l;

	l = 'z' ;
	while (l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
