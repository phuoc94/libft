/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:06:58 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:47:39 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	main(void)
{
	printf("Running tests...\n ");
    printf("\nTest ft_isalpha\n");
    test_ft_isalpha();
	printf("\nTest ft_isalnum\n");
	test_ft_isalnum();
    printf("\nTest ft_isascii\n");
    test_ft_isascii();
	printf("\nTest ft_strrchr\n");
	test_ft_strrchr();
	printf("\n\nDone.\n");
	return (0);
}
