/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:59 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:59:01 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
	s1: The string to be trimmed.
	set: The reference set of characters to trim.

Return value 
	The trimmed string.
	NULL if the allocation fails.

External functs
	malloc
	
Description
	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
	specified in ’set’ removed from the beginning and the end of the string.
*/

#include "libft.h"

static int	ft_checkset(char const *set, char c)
{
	size_t	size;

	size = 0;
	while (set[size])
	{
		if (set[size] == c)
			return (1);
		size++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(set, s1[start]))
		start++;
	while (end > start && ft_checkset(set, s1[end - 1]))
		end--;
	res = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!res)
		return (NULL);
	len = 0;
	while (start < end)
		res[len++] = s1[start++];
	res[len] = 0;
	return (res);
}

//57: front start
//59: back start
//61: save the trimmed result
//64: add the ending \0