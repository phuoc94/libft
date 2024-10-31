/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:32:16 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 10:52:50 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = malloc(sizeof(char) * len + 1);
	if (!sub_s)
		return (NULL);
	ft_strlcpy(sub_s, &s[start], len + 1);
	return (sub_s);
}
