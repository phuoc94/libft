/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:03:08 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/30 16:09:57 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dest1[] = "hello";
	char	dest2[] = "hello";
	char	src1[] = "world";
	char	src2[] = "world";
	size_t	len1;
	size_t	len2;

	len1 = strlcpy(dest1, src1, 10);
	len2 = ft_strlcpy(dest2, src2, 10);
	printf("dest = %s.\nsrc= %s.\nlen=%lu.\n", dest1, src1, len1);
	printf("dest = %s.\nsrc= %s.\nlen=%lu.\n", dest2, src2, len2);
	return (0);
}

