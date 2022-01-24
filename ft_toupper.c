/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:44:23 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:44:25 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
toupper(int c);

DESCRIPTION
	The toupper() function converts a lower-case letter to the corresponding 
	upper-case letter.  The argument must be representable as an unsigned char 
	or the value of EOF.

RETURN VALUES
	If the argument is a lower-case letter, the toupper() function returns the 
	corresponding upper-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
