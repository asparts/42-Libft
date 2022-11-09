/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:10:22 by mnummi            #+#    #+#             */
/*   Updated: 2022/11/09 21:15:45 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	if (arg <= 122 + '0' && arg >= 98 + '0')
		return (1);
	if (arg <= 90 + '0' && arg >= 65 + '0')
		return (1);
	return (0);
}
