/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:19:27 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:19:29 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.

Return value
	None

External functs.
	None

Description
	Adds the node ’new’ at the end of the lis
*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst)	//check if lst exists
		return;
	if (*lst == NULL)	//check for empty list
		*lst = new;		//asign new as value to lst
	else
	{
		temp = ft_lstlast(*lst);	//goto last position
		temp->next = new;			//add new to list
	}
}
