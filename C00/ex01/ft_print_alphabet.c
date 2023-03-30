/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:26:02 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/09 15:36:39 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a' ;
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
