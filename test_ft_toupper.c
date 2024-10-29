/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:58:04 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/29 07:58:20 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("a = %c = %c\n", ft_toupper('a'), toupper('a'));
	printf("z = %c = %c\n", ft_toupper('z'), toupper('z'));
	printf("A = %c = %c\n", ft_toupper('A'), toupper('A'));
	printf("Z = %c = %c\n", ft_toupper('Z'), toupper('Z'));
	printf("0 = %c = %c\n", ft_toupper('0'), toupper('0'));
	printf("9 = %c = %c\n", ft_toupper('9'), toupper('9'));
	printf("127 = %c = %c\n", ft_toupper(127), toupper(127));
	printf("128 = %c = %c\n", ft_toupper(128), toupper(128));
	return (0);
}
