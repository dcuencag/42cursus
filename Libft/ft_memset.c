/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:23:18 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:09:30 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *pointer, int value, size_t size)
{
	char	*ptr;

	ptr = pointer;
	for (size_t i = 0; i < size; i++)
	{
		ptr[i] = (char)value;
	}
	return pointer;
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "821723681726387162hdgasvkjhvf7632";
	int	value = 'Z';

	printf("Dest was: %s\n", dest);
	printf("Length of dest was: %ld\n", strlen(dest));
	ft_memset(dest, value, strlen(dest));
	printf("Dest is: %s\n", dest);
	printf("Length of dest is: %ld\n", strlen(dest));
} */