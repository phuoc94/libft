/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:45:20 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 16:38:05 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "asd";
	s2 = "asx";
	printf("%d == %d\n", memcmp(s1, s2, 2), ft_memcmp(s1, s2, 2));
	printf("%d == %d", memcmp(s1, s2, 3), ft_memcmp(s1, s2, 3));
	return (0);
}
