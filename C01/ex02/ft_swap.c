/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:00:20 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/24 20:08:29 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main()
{
	int a = 12;
	int b = 88;
	printf("old a = %d | old b = %d\n",a,b);
	ft_swap(&a, &b);
	printf("new a = %d | new b = %d\n",a,b);
}*/
