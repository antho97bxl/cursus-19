/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:37:44 by avan-dey          #+#    #+#             */
/*   Updated: 2021/06/02 11:26:17 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (size == 0)
		return (k);
	while ((src[i] != '\0') && ((j + i) < (size - 1)))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	if (size > j)
		return (j + k);
	return (size + k);
}
