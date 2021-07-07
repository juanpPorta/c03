/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 23:10:09 by jporta            #+#    #+#             */
/*   Updated: 2021/07/07 13:14:17 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

unsigned int	ft_count(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	if (size <= ft_count(dest))
		return (size + ft_count(src));
	a = ft_count(dest);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (ft_count(dest) + ft_count(&src[b]));
}
