/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:02:59 by ekandaq           #+#    #+#             */
/*   Updated: 2020/08/03 16:46:22 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define FKEY O_RDONLY
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_putstr(char *str);
void	sizeof_file(int fd, int *array);
void	open_file_loop(char **argv, int argc);
void	open_file(char *filename);
int		ft_puterror(int fd);
int		ft_strcmp(char *str, char *cmp);

#endif
