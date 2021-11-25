/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:12 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 16:22:08 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*csrc;
	char		*cpy;

	i = 0;
	csrc = (char *)src;
	cpy = (char *)dst;
	while (i < n)
	{
		cpy[i] = csrc[i];
		i++;
	}
	return (dst);
}
