/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:53:25 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/06 14:32:50 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alph;

	alph = 'a';
	while (alph >= 'a' && alph <= 'z')
	{
		write(1, &alph, 1);
		alph++;
	}
}
