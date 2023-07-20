/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:29:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/09 16:25:46 by gmoulin          ###   ########.fr       */
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
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hello World!";
	char	b[15];

	*ft_strcpy(b, a);
	ftputstr(b, 15);
}*/
