/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:20:54 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/29 11:20:50 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (0);
	if (start > s_len)
	{
		len = 0;
		start = s_len;
	}
	if (s_len - start < len)
		len = s_len - start;
	string = (char *)ft_calloc((len + 1), sizeof(char));
	if (!string)
		return (0);
	ft_strlcpy(string, s + start, len + 1);
	return (string);
}
