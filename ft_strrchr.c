/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:41:49 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/21 11:41:51 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

char *
strrchr(const char *s, int c);

DESCRIPTION
	The strrchr() function is identical to strchr(), 
	except it locates the last occurrence of c.

RETURN VALUES
	The functions strchr() and strrchr() return a pointer to the 
	located character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)(s + count));
		count--;
	}
	return (NULL);
}
