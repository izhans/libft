/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:46:48 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/17 20:59:40 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// returns a pointer to the last occurrence of the character c in the string s

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	if (c == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			last = (char *) s;
		s++;
	}
	return (last);
}
