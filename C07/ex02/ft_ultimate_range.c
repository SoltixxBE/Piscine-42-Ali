/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:46:39 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/28 17:52:50 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (size);
}
// int	main()
// {
// 	int *tab;
// 	int s;
// 	s = ft_ultimate_range(&tab, 5,10);
// 	int i;
// 	i = 0;
// 	while (i < s)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }