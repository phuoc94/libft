/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:49:00 by phuocngu          #+#    #+#             */
/*   Updated: 2025/01/05 08:02:41 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	strlen;
	size_t	i;

	strlen = ft_strlen(s);
	ptr = malloc((strlen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= strlen)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
