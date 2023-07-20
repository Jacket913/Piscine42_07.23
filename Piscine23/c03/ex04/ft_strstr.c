/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:46:22 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/16 15:15:00 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j])
		{
			if (to_find[j +1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
    char str[] = "salut hello world bonjour";
    char to_find[] = "worl";

    printf("%s \n", ft_strstr(str, to_find));
    printf("%s", strstr(str, to_find));
}*/
