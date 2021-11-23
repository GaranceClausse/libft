/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:27:26 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/23 18:34:43 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char **cpy;
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		len = i;
		while (s[len] != c)
			len++;
		*cpy[j] = malloc(sizeof(char) * (len - i));
		while (i < len)
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
