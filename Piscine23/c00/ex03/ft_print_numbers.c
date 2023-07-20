/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:35:58 by gmoulin           #+#    #+#             */
/*   Updated: 2023/06/29 15:56:10 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	zero;
	char	nine;

	zero = '0';
	nine = '9';
	while (zero <= nine)
	{
		write(1, &zero, 1);
		zero++;
	}
}
/*
void	main()
{
	ft_print_numbers();
}
*/
