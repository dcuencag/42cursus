/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:41:05 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 12:02:11 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c >= 40 && c <= 176)
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_isprint(av[1][0]));
	}
	return (0);
} */