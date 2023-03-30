/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:39:26 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/29 11:44:15 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*void	ft_sqrt_test()
{
	int res;
	int offset;
	int test_nums[11] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 1000014129};
	int cheatsheet[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 31623};

	offset = 0;
	while (offset < 11)
	{
		res = ft_sqrt(test_nums[offset]);
		if (res == 0 || res != cheatsheet[offset])
		{
			printf("[1] KO, n = %d,expected: %d, got: %d.\n", test_nums[offset],
			  cheatsheet[offset], res);
			return ;
		}
		offset++;
	}
	printf("[1] OK.\n");
}*/

/*void	ft_sqrt_error_test()
{

	int res;
	int offset;
	int test_nums[11] = {-10, -5, 0, 2, 3, 13, 27, 29, 50, 99, 2147483647};

	offset = 0;
	while (offset < 11)
	{
		res = ft_sqrt(test_nums[offset]);
		if (res != 0)
		{
			printf("[2] KO, n = %d,expected: 0, got: %d.\n",
			 test_nums[offset], res);
			return ;
		}
		offset++;
	}
	printf("[2] OK.\n");
}*/

/*int		main(void)
{
	// mostrando apenas resultados diferentes de 0 para conferir
	printf("[1] Casos em que a raiz existe.\n");
	ft_sqrt_test();
	// mostrando apenas resultados iguais a zero(checar as condicoes de erro)
	printf("[2] Casos em que a raiz nao existe.\n");
	ft_sqrt_error_test();
	return (0);
}*/
