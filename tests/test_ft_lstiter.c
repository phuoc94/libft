/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:07 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/04 18:47:22 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void myf(void *str)
{
	printf("current: %s\n", (char *)str);
}

int main(void)
{
	t_list *s1;
	t_list *s2;
	t_list *s3;
	t_list	*current;

	s1 = malloc(sizeof(t_list));
	s2 = malloc(sizeof(t_list));
	s3 = malloc(sizeof(t_list));
	s1->content = "hello";
	s1->next = s2;
	s2->content = "sdf";
	s2->next = s3;
	s3->content = "asd";
	s3->next = NULL;

	current = s1;

	ft_lstiter(s1, &myf);

	while (current)
	{
		current = current->next;
	}
	return (0);
}
