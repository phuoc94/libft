/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:20:09 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/04 10:47:48 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "../libft.h"

void iteri(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	else if (s[i] >= 'A' && s[i] <= 'Z')
		s[i] = s[i] + 32;
}

int main(void)
{
	char str[] = "HeLlo";

	ft_striteri(str, iteri);
	printf("result: %s", str);
}
