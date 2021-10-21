/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:32:21 by avan-dey          #+#    #+#             */
/*   Updated: 2021/06/02 16:30:47 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				p;
	unsigned char	z;

	p = ft_strlen(s);
	z = c;
	while (p >= 0)
	{
		if (s[p] == z)
			return ((char *)s + p);
		p--;
	}
	return (NULL);
}
