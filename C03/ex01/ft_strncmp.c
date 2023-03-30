/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:57:17 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/26 02:03:26 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (n > 0))
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int	main()
{
	char	s1[] = "aabaa b";
	char	s2[] = "aa aa a";
	unsigned int n = 3;
	
	printf("%d", ft_strncmp(s1, s2, n));
}*/
