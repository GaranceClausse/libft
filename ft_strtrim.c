/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:26:05 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/24 16:59:46 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*find_ocurence(char *str, char c)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*cpy;

	i = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (s[start] && i < len - 1)
	{
		cpy[i] = s[start];
		i++;
		start++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = ft_strlen(s1);
	while (find_ocurence(set, s1[i]) == 1)
		i++;
	while (find_ocurence(set, s1[j]) == 1)
		j--;
	return (ft_substr(s1, i, (j - i)));
}
