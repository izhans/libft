/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:46:48 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/07 01:24:15 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a pointer to the last occurrence of the character c in the string s

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	ch;

	last = NULL;
	ch = c;
	if (ch == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == ch)
			last = (char *) s;
		s++;
	}
	return (last);
}
