/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:35:47 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/06 01:05:07 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_parts(char const *s, char c);
static char		**ft_free(char **strs, char *str, size_t i);
static char		**ft_alloc(char **strs, char *str, size_t parts, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	parts;
	char	*str;

	str = ft_strtrim(s, &c);
	parts = ft_count_parts(str, c);
	if (*str == '\0')
		parts = 0;
	strs = malloc((parts + 1) * sizeof(char *));
	if (strs == NULL)
		return (ft_free(NULL, str, 0));
	return (ft_alloc(strs, str, parts, c));
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

static char	**ft_alloc(char **strs, char *str, size_t parts, char c)
{
	size_t			i;
	unsigned int	start;
	size_t			len;

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
		if (strs[i] == NULL)
			return (ft_free(strs, str, i));
		i++;
		start += len;
	}
	strs[i] = NULL;
	free(str);
	return (strs);
}

static char	**ft_free(char **strs, char *str, size_t i)
{
	while (i)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
	free(str);
	return (NULL);
}
