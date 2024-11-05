/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:50:51 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/05 17:54:26 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;

	current = lst;
	while (current)
	{
		result = malloc(sizeof(t_list));
		if (!result)
			return (NULL);
		result->content = f(current->content);
		current = current->next;
	}
	return (result);
}
