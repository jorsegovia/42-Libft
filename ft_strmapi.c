/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:49 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:51 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string on which to iterate.
	f: The function to apply to each character.

Return value
	The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.

External functs.
	malloc

Description
	Applies the function ’f’ to each character of the string ’s’,
	and passing its index as first argument to create a new string (with malloc(3))
	resulting from successive applications of ’f
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}