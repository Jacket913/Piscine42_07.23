/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 02:16:51 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/16 20:42:23 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char arr1[] = "testtesttest";
	char arr2[] = "testtesttast";
	printf("%d\n", ft_strncmp(arr1, arr2, 5));
	printf("%d\n", strncmp(arr1, arr2, 5));
}*/
