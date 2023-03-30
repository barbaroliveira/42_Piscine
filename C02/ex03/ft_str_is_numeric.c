/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:25:14 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/25 21:25:28 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
		}
	i++;
	}
	if (count == i)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d", ft_str_is_numeric("6555"));
	printf("%d", ft_str_is_numeric("2121684as"));
	printf("%d", ft_str_is_numeric("dqdq54"));
	printf("%d", ft_str_is_numeric("afdaaf"));
	printf("%d", ft_str_is_numeric(""));
	return ( 0);
}*/
