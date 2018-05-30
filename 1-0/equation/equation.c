/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:59:37 by 42robotic         #+#    #+#             */
/*   Updated: 2018/05/30 13:25:28 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	equation(int n)
{
	int A = 0;
	int B = 0;
	int C = 0;

	while (A < 10)
	{
		B = 0;
		while (B < 10)
		{
			C = 0;
			while (C < 10)
			{
				if ((B + (A * 10)) + (A + C * 10) == n)
					printf("A = %d, B = %d, C = %d\n", A, B, C);
				C++;
			}
			B++;
		}
		A++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		equation(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
