/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 21:31:34 by jporta            #+#    #+#             */
/*   Updated: 2021/07/07 13:13:58 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	i;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		i = 0;
		while (str[a + i] != '\0' && str[a + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (&str[a]);
			}
			i++;
		}
		a++;
	}
	return (0);
}
