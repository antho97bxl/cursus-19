/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:35:06 by avan-dey          #+#    #+#             */
/*   Updated: 2021/06/02 12:55:05 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		p;

	if (!size)
		return (ft_strlen(src));
	p = 0;
	while (p < size - 1 && src[p])
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (ft_strlen(src));
}
