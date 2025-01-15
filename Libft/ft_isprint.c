/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:19:41 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:18:24 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	if (ft_isprint(' '))
	{
		printf("Es imprimible\n");
	}
	else
	{
		printf("No es imprimible\n");
	}
	if (ft_isprint('~'))
	{
		printf("Es imprimible\n");
	}
	else
	{
		printf("No es imprimible\n");
	}
	if (ft_isprint('\0'))
	{
		printf("Es imprimible\n");
	}
	else
	{
		printf("No es imprimible\n");
	}
} */