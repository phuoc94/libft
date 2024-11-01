/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:34:32 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/01 19:06:50 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char *ptr;
	char s1[] = "lorem ipsum";
	char s2[] = "\0";

	ptr = ft_strjoin(s1, s2);

	printf("p:%s", ptr);

	return (0);
}
