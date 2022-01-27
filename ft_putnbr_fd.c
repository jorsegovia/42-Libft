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

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num % 10 + '0', fd);
}
