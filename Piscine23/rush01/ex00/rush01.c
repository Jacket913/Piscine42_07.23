/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:05:13 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/09 19:27:28 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// grab rules from argv, into one array, used for later checks
// 
int main(int argc, char **argv)
{
	if argc == 2
		//start code with as argument the values entered as argv[1]
	else
		//print "Error!"
}
// 
// create empty grid of size 4x4 ('0' as empty spot)
//
char grid = {	{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}, 
		{'0', '0', '0', '0'}}
// 
// strcpy for us to better use the rules
//
char rules[16];

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == ' ')
			i++;
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
//
// checks rules, do conditions for '4' and '1'
//
void	ifoneorfour(char *rules, char *grid)
{
	int i = 0;

	while (rules[i])
	{
		int k = 0
		while (i % 4 <= 3 && k == 0)
		{
			int j = 0;
			if (rules[i] == 4)
				while (grid[i][j])
				{
					grid[i][j] = j;
					j++;
				}
			if (rules[i] == 1)
				grid[i][0] = '4';
			if (i % 4 == 3)
				k++;
			i++;
		}
		while (i % 4 <= 3 && k == 1)
		{
			int j = 3;
                        if (rules[i] == 4)
                                while (j <= 0)
                                {
                                        grid[i][j] = j + 1;
                                        j--;
                                }
                        if (rules[i] == 1)
                                grid[i][0] = '4';
                        if (i % 4 == 3)
                                k++;
                        i++;
		}
		while (i % 4 <= 3 && k == 2)
		{
			int j = 0;
                        if (rules[i] == 4)
                                while (grid[i][j])
                                {
                                        grid[i][j] = j + 1;
                                        j++;
                                }
                        if (rules[i] == 1)
                                grid[i][0] = '4';
                        if (i % 4 == 3)
                                k++;
                        i++;
		}
		while (i % 4 <= 3 && k == 3)
		{
			int j = 0;
                        if (rules[i] == 4)
                                while (grid[i][j])
                                {
                                        grid[i][j] = j + 1;
                                        j++;
                                }
                        if (rules[i] == 1)
                                grid[i][0] = '4';
                        if (i % 4 == 3)
                                k++;
                        i++;

		}
	}
}

// 	4 means just having "1, 2, 3, 4" from their POV
// 	1 means having the '4' tower next to it as it only sees the biggest tower from their POV
// 	up read y 0 to 3, and increment x to go to next column and check next rule "up" until x 3
// 	down read y 3 to 0, and increment x to go to next column and check next rule "up" until x 3
// 	left read x 0 to 3, and increment y to go to next column and check next rule "up" until y 3
// 	right read x 3 to 0, and increment y to go to next column and check next rule "up" until y 3
// 
// 
// put from '1' to '4' in coords x/y
// 
// 
// 
// checks if already present in the rest of x
// 
// 
// 
// checks for y too
// 
// 
// 
// return false, leave it there and goes to the next coords
// 
// 
// 
// if true, n++ until 4
// 
// 
// 
// checks rules once line done for x and y
// 	two variables, one for number of increments done, the other for last biggest seen. 
// 	change value once bigger is found, while incrementing the counter.
// 	read sens will be up/down/left/right
// 	counter will help see if rule of up/down/left/right is true
// 	both variables will start at 0
// 

int	checkrulesrows(char *grid)
	int y = 0;
	
	while y <= 3
	{
		// checks row from left to right
		int x = 0;
		int sizelseen = 0;
		int nbseen = 0;
		while x <= 3
		{
				
			if grid[y][x] > sizelseen
			{
				sizelseen = grid[y][x];
				nbseen++;
			}
			x++;
		}
		// if != rule left, return 0
		//
		// now checks row but from right to left
		x = 3;
		sizelseen = 0;
		nbseen = 0;
		while x >= 0;
		{
			if grid[y][x] > sizelseen
			{
				sizelseen == grid[y][x];
				nbseen++;
			}
			x--
		}
		// if != rule right, return 0
		y++
	}
}

int	checkrulescolumns(char *grid)
{
	while x <= 3
        {
		// checks column from top to bottom
                int y = 0;
                int sizelseen = 0;
                int nbseen = 0;
                while y <= 3
                {

                        if grid[y][x] > sizelseen
                        {
                                sizelseen = grid[y][x];
                                nbseen++;
                        }
                        x++;
                }
                // if != rule up, return 0
		//
		// now checks column from bottom to top
                y = 4;
                sizelseen = 0;
                nbseen = 0;
                while y >= 0;
                {
                        if grid[y][x] > sizelseen
                        {
                                sizelseen == grid[y][x];
                                nbseen++;
                        }
                        y--
                }
                //if != rule down, return 0
                x++
        }
}
// 
// recursive to go back if either rules to follow or values uniqueness is false
//
//
//

int	possible(int x, int y, int n)
{
	int i = 0;
	while i <= 3
	{
		if grid[i][y] == n
			return 0;
                if grid[x][i] == n
                        return 0;
		i++;
        }
	return 1;
}

char	solve(void)
{
	int i = 0;
	while i <= 3
	{
		
	}
}

/*======================================================*/

char    *ft_strcpynospace(char *dest, char *src)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (src[i] != '\0')
        {
                if (src[i] == ' ')
                        i++;
                else
                {
                        dest[j] = src[i];
                        i++;
                        j++;
                }
        }
        if (src[i] == '\0')
        {
                dest[i] = '\0';
        }
        return (dest);
}


void	mat_display(char mat[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			write(1, mat[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		write (1, "too many arguments.", 19);
	}
	char rules[16];
	ft_strcpynospace(rules, argv[1]);
	char mat[6][6] = {{'0', rules[0], rules[1], rules[2], rules[3], '0'},
                {rules[8], '0', '0', '0', '0', rules[12]},
                {rules[9], '0', '0', '0', '0', rules[13]},
                {rules[10], '0', '0', '0', '0', rules[14]},
                {rules[11], '0', '0', '0', '0', rules[15]},
                {'0', rules[4], rules[5], rules[6], rules[7], '0'}};
	mat_display(mat);

}
