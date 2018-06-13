/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:26:36 by exam              #+#    #+#             */
/*   Updated: 2018/06/12 09:42:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* For this problem I need to iterate through the entire array first and store all the occurences
 of each letter by adding one to the correct index. In order to print in the same order I will go 
through the array again and then print the number at that index then set it equal to zero to remove coppies.
*/

int is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int test[200];
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (i < 200)
	{
		test[i] = 0;
		i++;
	}
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]))
				test[(int)argv[1][i]] += 1;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{		
			if (is_alpha(argv[1][i]))
			{
				if (test[(int)argv[1][i]])
				{
					if (flag == 0)
					{
						printf("%d%c", test[(int)argv[1][i]], argv[1][i]);
						test[(int)argv[1][i]] = 0;
						flag += 1;
					}
					else
					{
						printf(", %d%c", test[(int)argv[1][i]], argv[1][i]);
						test[(int)argv[1][i]] = 0;
					}
				}
			}
			i++;
		}	
	}
	printf("\n");
	return (0);
}
