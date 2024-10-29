/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:31:09 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 10:13:54 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int	main ()
{
	char str[50];

	strcpy(str, "Hello, World!");
	puts(str);

	ft_memset(str, '#', 5);
	puts(str);

	return(0);
}
