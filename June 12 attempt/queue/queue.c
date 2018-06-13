/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:35:08 by exam              #+#    #+#             */
/*   Updated: 2018/06/12 11:12:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

struct s_node {
		void          *content;
		struct s_node *next;
};

struct s_queue {
		struct s_node *first;
		struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue *holder;

	holder = malloc(sizeof(struct s_queue));
	holder->first = NULL;
	holder->last = NULL;
	return (holder);
}

int isEmpty(struct s_queue *queue)
{
	if (!queue->first)
		return (1);
	return (0);
}

void *dequeue(struct s_queue *queue)
{
	struct s_node *place;
	void *stuff;

	if (isEmpty(queue))
		return (NULL);
	place = queue->first;
	queue->first = place->next;
	stuff = place->content;
	free(place);
	return (stuff);
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node *new;

	new = malloc(sizeof(struct s_node));
	new->content = content;
	new->next = NULL;
	if (!queue->last)
	{
		queue->last = new;
		queue->first = new;
		return;
	}
	queue->last->next = new;
	queue->last = new;
}

void *peek(struct s_queue *queue)
{
	if (isEmpty(queue))
		return (NULL);
	return (queue->first->content);
}

/*
#include <stdio.h>

int main()
{
	char *a = "hello";
	char *b = "my";
	char *c = "dude";
	struct s_queue *queue;

	queue = init();
	enqueue(queue, (void *) a);
	enqueue(queue, (void *) c);
	enqueue(queue, (void *) b);
	printf("%s\n", peek(queue));
	printf("%s\n", dequeue(queue));
	printf("%s\n", dequeue(queue));
	printf("%d\n", isEmpty(queue));
	printf("%s\n", peek(queue));
	printf("%s\n", dequeue(queue));
	printf("%s\n", dequeue(queue));
	printf("%d\n", isEmpty(queue));
	

	return (0);
	
}
*/
