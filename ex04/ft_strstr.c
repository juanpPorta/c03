/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 21:31:34 by jporta            #+#    #+#             */
/*   Updated: 2021/07/05 22:00:00 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		b = 0;
		while (str[i + b] != '\0' && str[i + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (&str[i]);
			}
			b++;
		}
		i++;
	}
	return (0);
}
