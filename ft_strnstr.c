/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:06:39 by isastre-          #+#    #+#             */
/*   Updated: 2024/09/19 00:49:50 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{	
	size_t	i;
	int		j;
	int		little_len;

	if (*little == '\0')
		return ((char *) big);
		
	i = 0;
	j = 0;
	little_len = ft_strlen(little);

	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == little_len)
			return ((char *) &big[i -j+1]);
		
		i++;
	}

	return (NULL);
}
