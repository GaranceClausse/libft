/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/27 20:57:06 by gclausse         ###   ########.fr       */
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
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] == c)
			{
				if (str[i + 1] != c || str[i + 1] == '\0')
					cpt++;
				i++;
			}
		}
		i++;
	}
	return (cpt);
}

char	*create_word(const char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (numlet(&s[i], c) + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	char	**cpy;

	cpy = malloc(sizeof(char *) * (num_of_word(s, c) + 1));
	if (!cpy)
		return (NULL);
	printf("num of words :%d\n", (num_of_word(s, c) + 1));

	cpy[0] = NULL;
	i = 0;
	j = 0;
	while (s[i] && j <= num_of_word(s, c))
	{
		if (s[i] != c && s[i])
		{
			cpy[j] = create_word(&s[i], c);
			j++;
		}

		i = i + (numlet(&s[i], c)) + 1;
	}
	cpy[j] = NULL;
	return (cpy);
}

int main()
{
	char **tab = ft_split("loremipsum dolor sit amet,        consectetur        ipiscing et.    ", ' ');
	
	printf("%s\n", tab[0]);
printf("%s\n", tab[1]);
printf("%s\n", tab[2]);

printf("%s\n", tab[3]);
printf("%s\n", tab[4]);
printf("%s\n", tab[5]);
printf("%s\n", tab[6]);
printf("%s\n", tab[7]);

printf("%s\n", tab[8]);
printf("%s\n", tab[9]);
printf("%s\n", tab[10]);
printf("%s\n", tab[11]);
printf("%s\n", tab[12]);


}
