/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:42:13 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/21 19:48:03 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int	i;
	int	contador;

	contador = 0;
	i = 0;
	while (str[i] != '\0')
	{
		contador = i + 1;
		i++;
	}
	ft_putchar(contador + '0');
}

/*int	main(void)
{
	char 	*str = "ola Mundo";

	ft_strlen(str);
	printf("str=\"%s\"\n", str);
	return (0);
}*/
