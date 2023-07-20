/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:20:54 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/05 17:24:07 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
	char arr[] = "HELLO";
	printf("%d", ft_str_is_uppercase(arr));
}*/
