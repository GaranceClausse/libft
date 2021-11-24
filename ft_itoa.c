/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:08 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/24 16:58:49 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	int			i;
	int			cpt;
	long int	nbr;
	char			*str;

	i = 0;
	cpt = 1;
	nbr = n;
	if (n < 0)
	{
		nbr = nbr * -1;
		cpt = 2;
	}
	while (nbr / 10)
	{
		cpt++;
		nbr = nbr / 10;
	}
	str = malloc(sizeof(char) * (cpt + 1));
	if (!str)
		return (NULL);
	str[cpt] = '\0';
	if (n < 0)
		str[0] = '-';
	while ((cpt + 1) > 0)
	{
		str[cpt - 1] = n % 10 + 48;
		n = n / 10;
		cpt--;
	}
	return (str);
}
