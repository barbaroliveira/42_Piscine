/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:56:43 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/26 15:58:00 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado *= 10;
		resultado += str[i] - '0';
		i++;
	}
	return (resultado * sinal);
}

/*int	main(void)
{
	printf("%d", ft_atoi(" 	--+--+1234ab567"));
}*/
