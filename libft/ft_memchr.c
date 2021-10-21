/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:21:42 by avan-dey          #+#    #+#             */
/*   Updated: 2021/06/02 14:02:40 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	letter;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (*str == letter)
			return (str);
		str++;
		i++;
	}
	return (0);
}
