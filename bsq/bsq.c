/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:34:32 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/03 16:16:15 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		// read from standart input
		// insert ur function
		return (0);
	}
	else
	{
		open_file_loop(argv, argc);
	}
}
