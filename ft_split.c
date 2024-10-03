/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:35:47 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/03 21:17:42 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	ft_count_parts(char const *s, char c);

#include <stdio.h>
char **ft_split(char const *s, char c)
{
	char	**strs = NULL;
	size_t	parts;
	char	*str;

	str = ft_strtrim(s, &c);
	if (*str == '\0')
		return (NULL); // TODO cambiar el codigo para que se añada como unica posicion de strs
	parts = ft_count_parts(str, c);
	printf("parts: %zu\n", parts);
	
	strs = malloc((parts + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL); // TODO ft_free -> que libere str
	
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (i < parts)
	{
		len = 0;
		while (str[start + len] == c)
			start++;
		while (str[start + len] != c && str[start + len] != '\0')
			len++;
		strs[i] = ft_substr(str, start, len);
		// TODO malloc check de substr y ft_free si toca
		i++;
		start += len;
	}
	strs[i] = NULL;
	return (strs);
}

static size_t	ft_count_parts(char const *str, char c)
{
	size_t	i;
	size_t	parts;
	size_t	strlen;
	
	i = 0;
	parts = 1;
	strlen = ft_strlen(str);
	while (i < strlen)
	{
		if (str[i] == c && str[i] != str[i + 1])
			parts++;
		i++;
	}
	return (parts);
}
