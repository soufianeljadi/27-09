/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:45:20 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/17 19:52:35 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(){

	char d[20] = "x";
	char s[] = "soufiane";
	char p[20];

	ft_strcat(d,s);
	int i;

	i = 0;
		while ( d[i] != '\0')
		{
		write(1, &d[i] ,1);
		i++;
		}
		return 0;
}*/
