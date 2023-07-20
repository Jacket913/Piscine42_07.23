/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:24:58 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/09 19:22:46 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
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
	char arr[] = "\0";
	printf("%d", ft_str_is_printable(arr));
}*/
