/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 08:25:40 by ssong             #+#    #+#             */
/*   Updated: 2018/06/16 08:40:53 by ssong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//SO THE BEGININNG CHARACTER CAN BE ANYTHING THEREFORE I WILL SAVE THE FIRST CHARACTER
// AND USE THAT TO SEARCH FOR WHAT I SHOULD TRANSFORM.
// I NEED TO CREATE A RECURSIVE FUNCTION THAT WILL CHECK EACH POINT LEFT AND RIGHT UP AND DOWN
// FOR THE CHARACTER AND IF IT IS THEN I WILL CALL THE RECURSION ON THAT ONE.

#include <stdio.h>
#include <stdlib.h>
#include "t_point.h"

//void	print_tab(char **area, t_point size);

void	recursive_depth(char **tab, t_point size, int x, int y, char c)
{

	if (tab[y][x] != c)
		return;
	tab[y][x] = 'F';
	if (x + 1 < size.x)
		recursive_depth(tab, size, x + 1, y, c);
	if (x - 1 >= 0)
		recursive_depth(tab, size, x - 1, y, c);
	if (y + 1 < size.y)
		recursive_depth(tab, size, x, y + 1, c);
	if (y - 1 >= 0)
		recursive_depth(tab, size, x, y - 1, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	int x;
	int y;
	char c;
	x = begin.x - 1;
	y = begin.y - 1;

	if (x >= size.x)
		return;
	if (x < 0)
		return;
	if (y >= size.y)
		return;
	if (y < 0)
		return;

	c = tab[y][x];
	recursive_depth(tab, size, x, y, c);
}

/*
char **make_area(char **zone, t_point size)
{
	char **bitch;
	int i;
	int x;

	i = 0;
	bitch = malloc(sizeof(char *) * size.y);
	while (i < size.y)
	{
		bitch[i] = malloc(sizeof(char) * (size.x * 2 - 1));
		x = 0;
		while (x < size.x * 2 - 1)
		{
			bitch[i][x] = zone[i][x];
			x++;
		}
		bitch[i][x] = 0;
		i++;
	}
	return (bitch);
}

void	print_tab(char **area, t_point size)
{
	int y;

	y = 0;
	while (y < size.y)
	{
		printf("%s\n", area[y]);
		y++;
	}
}

int main(void)
{
	char **area;
	t_point size = { 8, 5 };
	t_point begin = { 1, 5 };
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11000001",
	};
	area = make_area(zone,size);
	print_tab(area, size);
	flood_fill(area, size, begin);
	printf("\n");
	print_tab(area, size);
	return (0);
}
*/
