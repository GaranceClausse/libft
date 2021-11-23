/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:39:31 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/23 11:51:48 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
   	while (dest[i])
   		i++;
	while (src[j] && i <= size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}
