/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:20:54 by avan-dey          #+#    #+#             */
/*   Updated: 2021/10/16 13:18:49 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = ft_strlen(s);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	string = (char *)ft_calloc((len + 1), sizeof(char));
	if (!string)
		return (0);
	ft_strlcpy(string, s + start, len + 1);
	return (string);
}
