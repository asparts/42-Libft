/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:10:03 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/11 18:48:53 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = nbr * -1;
		}
		if (nbr >= 9)
			ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}
