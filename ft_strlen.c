/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:43:45 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:43:47 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlen(const char *s);

DESCRIPTION
	The strlen() function computes the length of the string s.

RETURN VALUES
	The strlen() function returns the number of characters that precede the 
	terminating NUL character.
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
