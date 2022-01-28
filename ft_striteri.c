/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:33 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:35 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string on which to iterate.
	f: The function to apply to each character.

Return value
	None

External functs.
	None

Description
	Applies the function ’f’ on each character of the string passed as argument,
	passing its index as first argument. Each character is passed by
	address to ’f’ to be modified if necessary
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	c;

	if (!s)
		return ;
	c = 0;
	while (s[c])
	{
		f(c, s + c);
		c++;
	}
}
