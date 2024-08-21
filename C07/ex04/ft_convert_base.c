/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:49:04 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/13 09:51:15 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
char	*ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*p;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	p = malloc(34);
	num = ft_atoi_base(nbr, base_from);
	p = ft_putnbr_base(num, base_to);
	return (p);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	char *result = ft_convert_base(av[1], av[2], av[3]);
// 	printf("%s",result);
// 	free(result);
// 	return (0);
// }
