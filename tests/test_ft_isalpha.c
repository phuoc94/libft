/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:31:15 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:45:36 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_isalpha(void)
{
	int	i;
	int	num_tests;
	int	test_chars[] = {'a', 'Z', '5', '!', ' ', '\n', '\0', '0', '9', 'm', 'M',
			0, 127, -1, 256};

	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
	i = 0;
	while (i < num_tests)
	{
		ASSERT_EQUAL(isalpha(test_chars[i]), ft_isalpha(test_chars[i]));
		i++;
	}
}
