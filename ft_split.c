/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:24 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:26 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string to be split.
	c: The delimiter character.

Return value 
	The array of new strings resulting from the split.
	NULL if the allocation fails.

External functs
	malloc, free

Description
	Allocates (with malloc(3)) and returns an array of strings obtained 
	by splitting ’s’ using the character ’c’ as a delimiter.
	The array must end with a NULL pointer
*/

#include "libft.h"

char	**ft_split(char const *s, char c)
{

}