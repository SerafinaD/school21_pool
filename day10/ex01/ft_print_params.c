/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:48:11 by grichie           #+#    #+#             */
/*   Updated: 2020/07/22 13:48:35 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_param(char *param)
{
	int		i;
	char	endl;

	i = 0;
	endl = '\n';
	while (param[i])
		write(1, &param[i++], 1);
	write(1, &endl, 1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		ft_print_param(argv[i++]);
	return (0);
}
