/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_looping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42robotics <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 20:52:12 by 42robotic         #+#    #+#             */
/*   Updated: 2018/07/01 21:03:03 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
struct s_node {
	int value;
	struct s_node *next;
};

int	is_looping(struct s_node *node)
{
	struct s_node *fast;
	struct s_node *slow;

	fast = node;
	slow = node;
	while (fast && slow)
	{
		fast = fast->next;
		slow = slow->next;
		if (fast)
			fast = fast->next;
		if (fast && slow && fast == slow)
			return (1);
	}
	return (0);
}



int main()
{
	struct s_node *s1;
	struct s_node *s2;
	struct s_node *s3;
	struct s_node *s4;
	struct s_node *s5;
	struct s_node *s6;
	
	s1 = malloc(sizeof(struct s_node));
	s2 = malloc(sizeof(struct s_node));
	s3 = malloc(sizeof(struct s_node));
	s4 = malloc(sizeof(struct s_node));
	s5 = malloc(sizeof(struct s_node));
	s6 = malloc(sizeof(struct s_node));
	s1->next = s2;
	s2->next = s3;
	s3->next = s4;
	s4->next = s5;
	s5->next = s6;
	s6->next = 0;
	printf("%d\n", is_looping(s1));
	return (0);
}
