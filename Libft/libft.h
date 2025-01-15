/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:24:52 by dancuenc          #+#    #+#             */
/*   Updated: 2025/01/15 18:09:34 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

void	ft_bzero(void *pointer, int size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memcpy(void *dest, void *src, int n);
void	*ft_memset(void *pointer, int value, int size);
char	ft_strlen(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif