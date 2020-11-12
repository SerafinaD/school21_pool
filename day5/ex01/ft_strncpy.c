/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:24:34 by grichie           #+#    #+#             */
/*   Updated: 2020/07/17 21:24:55 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while ((*src != '\0') && (len < n))
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	while (len < n)
	{
		*dest = '\0';
		dest++;
		len++;
	}
	return (dest - n);
}
