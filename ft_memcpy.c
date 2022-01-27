/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:42:15 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:42:17 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area dst.
	If dst and src overlap, behavior is undefined.
	Applications in which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
	The memcpy() function returns the original value of dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
		return (NULL);
	while (count < n)
	{
		*(unsigned char *)(dst + count) = *(unsigned char *)(src + count);
		count++;
	}
	return (dst);
}
