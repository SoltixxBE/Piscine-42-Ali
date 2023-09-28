/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:41:30 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/19 23:16:46 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		i2 = 0;
		while (to_find[i2] == str[i + i2])
		{
			if (to_find[i2 + 1] == '\0')
			{
				return (str + i);
			}
			i2++;
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
//     char *rep;
//     char str[] = "Salut, les amis !.";
// 	char to_find[] = "les amis";
// 	rep = ft_strstr(str, to_find);
// 	printf("%s", rep);
// }