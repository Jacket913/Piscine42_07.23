/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:27:20 by gmoulin           #+#    #+#             */
/*   Updated: 2023/06/29 16:39:50 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n <= (-1))
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
/*
int 	main()
{
	ft_is_negative(-1);
}
*/
