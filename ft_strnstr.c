/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:36:35 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 08:25:02 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && (i < len))
	{
		j = 0;
		if (big[i] != little[j])
		{
			i++;
			j++;
		}
		if (strncmp(&big[i], little, little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
