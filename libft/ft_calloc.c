/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:13:44 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/23 11:30:58 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	n;

	n = nmemb * size;
	p = malloc(n);
	if (!p)
		return (0);
	ft_bzero(p, n);
	return (p);
}
