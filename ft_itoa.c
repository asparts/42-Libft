/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:06:44 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/05 23:16:59 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <"libft.h">

static int	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

static void ft_revstr(char* str)
{
	size_t	len;
	size_t	i;
	char	tmp;
	
	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char*	ft_itoa(int n)
{
	char	*str;
	int	is_neg;
	size_t	len;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n = n( / 10);
	}
	if (is_neg)
		str[len] = '-';
	ft_revstr(str);
	return (str);
}
