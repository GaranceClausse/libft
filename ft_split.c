/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/26 19:19:10 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlet(const char *str, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	if (c == '\0')
		return (ft_strlen(str));
	while (str[i] != c && str[i])
	{
		i++;
		cpt++;
	}
	return (cpt);
}

int	num_of_word(const char *str, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	if (c == '\0')
		return (0);
	while (str[i])
	{
		while (str[i + 1] == c)
			i++;
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			cpt++;
		i++;
	}
	return (cpt);

}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	int		j;
	int		k;
	char	**cpy;

	cpy = malloc(sizeof(char *) * (num_of_word(s, c) + 1));
	printf("cpt : %d\n", (num_of_word(s, c) + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		k = 0;
		if (s[i] != c && s[i])
		{
			cpy[j] = malloc(sizeof(char) * (numlet(&s[i], c) + 1));
			printf("num letters : %d\n", (numlet(&s[i], c) + 1));
			while (s[i] != c && s[i + 1])
			{
				cpy[j][k] = s[i];
				i++;
				k++;
			}
			cpy[j][k] = '\0';
			printf("cpy : %s\n\n", cpy[j]);
			j++;
			printf(" j = %d\n", j);
		}
		i++;
	}
	cpy[j] = NULL;
	return (cpy);
}
/*
int	main()
{
	char **tab = ft_split("tripouille     tr   rtb   ", '\0');


	printf("0 = %s\n", tab[0]);
	printf("1 = %s\n", tab[1]);
	printf("2 = %s\n", tab[2]);
	printf("3 = %s\n", tab[3]);

}
*/



