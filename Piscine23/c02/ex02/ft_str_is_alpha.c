/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:39:59 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/05 17:04:59 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
	char arr[1];
	printf("%d", ft_str_is_alpha(arr));
}*/
