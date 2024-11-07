/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:54:33 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 20:25:15 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_tolower(void)
{
	int	i;
	int	num_tests;
	int	test_chars[] = {'a', 'Z', '5', '!', ' ', '\n', '\0', '0', '9', 'm', 'M',
			0, 127, -1, 256};

	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
	i = 0;
	while (i < num_tests)
	{
		int expected = tolower(test_chars[i]);
		int actual = ft_tolower(test_chars[i]);
		assert_equal_int(expected,actual);
		i++;
	}
}
