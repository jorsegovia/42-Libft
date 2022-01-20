/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:43:33 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:43:35 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
	strlcpy() takes the full size of the destination buffer and guarantees NUL-termination if there is room.
	Note that room for the NUL should be included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.

	If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
	Like snprintf(3), strlcpy() returns the total length of the string they tried to
	create. For strlcpy() that means the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (dstsize > 0)
	{
		while (src[count] && count < (dstsize - 1))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = 0;
	}
	while (src[count])
		count++;
	return (count);
}
