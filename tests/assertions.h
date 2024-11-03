/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assertions.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:14:43 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/03 19:06:24 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERTIONS_H
#define ASSERTIONS_H

#include <stdio.h>

#define ASSERT_EQUAL_INT(expected, actual) \
    if ((expected) != (actual)) { \
        printf("Test failed: expected %d, got %d\n", (expected), (actual)); \
    } else { \
        printf("Test passed\n"); \
    }

#endif