/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:09:14 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/03 16:58:42 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>
// legends - symbols 
// int array[size 2] for len 1 - amount of strok 2 - amount of stolb

void	sizeof_file(int fd, int *array)
{
	char	buf[1];
	int		len;
	int		ret;
	
	len = 0;
	while ((ret = read(fd, buf, sizeof(buf))))
	{
		if (!ft_puterror(-1))
			return ;
		if (!(ft_strcmp(buf, "\n")))
			len++;
		*(array+1)  += 1;
	}
	printf("%d", len);
}

void	open_file(char *filename)
{
	int fd;
	int	*arr;
	
	arr = (int*)malloc(sizeof(int) * 2);
	arr[0] = 0;
	arr[1] = 0;
	fd = open(filename, FKEY);
	if (!(ft_puterror(fd)))
		return ;
	sizeof_file(fd, arr); 
	close(fd);

}

void	open_file_loop(char **argv, int argc)
{
	int counter;

	counter = 1;
	while (counter < argc)
		open_file(argv[counter++]);
}

void	parser()
{
	// char **array
}
