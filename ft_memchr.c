/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:23:51 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/07 06:22:19 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	if (!s)
		return (NULL);
	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return ((void *)(s + i));
		}
	i++;
	}
	return (NULL);
}
