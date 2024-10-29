/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:32 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 14:55:20 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;

	s1 = "Hello";
	printf("hello = %s-%s", strchr(s1, 'e'), ft_strchr(s1, 'e'));
	printf("hello = %s-%s", strchr(s1, 'a'), ft_strchr(s1, 'a'));
	return (0);
}
