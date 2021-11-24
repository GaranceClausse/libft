/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:40:20 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/24 16:58:01 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	long int	nbr;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr < 10)
		write (fd, &(nbr + 48), 1);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		write (fd, &(nbr % 10), 1);
	}
}
