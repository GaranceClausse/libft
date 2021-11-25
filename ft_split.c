/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 12:33:33 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_of_sep(const char *str, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		if (str[i] == c)
			cpt++;
		i++;
	}
	return (cpt);
}

char	**ft_split(char const *s, char c)
{
	char	**cpy;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	cpy = malloc(sizeof(char) * (num_of_sep(s, c) + 1));
	while (s[i])
	{
		k = ft_strlen(ft_strchr(&s[i], c));
		cpy[j] = malloc(sizeof(char *) * (ft_strlen(&s[i]) - k));
		k = 0;
		while (s[i] != c)
		{			
			cpy[j][k] = s[i];
			i++;
			k++;
		}
		cpy[j][k] = '\0';
		j++;
		i++;
	}
	cpy[j][k] = '\0';
	return (cpy);
}
