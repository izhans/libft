/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:37:07 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/03 20:54:12 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	str_size;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_size = s1_len + s2_len + 1;
	str = malloc(str_size * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + s1_len, s2);
	str[str_size - 1] = '\0';
	return (str);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
