/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:08 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 17:01:24 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			i;
	int			cpt;
	long int	nbr;
	char			*str;

	i = 0;
	cpt = 1;
	nbr = n;
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		if (!str)
			return (NULL);
		return (str);
	}
	if (n < 0)
	{
		nbr = nbr * -1;
		cpt = 2;
	}
	while (nbr / 10 != 0)
	{
		cpt++;
		nbr = nbr / 10;
	}
	str = malloc(sizeof(char) * (cpt + 1));
	if (!str)
		return (NULL);
	str[cpt] = '\0';
	nbr = n;
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while ((cpt + 1) > 0)
	{
		str[cpt - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		cpt--;
	}
	return (str);
}
