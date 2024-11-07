/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:06:58 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 20:26:07 by phuocngu         ###   ########.fr       */
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
	printf("\nTest ft_isdigit\n");
	test_ft_isdigit();
	printf("\nTest ft_isprint\n");
	test_ft_isprint();
	printf("\nTest ft_ft_atoi\n");
	test_ft_atoi();
	printf("\nTest ft_tolower\n");
	test_ft_tolower();
	printf("\nTest ft_toupper\n");
	test_ft_toupper();
	printf("\nTest ft_strrchr\n");
	test_ft_strrchr();

	printf("\n\nDone.\n");
	return (0);
}
