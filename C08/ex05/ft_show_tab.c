/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:14:16 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/27 16:23:22 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
// char	*ft_copy(char *str, int size)
// {
// 	int i;
// 	char *strcp;
// 	i = 0;
// 	strcp = malloc(sizeof(char) * size);
// 	if (strcp == NULL)
// 		return (NULL);
// 	while (str[i])
// 	{
// 		strcp[i] = str[i]; 
// 		i++;
// 	}
// 	return (strcp);
// }
// int	ft_strlen(char *av)
// {
// 	int s;
// 	s = 0;
// 	while (av[s])
// 		s++;
// 	return (s);
// }
// struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
// {
// 	int	i;
// 	int j;
// 	t_stock_str *e;
// 	e = malloc(sizeof(t_stock_str) * ac);
// 	if (e == NULL)
// 		return (NULL);
// 	if (ac <= 0)
// 		return (NULL);
// 	i = 1;
// 	j = 0;
// 	while (av[i])
// 	{
// 		e[j].size = ft_strlen(av[i]);
// 		e[j].str = av[i];
// 		e[j].copy = ft_copy(e[j].str, e[j].size);
// 		if (e[j].copy == NULL)
// 			return (NULL);
// 		j++;
// 		i++;
// 	}
// 	e[j].size = 0;
// 	e[j].str = 0;
// 	e[j].copy = 0;
//     ft_show_tab(e);
// 	return (e);
// }
// int main(int ac, char** av)
// {
//     ft_strs_to_tab(ac, av);
// }
