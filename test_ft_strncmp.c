/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:17:11 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 08:18:47 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello, World!";
	s2 = "Hello, World!";
	printf("Hello, World! = %d = %d\n", ft_strncmp(s1, s2, 13), strncmp(s1, s2, 13));

	s1 = "Hello, World!";
	s2 = "Hello, eorld!";
	printf("Hello, eorld! = %d = %d\n", ft_strncmp(s1, s2, 13), strncmp(s1, s2, 13));

	return (0);
}
