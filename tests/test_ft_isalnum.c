/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:45 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/03 19:15:06 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "assertions.h"
#include <ctype.h>
#include <stdio.h>

void	test_ft_isalnum(void)
{
	ASSERT_EQUAL_INT(isalnum('a'), ft_isalnum('a'));
	ASSERT_EQUAL_INT(isalnum('Z'), ft_isalnum('Z'));
	ASSERT_EQUAL_INT(isalnum('5'), ft_isalnum('5'));

	ASSERT_EQUAL_INT(isalnum('!'), ft_isalnum('!'));
	ASSERT_EQUAL_INT(isalnum(' '), ft_isalnum(' '));
	ASSERT_EQUAL_INT(isalnum('\n'), ft_isalnum('\n'));
	ASSERT_EQUAL_INT(isalnum('\0'), ft_isalnum('\0'));

	ASSERT_EQUAL_INT(isalnum('0'), ft_isalnum('0'));
	ASSERT_EQUAL_INT(isalnum('9'), ft_isalnum('9'));
	ASSERT_EQUAL_INT(isalnum('m'), ft_isalnum('m'));
	ASSERT_EQUAL_INT(isalnum('M'), ft_isalnum('M'));

	ASSERT_EQUAL_INT(isalnum(0), ft_isalnum(0));
	ASSERT_EQUAL_INT(isalnum(127), ft_isalnum(127));
	ASSERT_EQUAL_INT(isalnum(-1), ft_isalnum(-1));
	ASSERT_EQUAL_INT(isalnum(256), ft_isalnum(256));
}