/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:31:35 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:41:53 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memchr(const void *s, int c, size_t n);

DESCRIPTION
	The memchr() function locates the first occurrence of 
	c (converted to an unsigned char) in string s.

RETURN VALUES
	The memchr() function returns a pointer to the byte located,
	or NULL if no such byte exists within n bytes.
*/
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t s)
{
	size_t	count;

	if (!s)
		return (NULL);
	count = 0;
	while (count < s)
	{
		if (*(unsigned char *)(str + count) == (unsigned char)c)
			return ((void *)(str + count));
		count++;
	}
	return (NULL);
}
