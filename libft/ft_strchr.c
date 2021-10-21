/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:28:44 by avan-dey          #+#    #+#             */
/*   Updated: 2021/06/02 14:44:07 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	p;

	p = 0;
	while (s[p])
	{
		if (s[p] == (char)c)
			return ((char *)s + p);
		p++;
	}
	if (s[p] == (char)c)
		return ((char *)s + p);
	return (NULL);
}
