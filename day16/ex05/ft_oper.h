/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:23:19 by grichie           #+#    #+#             */
/*   Updated: 2020/07/29 15:23:21 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPER_H
# define FT_OPER_H

int	ft_plus(int a, int b);
int	ft_minus(int a, int b);
int	ft_mod(int a, int b);
int	ft_div(int a, int b);
int	ft_mult(int a, int b);

int	(*g_ft_op[5])(int, int) = {&ft_plus, &ft_minus, &ft_mod, &ft_div, &ft_mult};
#endif
