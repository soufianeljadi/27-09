/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:47 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/01 16:26:31 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	p;
	int	r;

	nb = 2;
	p = 2;
	r = ft_iterative_power(nb, p);
	printf("%d", r);
	return 0;
}*/
