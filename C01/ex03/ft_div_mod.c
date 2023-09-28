/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:00:03 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/10 17:32:16 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>

// int	main()
// {
// 	int a;
// 	int b;

// 	a = 11;
// 	b = 2;

// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d", div);
// 	printf("%d", mod);
// }