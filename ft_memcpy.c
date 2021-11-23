/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:12 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/23 15:32:17 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	char	*csrc;
	char	*cpy;

	i = 0;
	csrc = (char *)src;
	cpy = (char *)dst;
	while (src[i] && i < n)
	{
		cpy[i] = csrc[i];
		i++;
	}
	return (dst);
}
