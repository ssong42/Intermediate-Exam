/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:46:15 by exam              #+#    #+#             */
/*   Updated: 2018/06/12 20:42:09 by 42robotic        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

struct s_node {
		void          *content;
		struct s_node *next;
};

struct s_stack {
		struct s_node *top;
};

int isEmpty(struct s_stack *stack)
{
	if (!stack->top)
		return (1);
	return (0);
}

struct s_stack *init(void)
{
	struct s_stack *holder;

	holder = malloc(sizeof(struct s_stack));
	holder->top = NULL;
	return (holder);
}

void *pop(struct s_stack *stack)
{
	struct s_node *place1;
	void *stuff;

	place1 = stack->top;
	if (!place1)
		return (NULL);
	stack->top = place1->next;
	stuff = place1->content;
	free(place1);
	return (stuff);
}

void push(struct s_stack *stack, void *content)
{
	struct s_node *new;

	new = malloc(sizeof(struct s_node));
	new->content = content;
	new->next = stack->top;
	stack->top = new;
}

void *peek(struct s_stack *stack)
{
	if (isEmpty(stack))
		return (NULL);
	return (stack->top->content);
}


#include <stdio.h>

int main()
{
//	char *a = "hello";
///	char *b = "my";
//	char *c = "dude";
	struct s_stack *stack;

	stack = init();
//	push(stack, (void *) a);
//	push(stack, (void *) c);
//	push(stack, (void *) b);
	printf("%s\n", peek(stack));
	printf("%s\n", pop(stack));
	printf("%s\n", pop(stack));
	printf("%d\n", isEmpty(stack));
	printf("%s\n", peek(stack));
	printf("%d\n", isEmpty(stack));
	printf("%s\n", pop(stack));
	printf("%s\n", pop(stack));
	printf("%d\n", isEmpty(stack));
	

	return (0);
		

}
