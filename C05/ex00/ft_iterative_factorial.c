/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:17:22 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/21 22:54:17 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	int t;
// 	t = ft_iterative_factorial(5);
// 	printf("%d", t); 
// }