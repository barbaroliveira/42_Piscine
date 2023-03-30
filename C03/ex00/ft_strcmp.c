/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:51:36 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/23 16:51:41 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
	i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	s1[] = "aa aa b";
	char	s2[] = "aa aa a";
	
	printf("%d", ft_strcmp(s1, s2));
}*/
