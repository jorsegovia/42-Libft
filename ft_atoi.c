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
	unsigned long long int	res;
	int	negative;

	negative = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	if (res > 9223372036854775807 && negative < 0)
		return (0);
	if (res > 9223372036854775807 && negative > 0)
		return (-1);
	return (res * negative);
}
