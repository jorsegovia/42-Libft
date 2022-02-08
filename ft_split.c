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

static char	**memfree(char **res, int n)
{
	int	count;

	count = -1;
	while (++count <= n)
		free(res[count]);
	free(res);
	return (NULL);
}

static char	*setword(char const *s, char c, int *pos)
{
	int		count;
	int		len;
	char	*word;

	len = 0;
	while (s[(*pos) + len] && s[(*pos) + len] != c)
		len++;
	count = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (count < len)
	{
		word[count] = s[(*pos)];
		count++;
		(*pos)++;
	}
	word[count] = '\0';
	return (word);
}

static int	countwords(char const *s, char c)
{
	int	count;
	int	res;

	count = 0;
	res = 0;
	while (s[count])
	{
		if (s[count] == c && s[count - 1] != c)
			res++;
		count++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		counter;
	int		wordcount;
	char	**res;

	if (!s)
		return (NULL);
	wordcount = countwords(s, c);
	res = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!res)
		return (NULL);
	count = 0;
	counter = 0;
	while (s[count] && counter < wordcount)
	{
		if (s[count] != c)
		{
			res[counter++] = setword(s, c, &count);
			if (!res[counter - 1])
				return (memfree(res, counter - 1));
		}
		count++;
	}
	res[counter] = 0;
	return (res);
}

/*
concepts:
word	-> the splits of str s using char c

33	: free the memory allocated for the str res;
51	: get the word length
54	: memory asignation and protection
57	: loop to save the corresponding char on the str word
63	: fill the last position with end of str char
74	: loop the str while searching for instances of char c to get wordcount
93	: check for correct str argument
95	: check the wordcount 
96	: memory asignation and protection
101	: loop the str while looking for words
107	: free memory if word cannot be saved
111	: fill the last position with end of str char
*/