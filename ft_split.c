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


char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*aux;
	size_t	pos;
	size_t	count;
	size_t	num;

	count = 0;
	num = 0;
	//travel str
	while (s[count] != '\0')
	{
		if (s[count] == c) //find char
		{
			pos = count;	//save position
			while (s[count++] != c)	//find nex occur of char
				count++;
			aux = malloc(sizeof(*s) * (count - pos + 1));	//allocate memory
			if (!aux)
				return (NULL);
			arr[num++] = aux;
		}
		count++;
	}
	return (arr);
}
