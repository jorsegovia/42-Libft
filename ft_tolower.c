/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:44:16 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:44:17 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
tolower(int c);
DESCRIPTION
	The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument
	must be representable as an unsigned char or the value of EOF.

RETURN VALUES
	If the argument is an upper-case letter, the tolower() function returns 
	the corresponding lower-case letter if there is one; 
	otherwise, the argument is returned unchanged.
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
