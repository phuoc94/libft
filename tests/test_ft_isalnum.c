/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:45 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:26:33 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_isalnum(void)
{
	ASSERT_EQUAL(isalnum('a'), ft_isalnum('a'));
	ASSERT_EQUAL(isalnum('Z'), ft_isalnum('Z'));
	ASSERT_EQUAL(isalnum('5'), ft_isalnum('5'));

	ASSERT_EQUAL(isalnum('!'), ft_isalnum('!'));
	ASSERT_EQUAL(isalnum(' '), ft_isalnum(' '));
	ASSERT_EQUAL(isalnum('\n'), ft_isalnum('\n'));
	ASSERT_EQUAL(isalnum('\0'), ft_isalnum('\0'));

	ASSERT_EQUAL(isalnum('0'), ft_isalnum('0'));
	ASSERT_EQUAL(isalnum('9'), ft_isalnum('9'));
	ASSERT_EQUAL(isalnum('m'), ft_isalnum('m'));
	ASSERT_EQUAL(isalnum('M'), ft_isalnum('M'));

	ASSERT_EQUAL(isalnum(0), ft_isalnum(0));
	ASSERT_EQUAL(isalnum(127), ft_isalnum(127));
	ASSERT_EQUAL(isalnum(-1), ft_isalnum(-1));
	ASSERT_EQUAL(isalnum(256), ft_isalnum(256));
}