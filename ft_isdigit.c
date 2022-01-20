/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:31:10 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:31:13 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
isdigit(int c);

DESCRIPTION
	The isdigit() function tests for a decimal digit character.
	Regardless of locale, this includes the following characters only:

	``0''	``1''	``2''	``3''	``4''
	``5''	``6''	``7''	``8''	``9''

	The value of the argument must be representable
	as an unsigned char or the value of EOF.

RETURN VALUES
	The isdigit() functions return zero if the character tests false
	and return non-zero if the character tests true.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (c);
}
