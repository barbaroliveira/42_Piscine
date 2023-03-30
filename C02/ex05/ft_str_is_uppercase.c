/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:27:13 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/25 21:27:38 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
	i++;
	}
	if (count != i)
		return (0);
	else
		return (1);
}

/*int main()
{
	printf("%d", ft_str_is_uppercase("DOIFNIOEAF"));
	printf("%d", ft_str_is_uppercase("sdfihusdf"));
	printf("%d", ft_str_is_uppercase("D5F"));
	printf("%d", ft_str_is_uppercase("DOIFNfsdF"));
}*/
