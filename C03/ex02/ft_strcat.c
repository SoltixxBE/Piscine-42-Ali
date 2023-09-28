/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:41:12 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/18 17:06:05 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2])
		dest[i++] = src[i2++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char dest[70] = "Salut,";
	char src[] = " les amis";	
	ft_strcat(dest, src);
	printf("%s", dest);
}*/
