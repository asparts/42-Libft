/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:12:05 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/05 00:15:02 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void*	ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = (void*)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(ptr, count);
	return ptr);
}
