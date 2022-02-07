/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:06 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:20:19 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The beginning of the list.
Return value
	The length of the list
External functs.
	None
Description
	Counts the number of nodes in a lis
*/

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*next;

	count = 0;
	next = lst;	//Set the placeholder list
	while (next != NULL)	//Loop to count nodes
	{
		next = next -> next;
		count++;
	}
	return (count);
}
