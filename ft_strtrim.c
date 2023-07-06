/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:43:02 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/06 18:39:54 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strtrim(char const *s1, char const *set)
{
	char*	ptr;
	int	len;
	int	i;

	len = ft_strlen(s1);
	i = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (len - set != 0)
	{
		ptr[i] = s1[i];
		i++;
		len--;
	}
	ptr[i] = 0;
	return (ptr);
}
