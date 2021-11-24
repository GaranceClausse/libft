/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:03:12 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/24 16:51:25 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
