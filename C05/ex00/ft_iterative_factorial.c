/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:21:28 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/25 16:32:53 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d" ,ft_iterative_factorial(7));
	return (0);
}*/
