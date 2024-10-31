/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:32 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/31 12:07:22 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;

	s1 = "hello";
	printf("helo = %s-%s\n", strrchr(s1, 'l'), ft_strrchr(s1, 'l'));
	printf("hello = %s-%s\n", strrchr(s1, 'o'), ft_strrchr(s1, 'o'));
	return (0);
}

