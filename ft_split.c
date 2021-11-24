/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/24 11:26:00 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

int	num_of_sep(char *str, char c)
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
	char **cpy;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	cpy = malloc(sizeof(char) * (num_of_sep(s, c) + 1));
	while (s[i])
	{
		k = 0;
		*cpy[j] = malloc(sizeof(char) * (ft_strlen(&s[i]) - ft_strlen(ft_strchr(s[i], c))));
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
