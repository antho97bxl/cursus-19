/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:03:57 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/30 15:24:20 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	string = ft_strdup(s);
	if (!string)
		return (0);
	while (string[i])
	{
		string[i] = f(i, string[i]);
		i++;
	}
	return (string);
}
