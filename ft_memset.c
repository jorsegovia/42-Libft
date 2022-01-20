/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:42:36 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:42:38 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memset(void *b, int c, size_t len);

DESCRIPTION
	The memset() function writes len bytes of value c
	(converted to an unsigned char) to the string b.

RETURN VALUES
	The memset() function returns its first argument.
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	if (!b || !c)
		return (NULL);
	count = 0;
	while (count < len)
	{
		*(unsigned char *)(b + count) = (unsigned char)(c);
		count++;
	}
	return (b);
}
