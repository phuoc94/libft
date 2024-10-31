/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:17:29 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 17:19:09 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	str_len;

	start = 0;
	end = 0;
	str_len = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
	{
		start++;
	}
	while ((ft_strchr(set, s1[str_len - end - 1])))
	{
		end++;
	}
	ptr = malloc(sizeof(char) * (str_len - start - end) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], (str_len - start - end) + 1);
	return (ptr);
}
