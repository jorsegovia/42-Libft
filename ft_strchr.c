/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:43:06 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:43:07 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strchr(const char *s, int c);

DESCRIPTION
	The strchr() function locates the first occurrence of c (converted to a char)
	in the string pointed to by s.
	The terminating null character is considered to be part of the string;
	therefore if c is `\0', the	functions locate the terminating `\0'.

RETURN VALUES
	The function strchr() returns a pointer to the located character,
	or NULL if the character does not appear in the string.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	if (!s)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == (char)c)
			return ((char *)s + count);
		count++;
	}
	if (s[count] == (char)c)	//Why is this needed here?
		return ((char *)s + count);
	return (NULL);
}
