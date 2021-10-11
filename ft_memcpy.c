/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:56:01 by avan-dey          #+#    #+#             */
/*   Updated: 2021/05/31 15:13:14 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempsdest;
	unsigned char	*tempssrc;

	i = 0;
	tempsdest = (unsigned char *)dest;
	tempssrc = (unsigned char *)src;
	while (i < n)
	{
		tempsdest[i] = tempssrc[i];
		i++;
	}
	return (dest);
}
