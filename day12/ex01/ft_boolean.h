/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:40:56 by grichie           #+#    #+#             */
/*   Updated: 2020/07/24 20:40:58 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef short t_bool;

int	ft_even(int nbr)
{
	return ((nbr % 2 == 0) ? 1 : 0);
}

typedef int	(*t_even)(int);

t_even g_eve = &ft_even;
# define EVEN g_eve
#endif
