/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:47:31 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/09/20 13:08:36 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2 [i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(&str[i], to_find, len) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hello, World!";
	char	to_find[] = "llo";

	char	*result = ft_strstr(str, to_find);

	if (result != NULL)
   	{
		printf("%s" ,result);
	}
	else printf("Not found\n");
	return (0);
}*/
