/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:19:41 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/21 22:57:05 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;

	temp = nb;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	if (nb < 0)
		return (0);
	while ((nb * nb) != temp && nb > 1)
	{
		nb--;
	}
	if ((nb * nb) == temp)
		return (nb);
	else
		return (0);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_sqrt(9));
// }
