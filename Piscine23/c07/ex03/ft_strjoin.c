
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     ft_strslen(char **strs)
{
        int     i;
	int	j;
	int	count;

        i = 0;
	count = 0;
        while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
        return (count);
}

char	*ft_strscpywsep(char *dest, char **src, char *sep, int size)
{
	int	i;
	int	j;
	int	desti;

	i = 0;
	desti = 0;
	while (src[i])
	{
		j = 0;
		while (src[i][j])
		{
			dest[desti] = src[i][j];
			j++;
			desti++;
		}
		j = 0;
		if (i != size - 1)
		{
			while (sep[j])
			{
				dest[desti] = sep[j];
				j++;
				desti++;
			}
		}
		i++;
	}
	dest[desti] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	tseplen;
	int	tstrslen;
	char	*ptr;

	tseplen = ft_strlen(sep) * (size - 1);
	tstrslen = ft_strslen(&(*strs));
	ptr = malloc((tseplen + tstrslen + 1) * sizeof (char));
	if (!ptr)
		return (NULL);
	if (size == 0)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	ft_strscpywsep(ptr, &(*strs), sep, size);
}

int main(int ac, char **av)
{
	char *arr[] = {"Hello", "World", "Nox", "in", "a", "box"};
	if (ac == 2)
		printf("%s", ft_strjoin(6, arr, av[1]));
}
