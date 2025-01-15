/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:40:40 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 12:26:58 by dancuenc         ###   ########.fr       */
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
int main(void) {
    char buffer[10] = "ABCDEFGH"; // Bloque de memoria con datos iniciales
    printf("Antes de ft_bzero: %s\n", buffer);

    ft_bzero(buffer, 10); // Llenar los primeros 5 bytes con 0

    printf("Después de ft_bzero: ");
    for (int i = 0; i < 10; i++)
    {
        if (buffer[i] != 0)
        {
            printf("%c ", buffer[i]);
        } else 
        {
            printf("%c ", '.');
        }
    }
    printf("\n");

    return 0;
} */