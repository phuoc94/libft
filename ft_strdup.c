/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:49:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 09:52:07 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	strlen;
	size_t	i;

	strlen = ft_strlen(s);
	ptr = calloc(sizeof(char), strlen);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= strlen)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
