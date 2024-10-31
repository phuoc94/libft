/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:56:44 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 10:03:02 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *prt1;
	char *prt2;

	prt1 = ft_strdup("asd");
	prt2 = strdup("asd");

	printf("%s\n", prt1);
	printf("%s\n", prt2);

	return (0);
}
