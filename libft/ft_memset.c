/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:41:10 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/14 21:41:11 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *pointer, int value, size_t size)
{
	unsigned char	*ptr;

	ptr = pointer;
	for (size_t i = 0; i < size; i++)
	{
		ptr[i] = (unsigned char)value;
	}
	return pointer;
}
/* 
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Uso: %s <valor> <tamaño>\n", argv[0]);
        return 1; // Salir con error si no hay suficientes argumentos
    }

    int value = atoi(argv[1]);      // Convertir el valor a entero
    size_t size = atoi(argv[2]);   // Convertir el tamaño a entero sin signo

    unsigned char *buffer = (unsigned char *)malloc(size); // Reservar memoria
    if (!buffer) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    ft_memset(buffer, value, size); // Llenar el bloque de memoria

    // Imprimir los resultados
    printf("Bloque de memoria lleno con el valor %d:\n", value);
    for (size_t i = 0; i < size; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    free(buffer); // Liberar la memoria asignada
    return 0;
} */