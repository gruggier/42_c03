/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:37:13 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/20 16:50:43 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "Hello";
	char	src[] = " World!";
	unsigned int	nb = 3;

	printf("Prima: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("Dopo: %s\n", dest);
	return (0);
}*/
