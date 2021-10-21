/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:23:19 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/29 11:52:28 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	dst;

	dst = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s3 = (char *)malloc(dst * sizeof(*s3));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcat(s3, s2, dst);
	return (s3);
}
