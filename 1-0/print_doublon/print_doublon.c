/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 20:05:13 by 42robotic         #+#    #+#             */
/*   Updated: 2018/06/11 20:33:05 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
psuedocode
You will need two variables. One to index each array
If one is less than the other iterate up that one until it has reached passed its max 
	or if it is greater than the value at the other index
	in that case iterate up that one
If one reaches the max then end the proram and print the instances of copies
*/


void    print_doublon(int *a, int na, int *b, int nb)
{
	int x;
	int y;
	int value;

	value = 0;
	x = 0;
	y = 0;
	while (x < na && y < nb)
	{
		if (a[x] == b[y])
		{
			if (value == 0)
				printf("%d", a[x]);
			else
				printf(" %d", a[x]);
			x++;
			value++;
		}
		else if (a[x] < b[y])
			x++;
		else if (a[x] > b[y])
			y++;
	}
	printf("\n");
}

int main()
{
	int a[] = {-5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000};
	int na = 11;
	int b[] = {2,  4,  5,  6,  7, 10,  40,  70};
	int nb = 8;

	print_doublon(a,na,b,nb);
	return (0);
}
