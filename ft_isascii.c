/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:30:58 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:31:00 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
isascii(int c);

DESCRIPTION
	The isascii() function tests for an ASCII character,
	which is any character between 0 and octal 0177 inclusive.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
