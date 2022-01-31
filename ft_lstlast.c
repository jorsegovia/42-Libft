/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:47 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:20:49 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The beginning of the list.
Return value
	Last node of the list
External functs.
	None
Description
	Returns the last node of the lis
*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst != NULL)
	{
		temp = lst;
		while (1)	//permanent loop to find the last
		{	//If try to assing next = NULL; current is last node
			if (temp->temp == NULL)
				return (temp);
			temp = temp->temp;
		}
	}
	return (NULL);	//return for no infinite loops
}
