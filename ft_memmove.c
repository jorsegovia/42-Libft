/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:42:26 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:42:27 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memmove(void *dst, const void *src, size_t len);

DESCRIPTION
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive 
	manner.

RETURN VALUES
	The memmove() function returns the original value of dst.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	c;

	if (dst > src)
	{
		c = (int) len - 1;
		while (c >= 0)
		{
			*(unsigned char *)(dst + c) = *(unsigned char *)(src + c);
			c--;
		}
	}
	else
	{
		c = 0;
		while (c < (int) len)
		{
			*(unsigned char *)(dst + c) = *(unsigned char *)(src + c);
			c++;
		}
	}
	return (dst);
}
