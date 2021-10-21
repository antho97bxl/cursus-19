/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:10:29 by avan-dey          #+#    #+#             */
/*   Updated: 2021/05/31 15:49:43 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tempsdest;
	unsigned char	*tempssrc;

	tempsdest = (unsigned char *)dest;
	tempssrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tempsdest[i] = tempssrc[i];
		if (tempssrc[i] == (unsigned char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	return (0);
}
