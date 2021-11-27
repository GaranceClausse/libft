/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:26:05 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/27 17:56:59 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_ocurence(char *str, char c)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	char	*sep;

	i = 0;
	j = ft_strlen(s1);
	str = (char *)s1;
	sep = (char *)set;
	while (find_ocurence(sep, str[i]) == 1)
		i++;
	while (find_ocurence(sep, str[j - 1]) == 1)
		j--;
	return (ft_substr(str, i, (j - i)));
}
