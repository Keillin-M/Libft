/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:43:13 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 12:55:52 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	value = 42;
	t_list	*new = ft_lstnew(&value);
	
	if (new != NULL)
	{
		printf("Node created with content, %d\n", *(int *)new->content);
		if (new->next == NULL)
			printf("Next pointer is NULL\n");
		else
			printf("Next pointer is not NULL\n");
	}
	else
		printf("Failed to create a new node\n");
	free(new);
	return (0);
}
