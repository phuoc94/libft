/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_equal_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:26:33 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 16:45:28 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_RESET "\033[0m"

# include "libtest.h"

void assert_equal_ptr(void *expected, void *actual)
{
	if ((expected) != (actual))
	{
		printf("%sKO %s", COLOR_RED, COLOR_RESET);
	}
	else
	{
		printf("%sOK %s", COLOR_GREEN, COLOR_RESET);
	}
}
