/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:35:47 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/03 16:57:34 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_number_of_parts(char const *str, char c);
void	ft_free(char	**strs, size_t i);

#include <stdio.h>
char **ft_split(char const *s, char c)
{
	size_t	n_parts;
	char	*cleaned_str;
	char	**strs;

	cleaned_str = ft_strtrim(s, &c);
	n_parts = ft_count_number_of_parts(cleaned_str, c);
	strs = malloc((n_parts + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	
	size_t	i;
	size_t	len;

	i = 0;
	while (i < n_parts && ft_strchr(s, c))
	{
		printf("part %zu\n", i);
		len = ft_strchr(s, c) - s;
		printf("\tlen: %zu\n", len);
		strs[i] = ft_substr(s, 0, len);
		printf("\tstr[%zu]: %s\n", i, strs[i]);
		if (strs[i] == NULL)
		{
			printf("free");
			ft_free(strs, i);
			return (NULL);
		}
		i++;
		printf("\t\tstrchr: <%s>\n", ft_strchr(s + 1, c) + 1);
		s = ft_strchr(s + 1, c) + 1;
		printf("\tnew s: <%s>\n", s);
		while (*s == c)
		{
			printf("aaa\n");
			printf("\tnew s: <%s>\n", ft_strchr(s + 1, c));
			s = ft_strchr(s+1, c);

		}
		
		
	}
	strs[i] = NULL;
	return (strs);
}

size_t	ft_count_number_of_parts(char const *str, char c)
{
	size_t	n_parts;

	n_parts = 1;
	// printf("str: <%s>\n", str);
	while (*str && ft_strchr(str + 1, c))
	{
		str = ft_strchr(str + 1, c) + 1;
		// printf("\t%zu <%s>\n", n_parts, str);
		if (*str != c)
			n_parts++;
	}
	printf("nparts: %zu\n", n_parts);
	return (n_parts);
}

// libero todo lo que se había reservado hasta el momento
// TODO probar a que la funcion devuelva NULL y arriba hacer return de la funcion directamente
void	ft_free(char	**strs, size_t i)
{
	while(i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}
