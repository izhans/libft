/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isastre- <isastre-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:20:49 by isastre-          #+#    #+#             */
/*   Updated: 2024/10/07 01:21:02 by isastre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	s = (char *) src;
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
