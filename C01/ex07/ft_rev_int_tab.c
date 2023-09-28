/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 05:52:23 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/11 07:19:07 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*
#include <stdio.h>
int main() 
{
    int tab[11];
    int i;
    int size;

    size = 11;
    i = 0;

    while(i < size )
    {
        tab[i] = size - i;
        i++;    
    }
    i = 0;
    while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
    printf("\n");
    ft_rev_int_tab(tab, size);
    i = 0;
    while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
*/
