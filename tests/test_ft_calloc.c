/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:32:16 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 09:44:56 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *prt1 = ft_calloc(sizeof(char), 10);
	char *prt2 = calloc(sizeof(char), 10);

	if(!prt1)
		printf("error in ft_calloc");
	else if (!prt2)
		printf("error in calloc");
	else
		printf("no error");


	free(prt1);
	free(prt2);

	return (0);
}
