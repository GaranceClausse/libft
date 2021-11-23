/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:32:38 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/23 15:46:04 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] && i < n && s[i] != c)
		i++;
	if (i < n)
		return (&s[i]);
	else
		return (NULL);
}
