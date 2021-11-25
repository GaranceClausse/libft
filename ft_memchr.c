/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:32:38 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:45 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] && i < n && str[i] != c)
		i++;
	if (i < n)
		return (&str[i]);
	else
		return (NULL);
}
