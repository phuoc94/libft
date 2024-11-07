/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:32 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 16:51:42 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_ft_strrchr(void)
{
	char *str1 = "Hello, World!";
	char *str2 = "";
	char *str3 = "abcabcabc";
	char *str4 = "Line1\nLine2\n";

	assert_equal_ptr(strrchr(str1, 'o'), ft_strrchr(str1, 'o'));
	assert_equal_ptr(strrchr(str1, 'x'), ft_strrchr(str1, 'x'));
	assert_equal_ptr(strrchr(str1, '\0'), ft_strrchr(str1, '\0'));
	assert_equal_ptr(strrchr(str1, 'H'), ft_strrchr(str1, 'H'));
	assert_equal_ptr(strrchr(str1, '!'), ft_strrchr(str1, '!'));
	assert_equal_ptr(strrchr(str1, -1), ft_strrchr(str1, -1));
	assert_equal_ptr(strrchr(str1, 200), ft_strrchr(str1, 200));
	assert_equal_ptr(strrchr(str2, 'a'), ft_strrchr(str2, 'a'));
	assert_equal_ptr(strrchr(str3, 'b'), ft_strrchr(str3, 'b'));
	assert_equal_ptr(strrchr(str4, '\n'), ft_strrchr(str4, '\n'));
}
