/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:43:57 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:43:59 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
	strncmp() lexicographically compares the null-terminated strings s1 and s2.

	It compares not more than n characters. 
	Because strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.

RETURN VALUES
	strncmp() functions returns an integer greater than, 
	equal to, or less than 0,
	according as the string s1 is greater than, equal to, 
	or less than the string s2.
	The comparison is done using unsigned characters, 
	so that `\200' is greater than `\0'.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t c;

	c = 0;
	while (c < n && (s1[c] || s2[c]))
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return (0);
}