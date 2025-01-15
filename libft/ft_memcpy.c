/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:41:08 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 12:20:30 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *sorc, size_t n)
{
	char	*dst;
	char	*src;
	
	dst = dest;
	src = sorc;
	for (size_t i = 0; i < n; i++)
	{
		dst[i] = src[i];
	}
	return dest;
}