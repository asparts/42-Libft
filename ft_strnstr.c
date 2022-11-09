/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:55:48 by mnummi            #+#    #+#             */
/*   Updated: 2022/11/09 22:27:39 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && little[j] != '\0')
			{
				i++;
				j++;
				if (!little[j])
					return ((char *)(big + (i - j)));
			}
		}
	i++;
	}
	return (NULL);
}
