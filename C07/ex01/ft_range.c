/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:19:20 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/24 16:36:17 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	else
		range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int	main()
{
	int i = 0;
	int min = 3;
	int max = 9;
	int *range;

	range = ft_range(min, max);
	while (range[i])
	{
		printf("%d \n",range[i]);
		i++;
	}
	return 0;
}*/
