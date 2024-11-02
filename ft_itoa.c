/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:59:02 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/02 13:47:07 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_intlen(int n)
{
	int		temp;
	int		sign;
	size_t	len;

	len = 0;
	temp = n;
	if (n < 0)
	{
		sign = 1;
		temp = -temp;
		len++;
	}
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*isedgecase(int n)
{
	char	*result;

	if (n == -2147483648)
	{
		result = "-2147483648";
		return (result);
	}
	else if (n == 0)
	{
		result = "0";
		return (result);
	}
	else
	{
		return (NULL);
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	char	*edgecase;
	size_t	len;
	long	temp;

	temp = n;
	if (n < 0)
		temp = -temp;
	len = ft_intlen(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	edgecase = isedgecase(n);
	if (edgecase)
		return (edgecase);
	result[len] = '\0';
	while (len > 0)
	{
		result[len - 1] = (temp % 10) + '0';
		temp = temp / 10;
		len--;
	}
	if (n < 0)
		result[len] = '-';
	return (result);
}
