/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:29:52 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/18 11:30:03 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
atoi(const char *str);

DESCRIPTION
	The atoi() function converts the initial portion of the string
	pointed to by str to int representation.

	It is equivalent to:
		(int)strtol(str, (char **)NULL, 10);
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f' || *str == ' ')
		++str;
	if (*str == '-')
		negative = -1;
	else
		negative = 1;
	if (negative == -1 || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}
