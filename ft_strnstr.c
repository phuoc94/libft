/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:36:35 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 11:28:28 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && (i + little_len <= len))
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
