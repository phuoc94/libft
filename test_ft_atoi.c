/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:12:43 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 15:25:55 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str2 = "      --++++554763";
	str3 = " -554763";
	str4 = " 554763";
	str5 = "2147483647";
	printf("%d == %d\n", atoi(str1), ft_atoi(str1));
	printf("%d == %d\n", atoi(str2), ft_atoi(str2));
	printf("%d == %d\n", atoi(str3), ft_atoi(str3));
	printf("%d == %d\n", atoi(str4), ft_atoi(str4));
	printf("%d == %d\n", atoi(str5), ft_atoi(str5));
	return (0);
}
