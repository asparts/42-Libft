/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:03:06 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/10 21:39:34 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	x;
	unsigned int	i;

	i = 0;
	x = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
		{
			x = 1;
			break ;
		}
		else
		{
			x = -1;
			break ;
		}
	}
	return (x);
}
