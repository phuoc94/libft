/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:33:40 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/05 17:34:59 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	dest1[] = "Hello";
	char	dest2[] = "Hello";
	char	dest3[] = "Hello";
	char	dest4[] = "Hello";
	char	*src1;
	char	*src2;
	char	*src3;
	char	*src4;

	src1 = strchr(dest1, 'e');
	src2 = strchr(dest2, 'e');
	src3 = strchr(dest3, 'e');
	src4 = strchr(dest4, 'e');
	memmove(((void *)0), ((void *)0), 5);
	ft_memmove(((void *)0), ((void *)0), 5);
	memmove(src3, dest3, 3);
	ft_memmove(src4, dest4, 3);
	printf("%s == %s\n", dest1, dest2);
	printf("%s == %s\n", dest3, dest4);
	return (0);
}
