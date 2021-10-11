/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:37:51 by avan-dey          #+#    #+#             */
/*   Updated: 2021/07/09 17:19:35 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			p;
	unsigned char	*p1;
	unsigned char	*p2;

	p = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((p1[p] != '\0') && (p2[p] != '\0') && (p1[p] == p2[p]) && (p < n))
	{
		p++;
	}
	if (p == n)
	{
		return (0);
	}
	return (p1[p] - p2[p]);
}
