/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:43:18 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/23 13:19:58 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	p;
	size_t	i;
	char	*pointer;

	p = 0;
	pointer = 0;
	if (s2[p] == '\0')
		return ((char *)s1);
	while (s1[p] != '\0' && p < len)
	{
		if (s1[p] == s2[0])
		{
			pointer = (char *)s1 + p;
			i = 0;
			while (s1[p + i] == s2[i] && p + i < len)
			{
				if (s2[i + 1] == '\0')
					return (pointer);
				i++;
			}
			pointer = 0;
		}
		p++;
	}
	return (NULL);
}
