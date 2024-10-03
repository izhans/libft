/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:35:47 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/03 05:59:12 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_number_of_parts(char const *str, char c);

#include <stdio.h>
char **ft_split(char const *s, char c)
{
	size_t	n_parts;
	char	*cleaned_s;
	char	**strs;

	cleaned_s = ft_strtrim(s, &c);
	n_parts = ft_count_number_of_parts(cleaned_s, c);
	strs = malloc((n_parts + 1) * sizeof(char *)); // OJO con el +1 en el caso de que str sea null
	if (strs == NULL)
		return (NULL);
	size_t	i;
	i = 0;
	while (i < n_parts && ft_strchr(cleaned_s + 1, c))
	{
		size_t part_len = ft_strchr(cleaned_s, c) - cleaned_s;
		strs[i] = ft_substr(cleaned_s, 0, part_len);
		cleaned_s = ft_strchr(cleaned_s + 1, c);
		printf("part %zu len: %zu\n", i, part_len);
		// libero todo lo que se había reservado hasta el momento
		if (strs[i] == NULL)
		{
			while(i >= 0)
			{
				free(strs[i]);
				i--;
			}
			free(strs);
			free(cleaned_s);
			return (NULL);
		}
		i++;
	}
	// free(cleaned_s);
	return (strs);
}

size_t	ft_count_number_of_parts(char const *str, char c)
{
	size_t	n_parts;

	n_parts = 1;
	printf("cleaned: <%s>\n", str);
	while (*str && ft_strchr(str + 1, c))
	{
		str = ft_strchr(str + 1, c) + 1;
		printf("\t%zu <%s>\n", n_parts, str);
		if (*str != c)
			n_parts++;
	}
	printf("nparts: %zu\n", n_parts);
	return (n_parts);
}
