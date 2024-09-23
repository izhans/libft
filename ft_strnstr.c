/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:06:39 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/23 02:08:17 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *) big);
	if (little_len > len || little_len > ft_strlen(big))
		return (NULL);
	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == little_len)
			return ((char *) &big[i - j + 1]);
		i++;
	}
	return (NULL);
}
