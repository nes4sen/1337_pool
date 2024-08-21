/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:39:07 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/10 15:44:29 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_check_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '+' || base[i] == '-' || ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[i] == base[j]) || base[j] == '+' || base[j] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_white_spaces(char *base)
{
	while (*base)
	{
		if (*base == ' ' || (*base >= 9 && *base <= 13))
			return (1);
		base++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	long	nb;
	int		base_len;
	int		sign;

	nb = 0;
	if (ft_check_errors(base) || ft_white_spaces(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = ft_strlen(base);
	while (ft_find_index(*str, base) >= 0 && *str)
	{
		nb = (nb * base_len) + (ft_find_index(*str, base));
		str++;
	}
	return ((int)(nb) * sign);
}
int main(int ac, char **av)
{
	ac = ac + 0;
	printf("%d \n", ft_atoi_base(av[1], av[2]));
}
