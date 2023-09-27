/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:39:30 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/19 15:20:57 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	x;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	x = nb;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + 48);
	}
	else
		ft_putchar(x + 48);
}
/*
int main(void)
{
//	int i;

//	i = -45678;
	ft_putnbr(42);
	return (0);
}*/
