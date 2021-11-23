/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:15:32 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/23 17:25:53 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strlen(char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = 0;
	cpy = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cpy)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cpy[i] = s2[j];
		i++;
		j++;
	}
	cpy[i] = '\0';
	return (cpy);
}
