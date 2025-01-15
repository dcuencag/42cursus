/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:22:45 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:18:29 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, void *src, size_t n)
{
	char	*destiny;
	char	*source;
	
	destiny = dest;
	source = src;
	for (size_t i = 0; i < n; i++)
	{
		destiny[i] = source[i];
	}
	return dest;
}
/* 
#include <stdio.h>
int	main(void)
{
	char src[] = "12345";
	char dest[100];

	printf("Dest was: %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("Dest is: %s\n", dest);
} */