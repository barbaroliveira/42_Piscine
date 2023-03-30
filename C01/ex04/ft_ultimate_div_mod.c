/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:31:33 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/21 17:35:18 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{

	int *a;
	int *b;
	
	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	
	*a = 42;
	*b = 10;
	
	printf("*a: %d, *b: %d\n",*a, *b);
	ft_ultimate_div_mod(a, b);
	printf("*a: %d, *b: %d\n",*a, *b);
}*/
