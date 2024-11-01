/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:34:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/01 19:22:54 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
int main()
{
        char *test_cases[][2] = {
        {"Hello,world! This is a test.", ",! "},
        {"split,this,string", ","},
        {"multiple;;;separators;;;together", ";"},
        {"ends with separator;;", ";"},
        {";;starts with separator", ";"},
        {"no separators here", ","},
        {"", ","},
        {";;;;", ";"},
        {"edge,,cases,,in,,betweexn", ",,"},
        {"one.separator.in.middle", "."},
        {"one.separator.in.middle", ""},
        {"one\vseparator\0in\tmiddle", "\t"},
        {"one\0separator\0in\0middle", "n\0"}
    };

    size_t size = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;

    printf("size: %lu\n", size);

    while (i < size)
    {
        printf("Test case %lu: \"%s\" with charset \"%c\"\n", i + 1, test_cases[i][0], test_cases[i][1][0]);
        char **result = ft_split(test_cases[i][0], test_cases[i][1][0]);
       for (int j = 0; result[j] != NULL; j++)
        {
            printf("Result %d: \"%s\"\n", j + 1, result[j]);
        }
        printf("\n");
        i++;
    }

    return 0;
}
