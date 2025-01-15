/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:16:32 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:18:05 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	if(ft_isalpha('3'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('A'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('z'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('%'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('@'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('['))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('`'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
	if(ft_isalpha('{'))
		printf("Si es alfabético\n");
	else
	{
		printf("No es alfabético\n");
	}
} */