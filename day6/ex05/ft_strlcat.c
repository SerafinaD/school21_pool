/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:13:56 by grichie           #+#    #+#             */
/*   Updated: 2020/07/19 20:14:00 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	len;

	lend = 0;
	len = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[len] != '\0' && (len + lend != size - 1))
	{
		dest[len + lend] = src[len];
		len++;
	}
	dest[len + lend] = '\0';
	while (src[len] != '\0')
		len++;
	return (len + lend);
}
