/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:49:28 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/13 09:51:52 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] < 13) || base[i] == 32 || \
			base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

char	*ft_putnbr(int nb, char *base, int blen, char *p)
{
	long	nbl;
	char	nbrs[34];
	int		i;
	int		j;

	nbl = nb;
	i = 0;
	j = 0;
	if (nbl < 0)
	{
		nbl *= -1;
		p[j++] = '-';
	}
	if (nbl == 0)
		p[j++] = base[0];
	while (nbl > 0)
	{
		nbrs[i++] = base[nbl % blen];
		nbl /= blen;
	}
	while (i)
		p[j++] = nbrs[--i];
	p[j] = '\0';
	return (p);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		blen;
	char	*a;

	blen = check_base(base);
	a = (char *)malloc(34);
	if (!a)
		return (NULL);
	ft_putnbr(nbr, base, blen, a);
	return (a);
}

int	convert_base(char index, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == index)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	num;
	int		sign;
	int		blen;

	num = 0;
	sign = 1;
	blen = check_base(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (convert_base(*str, base) != -1)
	{
		num = num * blen + convert_base(*str, base);
		str++;
	}
	return ((int)num * sign);
}
