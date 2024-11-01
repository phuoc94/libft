/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:48:03 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/01 17:57:55 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char		*ptr1;
	char		*ptr2;

	ptr1 = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
	ptr2 = strnstr("lorem ipsum dolor sit amet", "", 10);
	printf("ptr1 = %s.\nptr2 = %s.\n", ptr1, ptr2);
	return (0);
}

