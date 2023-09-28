/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:04:51 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/18 17:05:52 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2] && i2 < nb)
		dest[i++] = src[i2++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char dest[50] = "Salut,";
	char src[] = " les amis";
	unsigned int nb = 1;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
}
*/