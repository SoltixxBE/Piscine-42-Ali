/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:49:35 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/12 22:50:03 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main()
// {
// 	int is_prt;
// 	int nbr = 48;
// 	char a[] = {nbr, '\0'};

// 	is_prt = ft_str_is_printable(a);
// 	printf("%d", is_prt);
// }
