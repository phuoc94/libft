/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:12:43 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 18:55:03 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"


	void	test_ft_atoi(void)
	{
		int	i;
		int	num_tests;
		char *test_chars[] = {
		"0",
		"546:5",
		"+548",
		"054854",
		"000074",
		"+-54",
		"-+48",
		"--47",
		"++47",
		"+47+5",
		"-47-5",
		"\e475",
		"\t\n\r\v\f  469 \n",
		"-2147483648",
		"2147483647",
		"\t\n\r\v\fd469 \n",
		"\n\n\n  -46\b9 \n5d6",
		"",
	};


	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
	i = 0;
	while (i < num_tests)
	{
		int expected = atoi(test_chars[i]);
		int actual = ft_atoi(test_chars[i]);
		//printf("expected: %d, Got: %d", expected, actual);
		assert_equal_int(expected,actual);
		i++;
	}
}
