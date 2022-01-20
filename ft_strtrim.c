/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:59 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:59:01 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
	s1: The string to be trimmed.
	set: The reference set of characters to trim.

Return value 
	The trimmed string.
	NULL if the allocation fails.

External functs
	malloc
	
Description
	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
	specified in ’set’ removed from the beginning and the end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{

}