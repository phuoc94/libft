/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:00:00 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 19:59:25 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[50] = "Hello, World!";
	char	dest1[50];
	char	dest2[50];

	ft_memcpy(dest1, src, 2);
	memcpy(dest2, src, 2);
	printf("%s = %s \n", dest1, dest2);
	return (0);
}
