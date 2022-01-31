/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:24 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:26 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string to be split.
	c: The delimiter character.

Return value 
	The array of new strings resulting from the split.
	NULL if the allocation fails.

External functs
	malloc, free

Description
	Allocates (with malloc(3)) and returns an array of strings obtained 
	by splitting ’s’ using the character ’c’ as a delimiter.
	The array must end with a NULL pointer
*/

#include "libft.h"

static void	memfree(char **res, int n)
{
	int count;

	count = -1;
	while (++count <= n)
		free(res[count]);
	free(res);
}

static char	*setword(char c, char const *s)
{
	int		count;
	char	*word;

	count = 0;
	while (s[count] && c != s[count])
		count++;
	if (!(word = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	count = -1;
	while (s[++count] && c != s[count])
		word[count] = s[count];
	word[count] = '\0';
	return (word);
}

static int	countword(char const *s, char c)
{
	int count;
	int res;

	count = 0;
	res = 0;
	while (s[count])
	{
		while (s[count] && c == s[count])
			count++;
		if (s[count] && c != s[count])
			res++;
		while (s[count] && c != s[count])
			count++;
	}
	return (res);
}

char		**ft_split(char const *s, char c)
{
	int		count;
	int		counter;
	char	**res;

	res = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!s || !res)
		return (NULL);
	count = 0;
	counter = 0;
	while (s[count])
	{
		while (s[count] && c == s[count])
			count++;
		if (s[count] && c != s[count])
		{
			if ((res[counter++] = setword(c, &s[count])) == NULL)
			{
				memfree(res, counter - 1);
				return (NULL);
			}
			while (s[count] && c != s[count])
				count++;
		}
	}
	res[counter] = 0;
	return (res);
}
