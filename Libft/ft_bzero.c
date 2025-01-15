/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:14:17 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 18:03:27 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *pointer, int size)
{
	char	*ptr;
	int		i;

	ptr = pointer;
	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
}
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "This could be your password";
    int size = strlen(str);

    printf("str was: %s\n", str);
    ft_bzero(str, size);
    printf("str is: %s\n", str);
} */