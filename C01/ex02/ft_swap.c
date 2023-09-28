/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:47:43 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/10 16:59:17 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main()
{
	int a;
	int b;
	int* ptra;
	int* ptrb;

	a = 42;
	b = 12;
	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("%d", a);
	printf("%d", b);
}