/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 02:59:02 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/16 14:37:35 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
		dest[i + j] = '\0';
	return (dest);
}
/*
int main ()
{
	char dest[] = "hello ";
	char src[] = "world";
	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", strncat(dest, src, 3));
}*/
