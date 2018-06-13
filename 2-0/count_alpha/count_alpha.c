/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 20:41:33 by 42robotic         #+#    #+#             */
/*   Updated: 2018/06/12 13:24:06 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*	PSUEDOCODE
	HAVE A LARGE ARRAY TO STORE EVERY ALPHABET'S OCCURENCE
	ITERATE MY STRING IF I COME ACROSS A CHARACTER THEN ITERATE THE CORRESPONDING 
		INDEX IN MY ARRAY.
	TO PRINT THE CHARACTERS IN ORDER I HAVE TO GO BACK THROUGH MY STRING
	THEN I PRINT THE CHARACTER IF THE CORRESPONDING INDEX IN MY ARRAY IS NOT ZERO
	THIS STUPID PROBLEM COUNTS BOTH M and m as the same character. Just listing them
	as the same shiet. So Basically if its capital letter then i got to subtract it by a particular number
	to make it a lower case and add 1 to that index.
	
	When I read the string if its a capital i got to do the same shiet.

*/

int	is_alpha(char c)
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
				if (test[(int)argv[1][i]] > 0)
				{
					if (flag == 0)
					{
						printf("%d%c", test[(int)argv[1][i]], argv[1][i]);
						flag++;
					}
					else
						printf(", %d%c", test[(int)argv[1][i]], argv[1][i]);
					test[(int)argv[1][i]] = 0;
				}	
			}
			i++;
		}
	}
	printf("\n");
}
