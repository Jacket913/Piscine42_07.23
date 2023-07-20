/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:14:33 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/05 17:20:11 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		i++;
		if (str[i] == '\0')
		{
			return (1);
		}
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
		return (0);
}
/*
int main(void)
{
	char arr[] = "hello";
	printf("%d", ft_str_is_lowercase(arr));
}*/
