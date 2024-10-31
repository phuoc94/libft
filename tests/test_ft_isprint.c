/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:31:15 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 07:51:23 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("0 = %d = %d\n", ft_isprint(0), isprint(0));
	printf("31 = %d = %d\n", ft_isprint(31), isprint(31));
	printf("32 = %d = %d\n", ft_isprint(32), isprint(32));
	printf("126 = %d = %d\n", ft_isprint(126), isprint(126));
	printf("127 = %d = %d\n", ft_isprint(127), isprint(127));
	return (0);
}
