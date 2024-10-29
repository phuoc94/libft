/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:54:33 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 07:54:53 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("A = %c = %c\n", ft_tolower('A'), tolower('A'));
	printf("Z = %c = %c\n", ft_tolower('Z'), tolower('Z'));
	printf("a = %c = %c\n", ft_tolower('a'), tolower('a'));
	printf("z = %c = %c\n", ft_tolower('z'), tolower('z'));
	printf("0 = %c = %c\n", ft_tolower('0'), tolower('0'));
	printf("9 = %c = %c\n", ft_tolower('9'), tolower('9'));
	printf("127 = %c = %c\n", ft_tolower(127), tolower(127));
	printf("128 = %c = %c\n", ft_tolower(128), tolower(128));
	return (0);
}
