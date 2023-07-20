/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:16:12 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/16 17:31:08 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<string.h>
//#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	lensrc = 0;
	lendest = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	while (dest[lendest])
		lendest++;
	j = lendest;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (i < (size - lendest - 1) && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}
/*
int main()
{
	char str[] = "salut hello world bonjour";
	char str2[] = "salut hello world bonjour";
	char arr[20];
	char arr2[20];
	printf("%d\n", ft_strlcat(arr, str, 50));
	printf("%s\n", arr);
	printf("%d\n", strlcat(arr2, str2, 50));
}*/
