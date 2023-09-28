/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:41:37 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/14 17:33:37 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	i3;

	i = 0;
	i2 = 0;
	i3 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i3] != '\0')
		i3++;
	if (size <= i)
		i3 = i3 + size;
	else
		i3 = i3 + i;
	while (src[i2] && (i + 1) < size)
		dest[i++] = src[i2++];
	dest[i] = '\0';
	return (i3);
}
// #include <stdio.h>
// int main()
// {
//     unsigned int	    rep;
// 	char dest[13] = "Salut,";
// 	char src[] = "mon pote le pote";
// 	rep = ft_strlcat(dest, src, 8);
// 	printf("%s\n", dest);
// }