/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:30:53 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 09:47:36 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*prt;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0 || (total_size / size != nmemb))
		return (NULL);
	prt = malloc(total_size);
	if (!prt)
		return (NULL);
	ft_memset(prt, 0, total_size);
	return (prt);
}
