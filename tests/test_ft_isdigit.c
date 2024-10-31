/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:31:15 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 07:19:16 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("x = %d\n", ft_isdigit('x'));
	printf("1 = %d\n", ft_isdigit('1'));
	return (0);
}
