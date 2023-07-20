/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:58:41 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/18 20:28:52 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	
	*range = malloc(((max - min) + 1) * sizeof (int));
	if (!*range)
		return (-1);
	if (min >= max)
	{       
		*range = NULL;
		return (0);
	}	
	i = 0;
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (max - min);
}
/*
int	main()
{
	int min = 5;
	int max = 25;
	int i = 0;
	int	*arr;

	printf("%d ", ft_ultimate_range(&arr, min, max));
}*/
/*
int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);

	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));

	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
