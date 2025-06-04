/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:10:34 by kmaeda            #+#    #+#             */
/*   Updated: 2025/05/19 15:19:04 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*n1 = ft_lstnew("One");
	t_list	*n2 = ft_lstnew("Two");
	t_list	*n3 = ft_lstnew("Three");

	n1->next = n2;
	n2->next = n3;
	
	t_list	*last = ft_lstlast(n1);

	if (last)
		printf("Last node = %s\n", (char *)last->content);
	else
		printf("Empty list\n");
	free(n3);
	free(n2);
	free(n1);
	return (0);
}
