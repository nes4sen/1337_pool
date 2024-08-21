/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:07:16 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/24 16:26:41 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 100;
	int b = 10;
	int d;
	int m;
	int	*div = &d;
	int *mod = &m;
	ft_div_mod(a,b,div,mod);
	printf("a / b = %d\n", *div);
	printf("a %% b = %d\n", *mod);
}*/
