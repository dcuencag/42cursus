/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:16:16 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:17:58 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	if(ft_isalnum('3'))
		printf("Si es alfanumérico\n");
	else
	{
		printf("No es alfanumérico\n");
	}
	if(ft_isalnum('h'))
		printf("Si es alfanumérico\n");
	else
	{
		printf("No es alfanumérico\n");
	}
	if(ft_isalnum('%'))
		printf("Si es alfanumérico\n");
	else
	{
		printf("No es alfanumérico\n");
	}
	if(ft_isalnum('/'))
		printf("Si es alfanumérico\n");
	else
	{
		printf("No es alfanumérico\n");
	}
	if(ft_isalnum(':'))
		printf("Si es alfanumérico\n");
	else
	{
		printf("No es alfanumérico\n");
	}
} */