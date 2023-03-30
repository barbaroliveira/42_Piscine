/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:32:05 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/25 21:32:19 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	i++;
	}
	return (str);
}

/*int main()
{
	char c[] = "T65ghjUHIUEFJOIMKu es bi";
	printf("%s", ft_strlowcase(c));
	return(0);
}*/
