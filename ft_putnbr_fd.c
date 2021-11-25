/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:40:20 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/25 12:43:26 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

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
		ft_putchar_fd((nbr + 48), fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10), fd);
	}
}
