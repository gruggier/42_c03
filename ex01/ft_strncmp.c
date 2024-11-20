/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:52 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/20 16:51:50 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "HelloWorld";
	char	s3[] = "Hello";
	char	s4[] = "HelLo";

	printf("Confronto tra s1 e s2 (3 caratteri): %d\n", ft_strncmp(s1, s2, 6));
	printf("Confronto tra s1 e s2 (5 caratteri): %d\n", ft_strncmp(s1, s2, 5));
	printf("Confronto tra s1 e s3 (5 caratteri): %d\n", ft_strncmp(s1, s3, 5));
	printf("Confronto tra s1 e s4 (5 caratteri): %d\n", ft_strncmp(s1, s4, 5));
	return (0);
}*/
