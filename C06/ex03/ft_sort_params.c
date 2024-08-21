/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:34:15 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/05 18:52:30 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_ultimate_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (av[j])
		{
			if ((ft_strcmp(av[i], av[j])) > 0)
				ft_ultimate_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= ac - 1)
	{
		while (*av[i])
			write(1, av[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
}
