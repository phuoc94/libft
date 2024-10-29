/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:10:36 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 10:26:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("Hello, World! = %lu = %lu\n", ft_strlen(str), strlen(str));
	str = "";
	printf(" = %lu = %lu\n", ft_strlen(str), strlen(str));
	str = "Hello, World!\0";
	printf("Hello, World!\\0 = %lu = %lu\n", ft_strlen(str), strlen(str));
	return (0);
}
