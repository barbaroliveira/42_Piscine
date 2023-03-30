/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:07:02 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/26 02:41:28 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char first_str[] = "Hello ";
    char second_str[] = "World!";

    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);

    printf("Return value of ft_strcat(): %s",
            ft_strcat(first_str, second_str));
    return (0);
}*/
