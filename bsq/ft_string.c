/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:44:54 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/03 16:58:44 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>
int		ft_strcmp(char *str, char *cmp)
{
	while (*str != '\0' && *cmp != '\0')
	{
		if (*str == *cmp)
			break ;
		str++;
		cmp++;
	}
	return (*str - *cmp);
}

int		ft_atoi(char *str, int res)
{
	while (*str != '\0')
	{
		res = (res * 10) + *str - '0'; 
		str++;
	}
	return (res);
}
