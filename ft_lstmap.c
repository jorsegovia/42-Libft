/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:19:55 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:19:57 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.
	del: The address of the function used to delete the content of a node if needed.

Return value 
	The new list.
	NULL if the allocation fails.

External functs.
	malloc, free

Description
	Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
	Creates a new list resulting of the successive applications of the function ’f’.
	The ’del’ function is used to delete the content of a node if needed
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	t_list *temp;

	//Check if lst exists and if its content is valid
	if (!lst || !(temp = ft_lstnew(f(lst->content))))
	temp = ft_lstnew(f(lst->content));
	if (!lst || !temp)
		return (NULL);
	res = temp;
	//run through the list
	while (lst->next)
	{
		lst = lst->next;
		//Apply f to each node
		if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			//if not possible clear and return
			ft_lstclear(&res, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (res);
}
