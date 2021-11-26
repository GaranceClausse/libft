/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/26 15:59:16 by gclausse         ###   ########.fr       */
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
		{
			cpt++;
			while (str[i] == c)
				i++;
		}
		i++;
	}
	if (str[i - 1] == c)
		cpt--;
	return (cpt);
	printf("cpt = %d\n", cpt);
}

char	**ft_split(char const *s, char c)
{
	char	**cpy;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	printf("string : %s\n", s);
	printf("num of sep %d\n", (num_of_sep(s, c)));
	cpy = malloc(sizeof(char *) * (num_of_sep(s, c)));
	while (s[i])
	{
		if (s[i] != c)
		{
			cpy[j] = malloc(sizeof(char) * (ft_strlen(&s[i]) - ft_strlen(ft_strchr(&s[i], c)) + 1));
			k = 0;
			while (s[i] != c && s[i])
			{			
				cpy[j][k] = s[i];
				i++;
				k++;
			}
			cpy[j][k] = '\0';
			printf("cpy = %s\n", cpy[j]);
			j++;
			i++;
		}
		i++;
	}
	return (cpy);
}
/*
int	main()
{
	char **tab = ft_split("tripouille42 745i 4 poii4", '4');

	printf("0 = %s\n", tab[0]);
	printf("1 = %s\n", tab[1]);
	printf("2 = %s\n", tab[2]);
	printf("3 = %s\n", tab[3]);

}*/




