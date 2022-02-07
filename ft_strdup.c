/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:46:39 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 13:46:41 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strdup(const char *s1);

DESCRIPTION
	The strdup() function allocates sufficient memory for a copy of the 
	string s1,
	does the copy, and returns a pointer to it.
	The pointer may subsequently be used as an argument to the function 
	free(3).

	If insufficient memory is available, NULL is returned and errno is set 
	to ENOMEM.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

//As per man strdup 
//If insufficient memory is available, 
//NULL is returned and errno is set to ENOMEM.
//36:	errno = ENOMEM;