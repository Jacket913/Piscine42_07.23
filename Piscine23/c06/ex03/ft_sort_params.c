/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:33:02 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/10 19:37:49 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	argswap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	argcomp(char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (arr1[i] && arr1[i] == arr2[i])
		i++;
	return (arr1[i] - arr2[i]);
}

void	putarg(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argcomp(argv[i], argv[j]) > 0)
				argswap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		putarg(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
