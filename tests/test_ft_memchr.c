/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:16:25 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 12:04:27 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "hello";
	s2 = memchr(s1, 'o', 3);
	s3 = ft_memchr(s1, 'o', 3);
	printf("s = %s-%s", s2, s3);
	return (0);
}
