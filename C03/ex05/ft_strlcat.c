/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:48:07 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/20 12:25:45 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	d_len = 0;
	s_len = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	while (src[i] != '\0' && d_len + i < size - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int main()
{
	char 	d[90] = "55555";
	char 	s[] = "22";
	unsigned int	p;


	printf("dest1 :%d\n",ft_strlen(d));
	p = ft_strlcat(d ,s ,4);
	printf("%s",d);
	printf("\n");
	printf("dest2  :%d\n",ft_strlen(d));
	printf("return : %d",p);
	return (0);
}*/
