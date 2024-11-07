/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:31:15 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 16:34:51 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_isprint(void)
{
	int	i;
	int	num_tests;
	int	test_chars[] = {'a', 'Z', '5', '!', ' ', '\n', '\0', '0', '9', 'm', 'M',
			0, 127, -1, 256};

	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
	i = 0;
	while (i < num_tests)
	{
		int expected = isprint(test_chars[i]) ? 1 : 0;
		int actual = ft_isprint(test_chars[i]);
		assert_equal_int(expected,actual);
		i++;
	}
}
