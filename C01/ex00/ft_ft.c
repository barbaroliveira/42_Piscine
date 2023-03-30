/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:51:34 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/21 11:57:12 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int *nbr;
	int	n;
	
	nbr = &n;
	printf("n: %d, *nbr: %d, n_adress: %p \n", n, *nbr, nbr);
	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_adress: %p \n", n, *nbr, nbr);
}*/
