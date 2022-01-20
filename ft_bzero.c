/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:30:12 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:30:14 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void
bzero(void *s, size_t n);

DESCRIPTION
	The bzero() function writes n zeroed bytes to the string s.
	If n is zero, bzero() does nothing.
*/
#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int	count;

	if (!s)
		return ;
	count = 0;
	while (count < n)
	{
		*(char *)(s + count) = 0;
		count++;
	}
}
