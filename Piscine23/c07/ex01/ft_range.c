/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:34:55 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/18 19:58:11 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (min >= max)
		return (ptr);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(int ac, char **av)
{
	char *arr = ft_range(atoi(av[1]), atoi(av[2]));
	printf("%d", arr);
}

int	main(void)
{
	int min = 5;
	int max = 25;
	int i = 0;
	int	*arr = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
