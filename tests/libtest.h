/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:10 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/07 20:26:01 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTEST_H
# define LIBTEST_H

# include "../libft.h"
# include <ctype.h>
# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

void	assert_equal_int(int expected, int actual);
void	assert_equal_ptr(void *expected, void *actual);

void	test_ft_atoi(void);
void	test_ft_isalpha(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isdigit(void);
void	test_ft_isprint(void);
void	test_ft_tolower(void);
void	test_ft_toupper(void);
void	test_ft_strrchr(void);

#endif
