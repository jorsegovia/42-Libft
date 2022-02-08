/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:44:07 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:44:08 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strnstr(const char *haystack, const char *needle, size_t len);

DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated
	string needle in the stringhaystack, where not more than 
	len characters are searched.
	Characters that appear after a `\0' character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only be 
	used when portability is not a concern.

RETURN VALUES
	If needle is an empty string, haystack is returned; 
	if needle occurs nowhere in haystack, NULL is returned;
	otherwise a pointer to the first character of the 
	first occurrence of needle is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	count;
	unsigned int	counter;

	if (!needle[0])
		return ((char *)haystack);
	count = 0;
	while (count < len && haystack[count])
	{
		counter = 0;
		while ((count + counter < len)
			&& needle[counter] == haystack[count + counter])
		{
			if (needle[counter + 1] == '\0')
				return ((char *)&haystack[count]);
			counter++;
		}
		count++;
	}
	return (NULL);
}

/*
38	: Check the needele is a working str
41	: loop the haystack
	  using the first loop var
44	: loop while the current pos of haystack is equal to pos of needle
	  using the second loop var
47	: if end of needle str; return the position of haystack
53	: if no instances of needle found; return null
*/