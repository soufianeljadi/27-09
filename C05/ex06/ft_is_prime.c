/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:35:13 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/01 16:01:48 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div_2;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb % i == 0 || nb < 2)
		return (0);
	i = 3;
	div_2 = nb / 2;
	while (i <= div_2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_is_prime(1));
}*/
