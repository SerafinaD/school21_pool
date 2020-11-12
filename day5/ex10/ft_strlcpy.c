/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 20:57:18 by grichie           #+#    #+#             */
/*   Updated: 2020/07/18 20:58:10 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	srcsize;

	len = 0;
	srcsize = 0;
	if (!dest)
		return (0);
	while (src[srcsize])
		srcsize++;
	if (!size)
		return (srcsize);
	while (src[len] && (len < size - 1))
	{
		dest[len] = src[len];
		len++;
	}
	return (srcsize);
}
