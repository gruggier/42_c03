/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:27:22 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/20 15:48:49 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
		{
			return (str);
		}
		str = str + 1;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "Hello, world!";
	char	f[] = "Caracas";

	char	*r = ft_strstr(str, f);
	if (r)
	{
		printf("Trovato '%s' in '%s'\n", r, str);
	}
	else
	{
		printf("'%s' non trovato in '%s'\n", f, str);
	}
	return (0);
}
