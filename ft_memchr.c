/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:23:51 by mnummi            #+#    #+#             */
/*   Updated: 2022/11/06 22:50:42 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cc;
	unsigned char	*cs;
	unsigned int	i;

	cc = (unsigned char *) c;
	cs = (unsigned char *) s;
	i = 0;
	while (i <= n)
	{
		if (cc == cs + i)
		{
			return (cs + i);
		}
	i++;
	}
	return (NULL);
}
