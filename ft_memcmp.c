/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:37:37 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 12:21:32 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char*)s2;
	if (str1[i] == '\0' || str2[i] == '\0')
		return (0);
	while (i < n && str1[i] != str2[i])
		i++;
	if (i == n - 1)
		return (0);
	else
		return (str1[i] - str2[i]);
}
