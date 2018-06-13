/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:05:25 by exam              #+#    #+#             */
/*   Updated: 2018/06/12 09:25:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//You need to go through once and find the total sum first
//Now as you iterate through the array you need to Subtract from total, compare, then add to the total

int	find_sum(int *arr, int n)
{
	int i;
	int total;

	total = 0;
	i = 0;
	while (i < n)
	{
		total += arr[i];
		i++;
	}
	return (total);
}

int	find_pivot(int *arr, int n)
{
	int leftsum;
	int i;
	int total;

	leftsum = 0;
	i = 0;
	total = find_sum(arr, n);
	while (i < n)
	{
		leftsum += arr[i];
		if (leftsum == total)
			return (i);
		else
			total -= arr[i];
		i++;
	}
	return (-1);
}

/*
#include <stdio.h>
int main()
{
	int arr[4] = {-5,10,2,5};
	int arrz[5] = {1, 100, 0, 0, 1};
	int arr1[3] = {7, 8, 9};
	int arr2[2] = {1, 2};
	int arr3[5] = {-5, 1, 1, 3, 5};

	printf("%d\n", find_pivot(arr, 4));
	printf("%d\n", find_pivot(arrz, 5));
	printf("%d\n", find_pivot(arr1, 3));
	printf("%d\n", find_pivot(arr2, 2));
	printf("%d\n", find_pivot(arr3, 5));
	return (0);
}
*/
