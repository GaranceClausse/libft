/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:39:31 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 14:51:01 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		srcsize;

	i = 0;
	j = 0;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (dstsize == 0)
		return (srcsize);
	while (dst[i])
		i++;
	if (dstsize <= i)
		return (dstsize + srcsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}
