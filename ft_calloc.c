/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:59 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/27 18:50:03 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = malloc(sizeof(size) * (count));
	if (!cpy)
		return (NULL);
	while (i < count)
	{
		cpy[i] = '\0';
		i++;
	}
	return (&cpy[0]);
}
