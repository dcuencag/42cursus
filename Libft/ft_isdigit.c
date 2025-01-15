/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:18:35 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:18:19 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	if (ft_isdigit('0'))
		printf("Is digit\n");
	else
	{
		printf("Is not digit\n");
	}
	if (ft_isdigit('9'))
		printf("Is digit\n");
	else
	{
		printf("Is not digit\n");
	}
	if (ft_isdigit('/'))
		printf("Is digit\n");
	else
	{
		printf("Is not digit\n");
	}
	if (ft_isdigit(':'))
		printf("Is digit\n");
	else
	{
		printf("Is not digit\n");
	}
} */