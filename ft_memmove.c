/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:51:30 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/29 11:33:18 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*move;

	i = 0;
	csrc = (char *)src;
	move = (char *)dst;
	if (!src || !dst)
		return (0);
	if (src < dst && dst < src + len)
	{
		while (len--)
		{
			move[len] = csrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			move[i] = csrc[i];
			i++;
		}
	}
	return (move);
}
/*
int	main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf("vrai %s\n", memmove(dest, src, 8));
	printf("moi %s\n", ft_memmove(dest, src, 8));

}*/
