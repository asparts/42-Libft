/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:52:32 by mnummi            #+#    #+#             */
/*   Updated: 2022/10/30 21:54:13 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = size;
	while (i != 0)
	{
		*src++;
		i--;
	}
	i = 0;
	while (size > 1)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
}
