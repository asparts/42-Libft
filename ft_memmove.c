/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:13:57 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/05 00:04:05 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (dest == src)
		return (dest);

	s = (char *)src;
	d = (char *)dest;
	if (d < s)
	{
		while (n--)
			*(d + len) = *(s + len);
		return (dest);
	}
	while (n--)
		*d++ = *s++;
	return (dest);
}
