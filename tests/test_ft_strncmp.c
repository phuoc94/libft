/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:17:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/11/01 17:53:37 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	printf("Hello, eorld! = %d = %d\n", ft_strncmp("test\0", "test\300", 100), strncmp("test\0", "test\300", 100));
	return (0);
}
