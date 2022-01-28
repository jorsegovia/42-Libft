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
	int	isneg;
	size_t	len;
	long    num;
	
	num = n;
	if (num < 0)	//check for neg
		isneg = 1;
	else
		isneg = 0;
	len = ft_getlen(num);
	str = malloc(sizeof(char) * (len + 1));	//assign memory
	if (!str)
		return (NULL);	//check memory assignation
	str[len--] = '\0';	//write str end char
	if (isneg)	//write neg if needed
	{
		str[0] = '-';
		num = num * -1;
	}
	if (num == 0)
	{
		str[0] = '0';	//plan for n = 0
	}
	while (num > 0)	//run the conversion
	{
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
