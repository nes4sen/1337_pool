/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:26:01 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/15 09:26:05 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	do_op(char *n1, char *op, char *n2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		get_ope(char *op);
int		add(int n1, int n2);
int		sub(int n1, int n2);
int		div(int n1, int n2);
int		mul(int n1, int n2);
int		mod(int n1, int n2);
int		ft_atoi(char *str);

#endif
