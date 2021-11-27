/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:08 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/27 16:07:38 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numsize(long int nbr)
{
	int	cpt;

	cpt = 1;
	if (nbr < 0)
		cpt = 2;
	while (nbr / 10 != 0)
	{
		cpt++;
		nbr = nbr / 10;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	int			cpt;
	long int	nbr;
	char		*str;

	nbr = n;
	if (n < 0)
		nbr = nbr * -1;
	cpt = numsize(nbr);
	str = malloc(sizeof(char) * (cpt + 1));
	if (!str)
		return (NULL);
	str[cpt] = '\0';
	if (n >= 0)
		cpt = cpt - 1;
	while ((cpt + 1) > 0)
	{
		str[cpt] = nbr % 10 + 48;
		nbr = nbr / 10;
		cpt--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
