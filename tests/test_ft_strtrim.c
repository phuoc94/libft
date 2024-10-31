/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:46 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 16:56:26 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
	 char *test_cases[][3] = {
        {"     Hello,world! This is a test.      ", ",! ", "Hello,world! This is a test."},
        {"     Hello,world! This is a test.", ",! ", "Hello,world! This is a test."},
        {"Hello,world! This is a test.     ", ",! ", "Hello,world! This is a test."},
        {"Hello,world! This is a test.", ",! ", "Hello,world! This is a test."},
        {"Hello,world! This is a test.", "H,! ", "ello,world! This is a test."},
    };

    for (unsigned long i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        printf("Test case %lu: \"%s\" with charset \"%s\"\n", i + 1, test_cases[i][0], test_cases[i][1]);
        char *result = ft_strtrim(test_cases[i][0], test_cases[i][1]);
		if(strcmp(result, test_cases[i][2]) != 0)
		{
			printf("Result: \"%s\"\n", result);
		}
		else
		{
			printf("Result: OK\n");
		}
        printf("\n");
    }

    return 0;
}
