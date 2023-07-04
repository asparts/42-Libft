/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:24:33 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/05 00:36:12 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <"libft.h">

char*	ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	str;
	unsigned int	i;
	unsigned int	j;

	str = (char *) malloc(sizeof(*s) * (len + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while(s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
