/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:32 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:26:42 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_strrchr(void)
{
	char *str1 = "Hello, World!";
	char *str2 = "";
	char *str3 = "abcabcabc";
	char *str4 = "Line1\nLine2\n";

	ASSERT_EQUAL(strrchr(str1, 'o'), ft_strrchr(str1, 'o'));
	ASSERT_EQUAL(strrchr(str1, 'x'), ft_strrchr(str1, 'x'));
	ASSERT_EQUAL(strrchr(str1, '\0'), ft_strrchr(str1, '\0'));
	ASSERT_EQUAL(strrchr(str1, 'H'), ft_strrchr(str1, 'H'));
	ASSERT_EQUAL(strrchr(str1, '!'), ft_strrchr(str1, '!'));
	ASSERT_EQUAL(strrchr(str1, -1), ft_strrchr(str1, -1));
	ASSERT_EQUAL(strrchr(str1, 200), ft_strrchr(str1, 200));
	ASSERT_EQUAL(strrchr(str2, 'a'), ft_strrchr(str2, 'a'));
	ASSERT_EQUAL(strrchr(str3, 'b'), ft_strrchr(str3, 'b'));
	ASSERT_EQUAL(strrchr(str4, '\n'), ft_strrchr(str4, '\n'));
}