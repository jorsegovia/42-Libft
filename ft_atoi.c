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

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	negative;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = -1;
	else
		negative = 1;
	if (negative == -1 || str[i] == '+')
		i++;
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
	}
	return (res * negative);
}
