/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:03:39 by mnummi            #+#    #+#             */
/*   Updated: 2022/11/06 22:10:35 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
	{
	int	i;

	i = 0;
	while (i <= n)
	{
		*dest = *src;
		*src++;
		*dest++;
		i++;
		if (src == c)
		{
			*dest = *src;
			*dest++;
			return (dest);
		}
	}
	return (NULL);
}
