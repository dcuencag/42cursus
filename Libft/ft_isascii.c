/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:18:13 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 18:16:25 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* 
#include <stdio.h>
int	main(void)
{
	if(ft_isascii(-128))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('A'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('z'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('%'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('@'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('['))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('`'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
	if(ft_isascii('{'))
		printf("Si es ascii\n");
	else
	{
		printf("No es ascii\n");
	}
} */