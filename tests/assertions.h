/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assertions.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:14:43 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/06 21:26:12 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERTIONS_H
# define ASSERTIONS_H

# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_RESET "\033[0m"

# include <stdio.h>

# define ASSERT_EQUAL(expected, actual)               \
	if ((expected) != (actual))                      \
	{                                                \
		printf("%sKO %s", COLOR_RED, COLOR_RESET);   \
	}                                                \
	else                                             \
	{                                                \
		printf("%sOK %s", COLOR_GREEN, COLOR_RESET); \
	}
#endif