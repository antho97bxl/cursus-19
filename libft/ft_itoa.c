/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:02:05 by avan-dey          #+#    #+#             */
/*   Updated: 2021/09/30 16:44:11 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	ft_intlen(int a)
{
	int		b;

	b = 0;
	if (a <= 0)
		b++;
	while (a != 0)
	{
		a = a / 10;
		b++;
	}
	return (b);
}

char	*ft_itoa(int n)
{
	char			*string;
	int				size;
	int				signeds;
	unsigned int	number;

	number = n;
	size = ft_intlen(n);
	signeds = 0;
	string = malloc(sizeof(char) * (size + 1));
	if (!string)
		return (0);
	if (n < 0)
	{
		string[0] = '-';
		number *= -1;
		signeds = 1;
	}
	string[size] = '\0';
	while (size-- > signeds)
	{
		string[size] = (number % 10) + '0';
		number = number / 10;
	}
	return (string);
}
