/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:28:22 by 42robotic         #+#    #+#             */
/*   Updated: 2018/05/30 14:19:29 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	find_pivot(int *arr, int n)
{
	int leftsum;
	int totalsum;
	int i;

	i = 0;
	leftsum = 0;
	totalsum = 0;
	while (i < n)
	{
		totalsum += arr[i];
		i++;
	}
	i = 0;
	while (i <= n)
	{
		leftsum += arr[i];
		if (leftsum == totalsum)
			return (i);
		totalsum -= arr[i];
		i++;
	}
	return(-1);
}

int main()
{
	int arr[6] = {1,2,3,4,0,6};
	int arr1[4] = { -5, 10, 2, 5};
	int arr2[5] = {1, 100, 0, 0, 1};
	int arr3[3] = { 7, 9, 8};
	int arr4[2] = {1,2};

	printf("%d\n", find_pivot(arr, 6));
	printf("%d\n", find_pivot(arr1, 4));
	printf("%d\n", find_pivot(arr2, 5));
	printf("%d\n", find_pivot(arr3, 3));
	printf("%d\n", find_pivot(arr4, 2));
	
	return (0);
}
