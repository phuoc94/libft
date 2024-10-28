/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:36:34 by phuocngu          #+#    #+#             */
/*   Updated: 2024/10/28 16:46:49 by phuocngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (0);
}
