/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:47:09 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 16:38:23 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*trim_space(char *buffer, int count)
{
	int		j;
	int		i;
	char	*trim;

	i = 0;
	j = 0;
	trim = malloc(sizeof(char) * count + 1); // MALLOC TRIM
	if (!trim)
		return (NULL);
	while (buffer[i])
	{
		while (buffer[i] >= 48 && buffer[i] <= 57)
			trim[j++] = buffer[i++];
		while (buffer[i] == 32)
			i++;
		trim[j++] = buffer[i++];
		while (buffer[i] == 32)
			i++;
		while (buffer[i] != '\n')
			trim[j++] = buffer[i++];
		trim[j++] = buffer[i++];
	}
	trim[j] = '\0';
//	free(buffer); //FREE BUFFER
	return (trim);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	if (!to_find[j])
		return (NULL);
	while (str[i])
	{
		while (to_find[j] && str[i + j] && str[i + j] == to_find[j]
			&& (i == 0 || str[i - 1] == '\n')) // check -1
		{
			j++;
			if (to_find[j] == ':' && str[i + j] == ':')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
