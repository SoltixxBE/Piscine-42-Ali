/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:41:04 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/14 17:27:47 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i <= n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// int	main()
// {
// 	int	diff;
// 	diff = ft_strncmp("ebc", "abc", 0);
// 	printf("%d", diff);
// }