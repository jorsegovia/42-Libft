/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:59:07 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:59:10 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters_
	s: The string from which to create the substring.
	start: The start index of the substring in the string ’s’.
	len: The maximum length of the substring.

Return value
	The substring.
	NULL if the allocation fails.

External functs:
	malloc

Description
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’
*/

#include "libft.h"
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return ((char *)ft_calloc(1, '\0'));
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
*/

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !substr)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return ((char *)ft_calloc(1, '\0'));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = 0;
	return (substr);
}
