/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:19:39 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:19:40 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node.

Return value
	None

External functs
	free

Description
	Deletes and frees the given node and every successor
	of that node, using the function ’del’ and free(3).
	Finally, the pointer to the list must be set to NULL
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;		//save the next position before use of current
		(*del)((*lst)->content);	//apply del to content
		free(*lst);					//free current mem postion
		*lst = temp;				//load next position from temp
	}
}
