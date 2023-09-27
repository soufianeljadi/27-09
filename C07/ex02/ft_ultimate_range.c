/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:22 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/26 16:36:38 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof (int) * (max - min));
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	int i;
	int min = 2;
	int max = 4;
	int *r;
	int size;

	size = ft_ultimate_range(&r, min, max);
	i = 0;
	
	if ( size > 0)
	{
		while (i < size)
		{
			printf("%d", r[i]);
			i++;
		}
	}
	return (0);

}*/
