/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:55:22 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/03 03:28:31 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char_is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (*s1 == '\0')
		return (ft_substr(s1, 0, 0));
	start = 0;
	len = ft_strlen(s1);
	while (ft_char_is_in_set(s1[start], set))
		start++;
	while (ft_char_is_in_set(s1[len - 1], set))
		len--;
	len -= start;
	return (ft_substr(s1, start, len));
}

char	*ft_char_is_in_set(char c, char const *set)
{
	return (ft_strchr(set, c));
}
