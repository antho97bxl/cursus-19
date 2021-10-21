/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:23:19 by avan-dey          #+#    #+#             */
/*   Updated: 2021/10/21 15:32:51 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*s3;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (0);
	s3 = malloc(sizeof(char const) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	while (s1[a] != '\0')
	{
		s3[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s3[a + b] = s2[b];
		b++;
	}
	s3[a + b] = '\0';
	return (s3);
}
