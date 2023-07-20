/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:08:59 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/12 14:42:30 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

char	*ft_flowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	checkalphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 1;
	ft_flowcase(str);
	while (str[i])
	{
		if (checkalphanum(str[i]) == 1 && trigger == 1)
		{
			str[i] -= 32;
			trigger = 0;
		}
		if (checkalphanum(str[i]) == 2 && trigger == 1)
			trigger = 0;
		if (checkalphanum(str[i]) == 0 && trigger == 0)
			trigger = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char arr[] = "Rekt17+Lol Mdr Mdr 4242l42";
	printf("%s\n", ft_strcapitalize(arr));
}*/
