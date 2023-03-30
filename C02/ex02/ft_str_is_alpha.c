/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:24:14 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/25 21:24:44 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			count++;
		}
	i++;
	}
	if (count == i)
	{
		return (1);
	}
	else
		return (0);
}

/*int main()
{
	printf("%d", ft_str_is_alpha("fsdsfsdfi"));
	printf("%d", ft_str_is_alpha("fsds6fsdfi"));
	printf("%d", ft_str_is_alpha("456i"));
	printf("%d", ft_str_is_alpha("54865698465165894561651498411644"));
	printf("%d", ft_str_is_alpha(""));
}*/
