/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:41 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:42 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
	s1: The prefix string.
	s2: The suffix string.
Return value 
	The new string.
	NULL if the allocation fails.
External functs.
	malloc
Description
	Allocates (with malloc(3)) and returns a new string,
	which is the result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	count;
	size_t	counter;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	count = 0;
	counter = 0;
	while (s1[count])
	{
		str[counter++] = s1[count];
		count++;
	}
	count = 0;
	while (s2[count])
	{
		str[counter++] = s2[count];
		count++;
	}
	str[counter] = 0;
	return (str);
}
