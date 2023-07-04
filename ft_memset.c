/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:33:07 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/04 22:52:43 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned int	i;

	cc = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		*(unsigned char *)s = cc;
		i++;
		s++;
	}
	return (s);
}
