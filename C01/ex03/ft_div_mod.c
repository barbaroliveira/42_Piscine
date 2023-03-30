/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:22:59 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/21 17:23:04 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int *div;
	int *mod;
	int a;
	int b;
	div = calloc(1, sizeof(int));
	mod = calloc(1, sizeof(int));
	a = 42;
	b = 10;
	printf("a: %d, b: %d, *div: %d, *mod: %d\n",a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("a: %d, b: %d, *div: %d, *mod: %d\n",a, b, *div, *mod);
}*/
