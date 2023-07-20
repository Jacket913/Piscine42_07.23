/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:54:11 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/04 19:48:24 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ftputstr(char *c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ftputchar(c[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hello World!";
	char	b[18];

	*ft_strncpy(b, a, 15);
	ftputstr(b, 15);
	printf("\n%d",ft_strlen(b));
}*/
