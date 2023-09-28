/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoltani <asoltani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:35:01 by asoltani          #+#    #+#             */
/*   Updated: 2023/09/28 17:53:35 by asoltani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(char **strs, int size, char *sep)
{
	int	tot;
	int	i;
	int	j;

	j = 0;
	tot = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[size - 1][i] != '\0')
			i++;
		tot = tot + i;
		j++;
		size--;
	}
	j--;
	i = 0;
	while (sep[i] != '\0')
		i++;
	tot = tot + i * j;
	return (tot + 1);
}

char	*ft_empty(void)
{
	char	*e;

	e = malloc(1);
	e[0] = '\0';
	return (e);
}

void	ft_write(char **strs, int size, char *sep, char *join)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i] != '\0')
		{
			join[j] = strs[k][i];
			j++;
			i++;
		}
		i = 0;
		k++;
		while (sep[i] != '\0' && k < size)
		{
			join[j] = sep[i];
			j++;
			i++;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sizetot;
	char	*nstrs;

	if (size == 0)
		return (ft_empty());
	sizetot = ft_size(strs, size, sep);
	nstrs = malloc(sizetot);
	if (!nstrs)
		return (0);
	ft_write(strs, size, sep, nstrs);
	nstrs[sizetot - 1] = '\0';
	return (nstrs);
}

// #include <stdio.h>
// int main()
// {
//   char *s1 = "Salut";
//   char *s2 = "les";
//   char *s3 = "amis";
//   char *res;
//   char *tab[3] = {s1, s2, s3};
//   printf("%s",ft_strjoin(3, tab, " "));
// }
