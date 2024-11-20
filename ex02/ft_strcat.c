/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:43:46 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/20 15:07:35 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[20] = "Siamo";
	char	src[] = " in 42 Roma";

	printf("Prima: %s\n", dest);
	ft_strcat(dest, src);
	printf("Dopo: %s\n", dest);
	return (0);
}
