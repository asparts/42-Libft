/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:33:07 by mnummi            #+#    #+#             */
/*   Updated: 2022/10/30 21:33:13 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int main()
{
	char str[50];

	strcpy(str, "this is string.h library function");
	puts(str);
	ft_memset(str, 'A', 7);
	puts(str);

	return 0;
}
*/
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
