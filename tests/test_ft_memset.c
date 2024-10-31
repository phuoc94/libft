/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:31:09 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/30 11:03:09 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	x;
	int	*ptr;

	x = 10;
	ptr = &x;
	ft_memset(ptr, 1, 1);
	printf("Value of x = %d\n", *ptr);
	return (0);
}
