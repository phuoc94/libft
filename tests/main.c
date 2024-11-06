/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:06:58 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:08:09 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

int	main(void)
{
	printf("Running tests...\n ");
	printf("\nTest ft_isalnum\n");
	test_ft_isalnum();
	printf("\n\nTest ft_strrchr\n");
	test_ft_strrchr();
	printf("\n\nDone.\n");
	return (0);
}
