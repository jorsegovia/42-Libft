/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:43:17 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:43:18 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
	strlcat() takes the full size of the destination buffer 
	and guarantee NUL-termination if there is room. 
	Note that room for the NUL should be included in dstsize.

	strlcat() appends string src to the end of dst.
	It will append at most dstsize - strlen(dst) - 1 characters.
	It will then NUL-terminate, unless dstsize is 0 
	or the original dst string was longer than dstsize
	(in practice this should not happen as it means that either
	dstsize is incorrect or that dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
	strlcat() returns the total length of the string they tried to create.
	For strlcat() that means the initial length of dst plus the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	count;
	size_t	counter;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	counter = dest_length;
	count = 0;
	if (dest_length < dstsize - 1 && dstsize > 0)
	{
		while (src[count] && dest_length + count < dstsize - 1)
		{
			dst[counter] = src[count];
			counter++;
			count++;
		}
		dst[counter] = 0;
	}
	if (dest_length >= dstsize)
		dest_length = dstsize;
	return (dest_length + src_length);
}
