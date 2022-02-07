/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:57:36 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 12:57:39 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	n: the integer to convert.

Return value
	The string representing the integer.
	NULL if the allocation fails.
External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a string representing
	the integer received as an argument.
	Negative numbers must be handled.
*/

#include "libft.h"

static int	ft_getlen(long num)
{
	int	c;

	c = 0;
	if (num < 0)
	{
		num *= -1;
		c++;
	}
	while (1)
	{
		num /= 10;
		c++;
		if (num == 0)
			return (c);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		isneg;
	size_t	len;
	long	num;

	num = n;
	isneg = (n < 0);//check for neg
	len = ft_getlen(num);
	//assign memory
	str = malloc(sizeof(char) * (len + 1));
	//check memory assignation
	if (!str)
		return (NULL);
	//write str end char
	str[len--] = '\0';
	//write neg if needed
	if (isneg)
	{
		str[0] = '-';
		num = num * -1;
	}
	//plan for n = 0
	if (num == 0)
		str[0] = '0';
	//run the conversion
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
