/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:06:02 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/05 17:12:05 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
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
	char arr[] = "0123456";
	printf("%d", ft_str_is_numeric(arr));
}*/
