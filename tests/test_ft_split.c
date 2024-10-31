/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:34:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 18:13:40 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
int main()
{
    char *test_cases[][2] = {
        {"Hello,world!; This is a test.", ","}
    };

    for (unsigned long i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        printf("Test case %lu: \"%s\" with charset \";\"\n", i + 1, test_cases[i][0]);
        char **result = ft_split(test_cases[i][0], ';');
		if (!result)
			return 1;
        for (int j = 0; result[j] != NULL; j++)
        {
            printf("Result %d: \"%s\"\n", j + 1, result[j]);
        }
        printf("\n");
    }

    return 0;
}
