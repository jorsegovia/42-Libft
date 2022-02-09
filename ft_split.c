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
