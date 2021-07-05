/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:51 by jporta            #+#    #+#             */
/*   Updated: 2021/07/05 20:48:56 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;
		}
		a = s1[i] - s2[i];
		return (a);
	}
	return (0);
}
