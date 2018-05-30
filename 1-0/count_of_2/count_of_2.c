/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:13:42 by 42robotic         #+#    #+#             */
/*   Updated: 2018/05/30 11:59:00 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// So I will iterate while I am less than the number given to me

// For each iteration I am going to test each index of the number
// 	by performing / 10 operations which will break it down by digit.
//	Then I will simply check if the number is 2 then add it to my total

int	count_of_2(int n)
{
	int total;
	int base;
	int i;
	int test;

	i = 2;
	total = 0;
	base = 10;
	if (n < 2)
		return (0);
	while (i <= n)
	{
		test = i;
		while (test != 0)
		{
			if (test % base == 2)
				total++;
			test = test / base;
		}
		i++;
	}
	return (total);
}

int main(int argc, char **argv)
{
	int n;
	
	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("%d", count_of_2(n));
	}
	printf("\n");
	return (0);	
}
