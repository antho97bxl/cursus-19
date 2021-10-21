/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:56:35 by avan-dey          #+#    #+#             */
/*   Updated: 2021/10/21 17:50:00 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_be(char const *s, char c)
{
	int		p;

	p = 0;
	while (*(s + p) != '\0')
	{
		if (*(s + p) == c)
			return (1);
		p++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;

	i = 0;
	if (!s1 || !set)
		return (0);
	l = ft_strlen(s1) - 1;
	while ((l > i) && ft_be(set, *(s1 + l)))
		l--;
	while (*(s1 + i) != '\0' && ft_be(set, *(s1 + i)))
		i++;
	return (ft_substr(s1, i, l - i + 1));
}
