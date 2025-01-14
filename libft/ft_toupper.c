/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:41:20 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/14 21:41:21 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_toupper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

#include <stdio.h>
int	main(void)
{

	printf("%c\n", ft_toupper('z'));

}