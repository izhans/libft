/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:48:03 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/19 00:03:32 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef FT_LIBFT_H
#define FT_LIBFT_H


int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

size_t ft_strlen(const char *s);
void	*ft_memset(void *dest, int c, size_t count);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

char *ft_strnstr(const char *big, const char *little, size_t len);

#endif