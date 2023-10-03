/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:33:41 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/30 18:27:08 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}*/
