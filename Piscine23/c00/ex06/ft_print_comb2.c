/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:21:13 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/06 14:40:17 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_cmb(int i, int j);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 01;
	while (a <= 98)
	{
		while (b <= 99)
		{
			print_cmb(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	print_cmb(int i, int j)
{
	char	c;
	char	d;

	c = (i / 10) + '0';
	d = (i % 10) + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	c = (j / 10) + '0';
	d = (j % 10) + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 98)
	{
		write (1, ", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
