/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:33:38 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/10 17:46:18 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a;
	temp2 = *b;
	*a = temp / temp2;
	*b = temp % temp2;
}
/*
#include <stdio.h>
int main()
{
	int a;
	int b;

	a = 11;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
*/