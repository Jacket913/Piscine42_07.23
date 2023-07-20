/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:17:12 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 06:13:04 by xabaudhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*ft_dict(char *av, int *ptr)
{
	int		fd;
	char	*buf[1];
	size_t	count;
	char	*buffer;

	count = 0;
	fd = 0;
	fd = open("numbers.dict"/*av*/, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, buf, 1))
			count++;
		close (fd);
		buffer = malloc(sizeof(char) * (count + 1));  // MALLOC
		if (!buffer)
			return (NULL);
		fd = open("numbers.dict"/*av*/, O_RDONLY);
		read(fd, buffer, count);
		buffer[count] = '\0';
		*ptr = count;
		close(fd);
		return(buffer);
	}
	else
		return (NULL);
}

char **ft_split(char *buffer, int count)
{
	char	**split;
	char	*trim;

	if (!buffer)
		return (NULL);
	split = malloc(sizeof(char *) * (32 + 1));
	if (!split)
		return (NULL);// MALLOC
	trim = trim_space(buffer, count);
	if (!trim)
		return (NULL); // MALLOC
	ft_fill_units(split, trim);   //MALLOC
	ft_fill_twenty(split, trim);  //MALLOC
	ft_fill_tens(split, trim);   //MALLOC
	ft_fill_thousands(split, trim); // MALLOC
	free(trim); // FREE TRIM
	return (split);
}

int	check_arg(int ac, char **av)
{
	if (ac <= 1 || ac > 3)
		return (0);
	if (ac == 2)
		return (1);
	else
		return (1);
}

int	error_return(int n)
{
	if (n == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (n == 1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (0);
}

int main (int ac, char **av)
{
	char **split;
	int	count;
	char *nb;
	int i = 0;
	count = 0;
	if (!check_arg(ac, av))
		return (error_return(0));
	nb = modulo_nb(cleannb(av[ac - 1]));
	if (!nb)
		return (error_return(0));
	if (ac == 3)
		split = ft_split(ft_dict(av[1], &count), count);
	if (ac == 2)
		split = ft_split(ft_dict("numbers.dict", &count), count);
	i = 0;
	while (split[i])
	{
		printf("\n\n%s\n", split[i]);
		i++;
	}
	if (!split || !(check_split(split)))
		return (error_return(1)); // FREE
	ft_number(split, nb);
	free_split(split, 32, nb);
	return (0);
}
