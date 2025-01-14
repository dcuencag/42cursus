/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:41:17 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/14 21:41:18 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_tolower(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

#include <stdio.h>
int	main(void)
{

	printf("%c\n", ft_tolower('Z'));

}