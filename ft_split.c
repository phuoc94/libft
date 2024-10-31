/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:21:30 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 18:40:46 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	length_of_strs(const char *str, char c)
{
	size_t	len;
	size_t	i;

	len = 1;
	i = 0;

	while (str[i])
	{
		if ((str[i + 1] == c)
			&& (str[i] != c))
			len++;
		i++;
	}
	return (len);
}

void	custom_strcpy(char *dest, const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i]== c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	split(char **strs, const char *str, char c)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c)
				j++;
			strs[word] = (char *)malloc((sizeof(char) * j) + 1);
			custom_strcpy(strs[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t	strslen;

	strslen = length_of_strs(s, c);
	strs = malloc((sizeof(char *) * strslen) + 1);
	split(strs, s, c);
	return (strs);
}
