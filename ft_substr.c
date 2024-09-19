/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:32:52 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/19 21:20:33 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	i;

	size = len + 1;
	substr = malloc(size * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < size)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
