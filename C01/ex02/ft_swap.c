/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:10:53 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/21 16:15:17 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	*a;
	int	*b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 24;
	printf("Before:\n a: %p: *a:%d, b:%p *b:%d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n a: %p: *a:%d, b:%p *b:%d\n", a, *a, b, *b);
}*/
