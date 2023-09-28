/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:46:34 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/28 18:43:32 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = max - min;
	tab = (int *) malloc(sizeof(int) * i);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
// #include <stdio.h>
// int	main()
// {
// 	int *tab2;
// 	int i = 0;
// 	int max = 10;
// 	int min = 5;
// 	tab2 = ft_range(min, max);
// 	int size = max - min;
// 	while(i < size)
// 	{
// 		printf("%d", tab2[i]);
// 		i++;
// 	}
// }
