/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:48:03 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/30 17:00:50 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr1;
	char		*ptr2;

	ptr1 = strnstr(largestring, smallstring, 10);
	ptr2 = ft_strnstr(largestring, smallstring, 10);
	printf("ptr1 = %s.\nptr2 = %s.\n", ptr1, ptr2);
	return (0);
}

