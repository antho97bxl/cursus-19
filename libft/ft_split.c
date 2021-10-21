/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:58:48 by avan-dey          #+#    #+#             */
/*   Updated: 2021/10/21 17:45:31 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_string(char const *s, char c)
{
	int		a;

	a = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
			a++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (a);
}

static int	ft_lentab(char const *s, char c)
{
	int		b;

	b = 0;
	while (s[b] != c && s[b] != '\0')
		b++;
	return (b);
}

static void	*ft_free(char **t, int i)
{
	while (i > 0)
	{
		i--;
		free(t[i]);
	}
	free(t);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		number;
	char	**t;

	i = 0;
	if (!s)
		return (0);
	number = ft_string(s, c);
	t = (char **)malloc(sizeof(char *) * (number + 1));
	if (!t)
		return (0);
	while (i < number)
	{
		while (*s != '\0' && *s == c)
			s++;
		t[i] = ft_substr(s, 0, ft_lentab(s, c));
		if (!t)
			return (ft_free(t, i));
		s = s + ft_lentab(s, c);
		i++;
	}
	t[i] = 0;
	return (t);
}
