/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:26:05 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/26 12:13:45 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_ocurence(const char *str, char c)
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

	i = 0;
	j = ft_strlen(s1);
	while (find_ocurence(set, s1[i]) == 1)
		i++;
	while (find_ocurence(set, s1[j - 1]) == 1)
		j--;
	return (ft_substr(s1, i, (j - i)));
}

