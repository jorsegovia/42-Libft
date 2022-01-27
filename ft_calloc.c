/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:46:30 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 13:46:32 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
calloc(size_t count, size_t size);

DESCRIPTION
	The calloc() function contiguously allocates enough space for count objects
	that are size bytes of memory each and returns a pointer to the allocated 
	memory.
	The allocated memory is filled with bytes of value zero.

RETURN VALUES
	If successful, calloc() functions return a pointer to allocated memory.
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = malloc(size * count)))
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}