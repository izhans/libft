/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:30:22 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/17 20:48:45 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// returns a pointer to the first occurrence of the character c in the string s

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
