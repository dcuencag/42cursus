/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:14:17 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 17:17:52 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_bzero(void *pointer, size_t size)
{
	char *ptr;
	
	ptr = pointer;
	for (size_t i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "This could be your password";
    size_t size = strlen(str);

    printf("str was: %s\n", str);
    ft_bzero(str, size);
    printf("str is: %s\n", str);
} */