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

#include "libft.h"

static char	**freemem(char **res, int n)
{
	int	count;

	count = 0;
	while (count < n)
	{
		free(res[count]);
		count++;
	}
	free(res);
	return (NULL);
}

static char	*setword( char const *s, char c)
{
	int		count;
	char	*word;

	count = 0;
	while (s[count] && c != s[count])
		count++;
	word = malloc(sizeof(char) * (count + 1));
	if (!word)
		return (NULL);
	count = -1;
	while (s[++count] && c != s[count])
		word[count] = s[count];
	word[count] = '\0';
	return (word);
}

static int	wordcount(char const *s, char c)
{
	int	count;
	int	res;

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

char	**ft_split(char const *s, char c)
{
	int		count[2];
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	count[0] = 0;
	count[1] = 0;
	while (s[count[0]])
	{
		while (s[count[0]] && c == s[count[0]])
			count[0]++;
		if (s[count[0]] && c != s[count[0]])
		{
			res[count[1]++] = setword(&s[count[0]], c);
			if (!res)
				return (freemem(res, count[1] - 1));
			while (s[count[0]] && c != s[count[0]])
				count[0]++;
		}
	}
	res[count[1]] = 0;
	return (res);
}

// word : fragment to split

//20    : loop to free each instance of res
//25    : free res proper
//35    : get word length
//37    : allocate memory for word and check iterate
//40    : restart the counter to -1 for the while loop
//41    : loop to write the word from s into the allocated memory
//56    : loop to find the start of word
//58    : find s[] != c -> start of a word and add to length
//60    : loop to find the end of word
//71    : check str for protection
//73    : create and check the res malloc
//78    : loop to iterate the str
//80    : iter str while s[] == c
//82    : Find s[] != c -> start of a word
//84    : fill res with the word found
//85    : Check if res is correct
//87    : loop to go to end of word