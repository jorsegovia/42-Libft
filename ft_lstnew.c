/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:54 by jsegovia          #+#    #+#             */
/*   Updated: 2022/01/20 15:20:56 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters content:
	The content to create the node with.

Return value
	The new node

External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a new node.
	The member variable ’content’ is initialized with 
	the value of the parameter ’content’. The variable
	’next’ is initialized to NULL
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

//36: try to allocate memory
//39: load variables as requested