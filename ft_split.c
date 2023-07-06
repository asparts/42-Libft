/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:38:23 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/06 18:52:59 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char**	ft_split(char const *s, char c)
{
	const char *a[2];
	char*	s_tmp;
	char*	s_tmp2;
	int	i;
	int	j;

	s_tmp = malloc(ft_strlen(s) + 1);
	s_tmp = malloc(ft_strlen(s) + 1);
	a = malloc(ft_strlen(s) +1);
	i = 0;
	j = 0;
	if (!s_tmp || !a)
		return (NULL);
	while (s[i] != c)
	{
		s_tmp[i] = s[i];
		i++;
	}
	while (s[i])
	{
		s_tmp2[j] = s[i];
		i++;
		j++;
	}
	s_tmp2[j] = 0;
	ft_strcpy(a[0], s_tmp);
	ft_strcpy(a[i], s_tmp2);
	return (a);
}
