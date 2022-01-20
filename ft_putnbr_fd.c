/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:58:08 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:58:09 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	n: The integer to output.
	fd: The file descriptor on which to write.

Return value
	None

External functs.
	write

Description
	Outputs the integer ’n’ to the given file descriptor
*/

#include "libft.h"

int ft_getabs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int	neg;
	int	len;

	neg = 1;
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{

	}
}
