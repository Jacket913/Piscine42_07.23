/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AtoiNotAtoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:56:20 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 03:58:51 by xabaudhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	checknum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlenfromi(char *str, int n)
{
	int	i;

	i = 0;
	while (str[i + n] && (str[i + n] >= '0' && str[i + n] <= '9'))
		i++;
	return (i);
}

char	*ft_strdupfromi(char *src, int n)
{
	char	*nb;
	int		j;

	j = 0;
	nb = malloc((ft_strlenfromi(src, n) + 1) * sizeof(char)); //malloc nb
	if (!nb)
		return (NULL);
	while (src[n] >= '0' && src[n] <= '9')
	{
		nb[j] = src[n];
		j++;
		n++;
	}
	nb[j] = '\0';
	return (nb);
}

char	*cleannb(char *str)
{
	int		i;
	char	*nb;

	i = 0;
	if (!str || checknum(str) == 0)
		return (NULL);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (NULL);
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		nb = ft_strdupfromi(str, i); // malloc nb
		return (nb);
	}
	return (NULL);
}
// malloc "nb", don't forget to free.
char	*modulo_nb(char *nb)
{
	char	*new_nb;
	int		len_nb;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_nb = ft_strlen(nb);
	new_nb = malloc(sizeof(char) * (len_nb + 3));
	if (!new_nb)
		return (NULL);       // MALLOC
	if (len_nb % 3 == 1)
	{
		new_nb[i++] = '0';
		new_nb[i++] = '0';
	}
	if (len_nb % 3 == 2)
		new_nb[i++] = '0';
	while (nb[j])
	{
		new_nb[i] = nb[j];
		i++;
		j++;
	}
	new_nb[i] = '\0';
	free(nb);
	return (new_nb);
}
