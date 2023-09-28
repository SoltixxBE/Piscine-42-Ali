/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:58:33 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/11 08:24:56 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		write(1, &str[pos], 1);
		pos++;
	}
}

int main(void)
{
	ft_putstr("fffff");

}

